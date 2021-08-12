using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class IF_UpdatePopup : MonoBehaviour
{
    public Button Btn_Update;
    public Button Btn_Cancel;
    public Text Txt_UpdateAlarm;
    public Text Txt_Contents;

    // Start is called before the first frame update
    void Start()
    {
        Btn_Update.onClick.AddListener(OnClick_BtnUpdate);
        Btn_Cancel.onClick.AddListener(OnClick_BtnCancel);
    }


    void OnClick_BtnUpdate()
    {
        //임시
        //this.gameObject.SetActive(false);
       
        UIManager._Instance.ShowUIWindow(2);
        UIManager._Instance.CloseUIPopup(this.gameObject,3);
    }

    void OnClick_BtnCancel()
    {
        //임시
        //this.gameObject.SetActive(false);
        UIManager._Instance.CloseUIPopup(this.gameObject,3);
        Application.Quit();
    }
}
