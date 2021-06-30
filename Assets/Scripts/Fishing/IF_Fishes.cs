using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class IF_Fishes : MonoBehaviour
{
    //물고기 움직임만 필요하다.
    // Start is called before the first frame update
    Vector3 CurrentPos = Vector3.zero;
    Vector3 GoalPos = Vector3.zero;
    float Speed = 5f;
    public float m_Distance;
    public bool IsBite = true;

    public float m_FishHP = 100.0f;

    public void SetBite(bool _bite) { IsBite = _bite; }
    public Vector3 GetFishPos() { return CurrentPos; } //물고기를 따라다니는 UI 표시를 하기 위해.

    void Start()
    {
        CurrentPos = transform.localPosition;
        DynamicMoving();
    }

    // Update is called once per frame
    void Update()
    {
        if (IsBite)
        {
            CurrentPos = transform.localPosition;
            float _distance = Vector3.Distance(CurrentPos, GoalPos);
            if (_distance < 1f)
            {
                DynamicMoving();
            }
            else
            {
                Speed = 5f;
            }
            transform.localPosition = Vector3.MoveTowards(CurrentPos, GoalPos, Speed * Time.deltaTime);
        }
    }

    public void DynamicMoving()
    {
        GoalPos.x = Random.Range(-9f, 9f);
        GoalPos.y = 0;
        GoalPos.z = m_Distance + Random.Range(-5f, 5f);
    }
}
