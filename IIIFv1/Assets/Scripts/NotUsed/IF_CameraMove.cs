using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
//using UnityEngine.UI;

public class IF_CameraMove : MonoBehaviour
{
    public IF_VirtualPad m_VirtualPad;
    public IF_FixedTouchField TouchField;
    public float m_MoveSpeed;

    Vector3 _moveVector;
    Transform _transform;

    float rotX = 0f;
    float rotY = 0f;
    Vector3 origRot;
    public float rotSpeed;
    float dir = -1;
    // Start is called before the first frame update
    void Start()
    {
        Screen.orientation = ScreenOrientation.LandscapeLeft;

        _moveVector = Vector3.zero;
        _transform = transform;

        origRot = transform.eulerAngles;
        rotX = origRot.x;
        rotY = origRot.y;
    }

    // Update is called once per frame
    void Update()
    {
        HandleInput();
    }

    private void FixedUpdate()
    {
        Move();
        Rotate();
    }

    public void HandleInput()
    {
        _moveVector = PoolInput();
    }

    public Vector3 PoolInput()
    {
        float h = m_VirtualPad.GetHorizontalValue();
        float v = m_VirtualPad.GetVerticalValue();
        Vector3 moveDir = new Vector3(h, 0, v).normalized;

        return moveDir;
    }

    void Rotate()
    {
        float deltaX = TouchField.TouchDist.x;
        float deltaY = TouchField.TouchDist.y;

        rotX += deltaX * Time.deltaTime * rotSpeed * -dir;
        rotY -= deltaY * Time.deltaTime * rotSpeed * -dir;

        rotY = Mathf.Clamp(rotY, -45f, 45f);

        transform.eulerAngles = new Vector3(rotY, rotX, 0);
    }
  
    public void Move()
    {
        _transform.Translate(_moveVector * m_MoveSpeed * Time.deltaTime);    
    }

}
