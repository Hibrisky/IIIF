using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class IF_QuestPopup : MonoBehaviour
{
    public Button Btn_Close;
    public GameObject Scr_QuestList;

    public GameObject ListItem;

    // Start is called before the first frame update
    void Start()
    {
        if (Btn_Close != null)
            Btn_Close.onClick.AddListener(OnClick_CloseBtn);

        CreateOnQuestList();
    }

    private void OnClick_CloseBtn()
    {
        UIManager._Instance.CloseUIPopup(this.gameObject,7);
    }

    void CreateOnQuestList()
    {
        if(ListItem != null)
        {
            for (int i = 0; i < 5; i++)
            {
                GameObject temp = Instantiate(ListItem, Scr_QuestList.transform);
                temp.GetComponent<IF_QuestList_item>().CreateListItem(i, "EPISODE " + (i + 1).ToString());
            }
        }
    }
}
