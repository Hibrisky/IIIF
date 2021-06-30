using System;
using System.Diagnostics;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.Android;
using UnityEngine.Assertions;
using Debug = UnityEngine.Debug;
#if ENABLE_AR_FOUNDATION_REMOTE_LOCATION_SERVICES
    using LocationService = UnityEngine.LocationService;
    using LocationServiceStatus = UnityEngine.LocationServiceStatus;
#else
    using LocationService = ARFoundationRemote.LocationServiceRemote;
    using LocationServiceStatus = ARFoundationRemote.LocationServiceStatusDummy;
#endif


namespace ARFoundationRemote.Runtime {
    public class LocationServicesSender : ISubsystemSenderUpdateable {
        LocationDataPlayer prevData;

        
        public void EditorMessageReceived(EditorToPlayerMessage data) {
            var maybeLocationData = data.locationData;
            if (!maybeLocationData.HasValue) {
                return;
            }

            var locationData = maybeLocationData.Value;
            if (locationData.isStart) {
                log("location.Start()");
                if (Defines.isAndroid) {
                    Permission.RequestUserPermission(Permission.FineLocation);
                }
                
                Assert.IsTrue(locationData.desiredAccuracyInMeters.HasValue);
                Assert.IsTrue(locationData.updateDistanceInMeters.HasValue);
                location.Start(locationData.desiredAccuracyInMeters.Value, locationData.updateDistanceInMeters.Value);
            } else {
                log("location.Stop();");
                location.Stop();
            }
        }

        public void UpdateSender() {
            if (!Defines.enableLocationServices || !Sender.isConnected) {
                return;
            }
            
            var newData = new LocationDataPlayer {
                status = location.status,
                lastData = location.status == LocationServiceStatus.Running ? LocationInfoSerializable.Create(location.lastData) : (LocationInfoSerializable?) null,
                isEnabledByUser = location.isEnabledByUser,
            };

            if (!prevData.Equals(newData)) {
                log("send location data");
                prevData = newData;
                new PlayerToEditorMessage {
                    locationData = newData
                }.Send();
            }
        }

        static LocationService location {
            get {
                #if ENABLE_AR_FOUNDATION_REMOTE_LOCATION_SERVICES
                    return UnityEngine.Input.location;
                #else
                    throw new Exception(LocationServiceRemote.missingDefineError);;
                #endif
            }
        }
        
        [Conditional("_")]
        public static void log(string msg) {
            Debug.Log(msg);
        }
    }
    

    [Serializable]
    public struct LocationDataPlayer {
        public LocationServiceStatus status;
        public LocationInfoSerializable? lastData;
        public bool isEnabledByUser;
    }


    [Serializable]
    [StructLayout(LayoutKind.Sequential)]
    public struct LocationInfoSerializable {
        [SerializeField] double m_Timestamp;
        [SerializeField] float m_Latitude;
        [SerializeField] float m_Longitude;
        [SerializeField] float m_Altitude;
        [SerializeField] float m_HorizontalAccuracy;
        [SerializeField] float m_VerticalAccuracy;

        
        public static LocationInfoSerializable Create(LocationInfo _) {
            return new Union {nonSerializable = _}.serializable;
        }

        public LocationInfo Deserialize() {
            return new Union {serializable = this}.nonSerializable;
        }
        
        [StructLayout(LayoutKind.Explicit)]
        struct Union {
            [FieldOffset(0)] public LocationInfoSerializable serializable;
            [FieldOffset(0)] public LocationInfo nonSerializable;
        }
    }
}
