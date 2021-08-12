using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using System;

public class AirplaneTap : MonoBehaviour
{
    public GameObject placementIndicator;   
    Pose PlacementPose;                     
    ARRaycastManager arRaycastManager;      
    bool placementPoseIsValid = false;

    public Camera arCamera;
    public GameObject[] SpawnObj;

    // Start is called before the first frame update
    void Start()
    {
        arRaycastManager = FindObjectOfType<ARRaycastManager>();
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKey(KeyCode.Escape))
            Application.Quit();

        UpdatePlacementPose();
        UpdatePlacementIndicator();

        if (placementPoseIsValid && Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            PlaceObject();
        }
    }

    private void PlaceObject()
    {
        Instantiate(SpawnObj[0], PlacementPose.position, PlacementPose.rotation);
        #region
        //if (!SpawnObj[0].activeInHierarchy)
        //{
        //    SpawnObj[0].SetActive(true);
        //    SpawnObj[0].transform.position = PlacementPose.position;
        //    SpawnObj[0].transform.rotation = PlacementPose.rotation;
        //}
        #endregion
    }
   
    private void UpdatePlacementPose()  //지면 탐색 후 바닥에 표시 할 좌표 업데이트.
    {
        var screenCenter = arCamera.ViewportToScreenPoint(new Vector3(0.5f, 0.5f));
        var hits = new List<ARRaycastHit>();
        arRaycastManager.Raycast(screenCenter,hits,TrackableType.Planes);

        placementPoseIsValid = hits.Count > 0;

        if (placementPoseIsValid)
        {
            PlacementPose = hits[0].pose;

            var cameraForward = arCamera.transform.forward;
            var cameraBearing = new Vector3(cameraForward.x, 0, cameraForward.z).normalized;

            PlacementPose.rotation = Quaternion.LookRotation(cameraBearing);
        }
    }
    private void UpdatePlacementIndicator()//UpdatePlacementPose를 통한 좌표 업데이트 후 이미지에 전달.
    {

        if (placementPoseIsValid)
        {
            placementIndicator.SetActive(true);
            placementIndicator.transform.SetPositionAndRotation(PlacementPose.position, PlacementPose.rotation);
        }
        else
            placementIndicator.SetActive(false);
    }

}
