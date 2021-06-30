using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class IF_PlayerMove : MonoBehaviour
{
    public IF_VirtualPad m_VirtualPad;
    public float m_MoveSpeed;

    Vector3 _moveVector;
    Transform _transform;

    public GameObject[] InterectObject;

    public Text InterectObjName;
    
    // Start is called before the first frame update
    void Start()
    {
        Screen.orientation = ScreenOrientation.LandscapeLeft;

        _moveVector = Vector3.zero;
        _transform = transform;
    }

    // Update is called once per frame
    void Update()
    {
        HandleInput();
        ObjectInterection();
    }

    private void FixedUpdate()
    {
        Move();
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

    void ObjectInterection()
    {
        //if(Input.GetMouseButtonDown(0))
        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            Vector3 TouchPos = new Vector3(Input.GetTouch(0).position.x, Input.GetTouch(0).position.y, 0);
            Ray ray = Camera.main.ScreenPointToRay(TouchPos);
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit))
            {
                InterectObjName.text = "RayCast 충돌 물체 이름 : " + hit.collider.gameObject.name;
                Debug.Log("RayCast 충돌 물체 이름 : " + hit.collider.gameObject.name);
                //if(hit.collider.gameObject == )
            }
        }
    }

    public void Move()
    {
        _transform.Translate(_moveVector * m_MoveSpeed * Time.deltaTime);
    }
}
