using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class IF_ObjectRotation : MonoBehaviour
{
    public IF_FixedTouchField m_TouchField;
    public Transform Cube;

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
        float deltaX = m_TouchField.TouchDist.x;
        float deltaY = m_TouchField.TouchDist.y;

        rotX += deltaX * Time.deltaTime * rotSpeed * dir;
        rotY -= deltaY * Time.deltaTime * rotSpeed * dir;

        Cube.eulerAngles = new Vector3(rotY, rotX, 0);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "MainCamera")
        {
            Debug.Log("OnTriggerEnter : 퍼즐 조각 맞추기 완료.");
            GameManager.Instance.ClearPuzzle();
        }
    }
}
