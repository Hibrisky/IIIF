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

    private void OnTriggerEnter(Collider other)//Player�� �浹 Ȯ���� ���Ͱ��Ѵ�? �ƴϴ�.
    {
        if (other.CompareTag("Charm"))
        {
            Debug.Log("Ʈ���� ��ü : " + other.tag);
            Debug.Log("Ʈ���� ��ü : " + other.name);
        }
    }
}
