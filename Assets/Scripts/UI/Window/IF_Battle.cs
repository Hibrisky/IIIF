using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class IF_Battle : MonoBehaviour
{
    public Button Btn_Charm;//부적
    public Button Btn_inventory;//가방.

    public GameObject m_PrefabCharm;
    public GameObject m_CharmPos;
    //부적을 어떻게하면될까....

    // Start is called before the first frame update
    void Start()
    {
        Btn_Charm.onClick.AddListener(OnClick_CreateCharm);
        Btn_inventory.onClick.AddListener(OnClick_Inventory);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnClick_CreateCharm()
    {
        //부적 오브젝트 생성. 및 부적은 어케날리지...
        Instantiate(m_PrefabCharm, m_CharmPos.transform);
    }

    void OnClick_Inventory()
    {
        //아이템창 활성화. 미정.
        Debug.Log("Open the Inventory");
    }
}
