using ARFoundationRemote.Runtime;
using UnityEngine;
using UnityEngine.Assertions;


namespace ARFoundationRemote {
    public  static partial class Input {
        #if UNITY_EDITOR
        static Touch? mouseTouch => SimulateTouchWithMouse.Instance.FakeTouch;
        #endif
        

        public static int touchCount {
            get {
                #if UNITY_EDITOR
                if (!UnityEditor.EditorApplication.isRemoteConnected) {
                    if (mouseTouch.HasValue) {
                        return 1;
                    } else {
                        return TouchInputReceiver.Touches.Length;
                    }
                }
                #endif
                
                return UnityEngine.Input.touchCount;
            }
        }

        public static Touch GetTouch(int index) {
            #if UNITY_EDITOR
            if (!UnityEditor.EditorApplication.isRemoteConnected) {
                if (mouseTouch.HasValue) {
                    Assert.IsTrue(index == 0);
                    return mouseTouch.Value;
                } else {
                    return TouchInputReceiver.Touches[index];
                }
            }
            #endif

            return UnityEngine.Input.GetTouch(index);
        }

        public static Touch[] touches {
            get {
                #if UNITY_EDITOR
                if (!UnityEditor.EditorApplication.isRemoteConnected) {
                    if (mouseTouch.HasValue) {
                        return new[] {mouseTouch.Value};
                    } else {
                        return TouchInputReceiver.Touches;
                    }
                }
                #endif
                
                return UnityEngine.Input.touches;
            }
        }
    }
}
