using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class IF_PrivacyStatement : MonoBehaviour
{
    public Text Txt_PopupName;
    public Text Txt_ExplainBox;
    public Toggle Tog_CheckBox;
    public Text Txt_Agree;
    public Text Txt_Check;
    public Button Btn_Check;

    // Start is called before the first frame update
    void Start()
    {
        if (Btn_Check != null)
        {
            Btn_Check.onClick.AddListener(OnClick_Okay);
            Btn_Check.interactable = false;

        }

        if (Tog_CheckBox != null)
            Tog_CheckBox.isOn = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (Tog_CheckBox.isOn)
            Btn_Check.interactable = true;
        else
            Btn_Check.interactable = false;
    }

    void OnClick_Okay()
    {
        UIManager._Instance.ShowUIPopup(0);//계정 연동.
        UIManager._Instance.CloseUIPopup(this.gameObject);
    }

    private void OnDestroy()
    {
        Txt_PopupName = null;
        Txt_ExplainBox = null;
        Tog_CheckBox = null;
        Txt_Agree = null;
        Txt_Check = null;
        Btn_Check = null;
    }
}
