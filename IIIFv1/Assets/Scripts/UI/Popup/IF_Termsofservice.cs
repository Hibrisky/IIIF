using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class IF_Termsofservice : MonoBehaviour
{
    public Text Txt_PopupName;
    public Text Txt_ExplainBox;
    public Toggle Tog_CheckBox;
    public Text Txt_Agree;
    public Text Txt_Next;
    public Button Btn_Next;

    // Start is called before the first frame update
    void Start()
    {
        if (Btn_Next != null)
        {
            Btn_Next.onClick.AddListener(OnClick_NextBtn);
            Btn_Next.interactable = false;
        }
        if (Tog_CheckBox != null)
        {
            Tog_CheckBox.isOn = false;
        }
    }

    private void Update()
    {
        if (Tog_CheckBox.isOn)
            Btn_Next.interactable = true;
        else
            Btn_Next.interactable = false;
    }

    void OnClick_NextBtn()
    {
        UIManager._Instance.ShowUIPopup(1);//개인정보 보호 방침?
        UIManager._Instance.CloseUIPopup(this.gameObject,2);
    }

    private void OnDestroy()
    {
        Txt_PopupName = null;
        Txt_ExplainBox = null; 
        Tog_CheckBox = null;
        Txt_Agree = null;
        Txt_Next = null;
        Btn_Next = null;
    }
}
