using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class IF_QuestList_item : MonoBehaviour
{
    public Button Btn_Touch_ListItem;
    public Text Txt_Title;

    [SerializeField]
    int Index = 0;

    // Start is called before the first frame update
    void Start()
    {
        if (Btn_Touch_ListItem != null)
            Btn_Touch_ListItem.onClick.AddListener(OnClick_ListItem);
    }
  
    //�ӽ� �ڵ�
    public void CreateListItem(int index, string name)
    {
        Txt_Title.text = name;
        Index = index;
    }

    void OnClick_ListItem()
    {
        //���� �˾� ȣ��.
        Debug.Log("���� ���Ǽҵ� : " +  Index.ToString());
    }
}
