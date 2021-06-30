using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class IF_Acceleration : MonoBehaviour
{
    public Text _gravity, _attitude, _rotationRate, _userAcceleration;
    public Transform cubeTransform;

    private void Start()
    {
        Input.gyro.enabled = true;
    }

    private void Update()
    {
        var gravity = Input.gyro.gravity;
        var attitude = Input.gyro.attitude;
        var rotationRate = Input.gyro.rotationRate;
        var userAcceleration = Input.gyro.userAcceleration;

        _gravity.text = "gravity : " + gravity.ToString();
        _attitude.text = "attitude : " + attitude.ToString();
        _rotationRate.text = "rotationRate : " + rotationRate.ToString();


        cubeTransform.rotation = attitude;//new Quaternion(0.5f, 0.5f, -0.5f, 0.5f) *
            //attitude * new Quaternion(0, 0, 1, 0);//Quaternion.Euler(new Vector3(attitude.eulerAngles.x,0,0));

        _userAcceleration.text = "Obj Rotation : " + cubeTransform.rotation.ToString();
    }
}
