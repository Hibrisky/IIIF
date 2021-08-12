using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PieceScript : MonoBehaviour
{
    Vector3 RightPos;
    public bool InRightPos = false;
    public bool Selected;
    public bool IsStart = false;

    //퍼즐 포지션 초기화 함수 필요.

    // Update is called once per frame
    void Update()
    {
        if (Vector3.Distance(transform.position, RightPos) < 0.5f)
        {
            if (!Selected)
            {
                transform.position = RightPos;
                InRightPos = true;
            }
        }
    }

    public void RandomPiecePos()
    {
        RightPos = transform.position;
        transform.position = new Vector3(Random.Range(-2f, 3f), Random.Range(-3f, -4f),13);
        IsStart = true;
    }

    public void PiecePosInit()
    {
        transform.position = RightPos;//원복.
    }
}
