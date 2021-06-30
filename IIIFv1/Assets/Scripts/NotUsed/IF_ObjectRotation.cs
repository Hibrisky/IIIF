using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class IF_ObjectRotation : MonoBehaviour
{
    public IF_FixedTouchField TouchField;
    public Transform Playerbody;

    float rotX = 0f;
    float rotY = 0f;
    Vector3 origRot;
    public float rotSpeed;
    float dir = -1;
    // Start is called before the first frame update
    void Start()
    {
        origRot = transform.eulerAngles;
        rotX = origRot.x;
        rotY = origRot.y;
    }

    // Update is called once per frame
    void Update()
    {
        Rotate();
    }

    void Rotate()
    {
        float deltaX = TouchField.TouchDist.x;
        float deltaY = TouchField.TouchDist.y;

        rotX += deltaX * Time.deltaTime * rotSpeed * dir;
        rotY -= deltaY * Time.deltaTime * rotSpeed * dir;

        //rotY = Mathf.Clamp(rotY, -45f, 45f);

        transform.eulerAngles = new Vector3(rotY, rotX, 0);
    }
}
