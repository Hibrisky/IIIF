using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PieceScript : MonoBehaviour
{

    Vector3 RightPos;
    public bool InRightPos = false;
    public bool Selected;
    public bool IsStart = false;

    public bool GetStartCheck() { return IsStart; }
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
        transform.position = new Vector3(Random.Range(0f, 3f), Random.Range(-7f, -11f));
        IsStart = true;
    }
}
