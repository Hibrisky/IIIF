using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IF_Monster : MonoBehaviour
{



    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerEnter(Collider other)//Player와 충돌 확인을 몬스터가한다? 아니다.
    {
        if (other.CompareTag("Charm"))
        {
            Debug.Log("트리거 물체 : " + other.tag);
            Debug.Log("트리거 물체 : " + other.name);
        }
    }
}
