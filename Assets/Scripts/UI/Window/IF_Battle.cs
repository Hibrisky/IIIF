using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class IF_Battle : MonoBehaviour
{
    public Button Btn_Charm;//����
    public Button Btn_inventory;//����.

    public GameObject m_PrefabCharm;
    public GameObject m_CharmPos;
    //������ ����ϸ�ɱ�....

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
        //���� ������Ʈ ����. �� ������ ���ɳ�����...
        Instantiate(m_PrefabCharm, m_CharmPos.transform);
    }

    void OnClick_Inventory()
    {
        //������â Ȱ��ȭ. ����.
        Debug.Log("Open the Inventory");
    }
}
