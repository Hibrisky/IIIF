using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class CameraMove : MonoBehaviour
{
    public GameObject objcamera;

    public Button Right;
    public Button Left;

    // Start is called before the first frame update
    void Start()
    {
        Right.onClick.AddListener(OnClick_Right);
        Left.onClick.AddListener(OnClick_Left);
    }

    // Update is called once per frame
    void Update()
    {
        
    }


    void OnClick_Right()
    {
        float x = objcamera.transform.position.x;
        objcamera.transform.position = new Vector3(x + 10f, 0);
    }

    void OnClick_Left()
    {
        float x = objcamera.transform.position.x;
        objcamera.transform.position = new Vector3(x - 10f, 0);
    }


}
