using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;


[RequireComponent(typeof(ARSessionOrigin))]
[RequireComponent(typeof(ARFaceManager))]
public class IF_CustomView : MonoBehaviour
{
    public GameObject m_WorldSpaceObject;
    public Text Rotation;


    public GameObject worldSpaceObject
    {
        get => m_WorldSpaceObject;
        set => m_WorldSpaceObject = value;
    }

    CameraFacingDirection m_CurrentCameraFacingDirection;
    ARCameraManager m_CameraManager;

    void OnEnable()
    {
        m_CameraManager = GetComponentInChildren<ARCameraManager>();
        m_CurrentCameraFacingDirection = m_CameraManager.currentFacingDirection;
    }

    void Update()
    {
        var updatedCameraFacingDirection = m_CameraManager.currentFacingDirection;
        if (updatedCameraFacingDirection != CameraFacingDirection.None && updatedCameraFacingDirection != m_CurrentCameraFacingDirection)
        {
            if (updatedCameraFacingDirection == CameraFacingDirection.User)
            {
                m_CurrentCameraFacingDirection = updatedCameraFacingDirection;
                GetComponent<ARFaceManager>().enabled = true;
                worldSpaceObject.SetActive(false);
                Application.onBeforeRender -= OnBeforeRender;
            }
            else if (updatedCameraFacingDirection == CameraFacingDirection.World)
            {
                m_CurrentCameraFacingDirection = updatedCameraFacingDirection;
                GetComponent<ARFaceManager>().enabled = false;
                worldSpaceObject.SetActive(true);
                Application.onBeforeRender += OnBeforeRender;


                Rotation.text = worldSpaceObject.transform.rotation.ToString();

            }
        }
    }

    void OnDisable()
    {
        GetComponent<ARFaceManager>().enabled = false;
        Application.onBeforeRender -= OnBeforeRender;
    }

    void OnBeforeRender()
    {
        var camera = GetComponent<ARSessionOrigin>().camera;
        if (camera && worldSpaceObject)
        {
            worldSpaceObject.transform.position = camera.transform.position + camera.transform.forward;
        }
    }
}
