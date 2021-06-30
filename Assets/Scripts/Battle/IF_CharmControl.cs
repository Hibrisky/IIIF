using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IF_CharmControl : MonoBehaviour
{
    Vector2 m_StartPos;
    Vector2 m_EndPos;
    Vector2 m_Direction;

    float m_TouchTimeStart;
    float m_TouchTimeFinish;
    float m_TimeInterval;

    [SerializeField]
    float m_ThrowForceInXandY = 10f;

    [SerializeField]
    float ThrowForceInZ = 50f;

    Rigidbody m_Charm;

    bool m_Dragging = false;
    float m_Distance;

    private void Start()
    {
        m_Charm = GetComponent<Rigidbody>();
    }

    private void Update()
    {
#if !UNITY_EDITOR
        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            m_TouchTimeStart = Time.time;
            m_StartPos = Input.GetTouch(0).position;
        }

        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Ended)
        {
            m_TouchTimeFinish = Time.time;
            m_TimeInterval = m_TouchTimeFinish - m_TouchTimeStart;

            m_EndPos = Input.GetTouch(0).position;

            m_Direction = m_StartPos - m_EndPos;

            m_Charm.useGravity = true;
            m_Charm.AddForce(-m_Direction.x * m_ThrowForceInXandY, -m_Direction.y * m_ThrowForceInXandY,ThrowForceInZ/m_TimeInterval);

            Destroy(gameObject, 3f);
        }
#else
        if (m_Dragging)
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            Vector3 rayPoint = ray.GetPoint(m_Distance);
            transform.position = Vector3.Lerp(this.transform.position, rayPoint, 10 * Time.deltaTime);
        }
#endif

    }

#if UNITY_EDITOR
    private void OnMouseDown()
    {
        m_Dragging = true;
        m_TouchTimeStart = Time.time;
        m_StartPos = Input.mousePosition;
        m_Distance = Vector3.Distance(transform.position, Camera.main.transform.position);
    }

    public void OnMouseUp()
    {
        m_Dragging = false;
        m_TouchTimeFinish = Time.time;
        m_TimeInterval = m_TouchTimeFinish - m_TouchTimeStart;

        m_EndPos = Input.mousePosition;

        m_Direction = m_StartPos - m_EndPos;

        m_Charm.useGravity = true;
        m_Charm.AddForce(-m_Direction.x * m_ThrowForceInXandY, -m_Direction.y * m_ThrowForceInXandY, ThrowForceInZ / m_TimeInterval);

        Destroy(gameObject, 10f);
    }
#endif

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.transform.tag == "Enemy")
        {
            Destroy(gameObject);
        }
    }
}
