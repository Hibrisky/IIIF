

namespace ARFoundationRemote.Runtime {
    public class LocationServicesReceiver : IReceiver {
        public static LocationDataPlayer? locationData;

        
        public void Receive(PlayerToEditorMessage data) {
            if (data.locationData.HasValue) {
                locationData = data.locationData.Value;
            }
        }
    }
}
