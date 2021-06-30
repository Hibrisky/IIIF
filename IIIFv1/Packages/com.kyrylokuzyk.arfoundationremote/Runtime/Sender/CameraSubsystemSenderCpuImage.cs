#if ARFOUNDATION_4_0_2_OR_NEWER
    using XRCameraImageConversionParams = UnityEngine.XR.ARSubsystems.XRCpuImage.ConversionParams;
#else
    using XRCameraImageConversionParams = UnityEngine.XR.ARSubsystems.XRCameraImageConversionParams;
#endif
using System;
using Unity.Collections;
using UnityEngine;
using UnityEngine.XR.ARFoundation;


namespace ARFoundationRemote.Runtime {
    public static class CameraSubsystemSenderCpuImage {
        /// Platforms (Android) that return non-null material in <see cref="ARCameraFrameEventArgsSerializable.getMaterialForTextureBlit"/>
        /// will apply texture UV transformation to it's camera material,
        /// so this remapping is not required on Android:
        /// o.uv = mul(_UnityDisplayTransform, float4(v.uv.x, 1.0f - v.uv.y, 1.0f, 0.0f)).xy;
        /// If we want to send camera video without UV transformation, use this method 
        public static bool TrySend(ARCameraManager cameraManager, ARCameraFrameEventArgs args) {
            const string mainTexPropName = "_MainTex";
            if (!cameraManager.cameraMaterial.HasProperty(mainTexPropName)) {
                return false;
            }

            if (cameraManager.TryAcquireLatestCpuImageVersionAgnostic(out var cpuImage)) {
                using (cpuImage) {
                    var format = TextureFormat.ARGB32;
                    var fullWidth = cpuImage.width;
                    var fullHeight = cpuImage.height;
                    var textureScale = Settings.cameraVideoSettings.resolutionScale;
                    var downsizedWidth = Mathf.RoundToInt(fullWidth * textureScale);
                    var downsizedHeight = Mathf.RoundToInt(fullHeight * textureScale);
                    var conversionParams = new XRCameraImageConversionParams {
                        inputRect = new RectInt(0, 0, fullWidth, fullHeight),
                        outputDimensions = new Vector2Int(downsizedWidth, downsizedHeight),
                        outputFormat = format
                    };

                    var convertedDataSize = tryGetConvertedDataSize();
                    if (convertedDataSize.HasValue) {
                        using (var buffer = new NativeArray<byte>(convertedDataSize.Value, Allocator.Temp)) {
                            if (tryConvert()) {
                                new PlayerToEditorMessage {
                                    cameraData = new CameraData {
                                        cameraFrame = new ARCameraFrameEventArgsSerializable {
                                            frame = XRCameraFrameSerializable.Create(args),
                                            textures = new[] {
                                                new PropIdAndMaybeTexture {
                                                    propName = mainTexPropName,
                                                    texture = new Texture2DSerializable(buffer.ToArray(), downsizedWidth, downsizedHeight, format, false)
                                                }
                                            },
                                            invertCulling = cameraManager.subsystem.invertCulling,
                                        }
                                    }
                                }.Send();
                            }

                            bool tryConvert() {
                                try {
                                    cpuImage.ConvertSync(conversionParams, buffer);
                                    return true;
                                } catch (Exception e) {
                                    processException(e);
                                    return false;
                                }
                            }
                        }
                    }

                    int? tryGetConvertedDataSize() {
                        try {
                            return cpuImage.GetConvertedDataSize(conversionParams);
                        } catch (Exception e) {
                            processException(e);
                            return null;
                        }
                    }

                    void processException(Exception e) {
                        Debug.LogError(e);
                    }
                }
            }

            return true;
        }
    }
}
