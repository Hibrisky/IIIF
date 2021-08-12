using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class IF_AlarmPopup : MonoBehaviour
{
    public Text Txt_Title;
    public Text Txt_Plane;

    public GameObject Panel_OneBtn;
    public GameObject Panel_TwoBtn;

    public Button Btn_Okey_1;
    public Button Btn_Okey_2;
    public Button Btn_Cancel;



    // Start is called before the first frame update
    void Awake()
    {
        //if (Btn_Okey_1 != null)
        //    Btn_Okey_1.onClick.AddListener(OnClick_OkayBtn);
        //
        //if (Btn_Okey_2 != null)
        //    Btn_Okey_2.onClick.AddListener(OnClick_OkayBtn);
        //
        //if (Btn_Cancel != null)
        //    Btn_Cancel.onClick.AddListener(OnClick_Close);

        if (Panel_OneBtn != null)
            Panel_OneBtn.SetActive(false);
        if (Panel_TwoBtn != null)
            Panel_TwoBtn.SetActive(false);
    }

    public void CloseOneBtnPopupAndBackToMain(GameObject go,int uiID, string _title, string _plane)
    {
        Panel_OneBtn.SetActive(true);

        if (Btn_Okey_1 != null)
            Btn_Okey_1.onClick.AddListener(delegate { OnClick_OneBtnPopupAndGoMain(go, uiID);} );

        Txt_Title.text = _title;
        Txt_Plane.text = _plane;
    }

    public void OneButton_AlarmPopup(string _title, string _plane)
    {
        Panel_OneBtn.SetActive(true);

        if (Btn_Okey_1 != null)
            Btn_Okey_1.onClick.AddListener(OnClick_OkayBtn);

        Txt_Title.text = _title;
        Txt_Plane.text = _plane;
    }
    public void TwoButton_AlarmPopup(string _title, string _plane)
    {
        Panel_TwoBtn.SetActive(true);

        Txt_Title.text = _title;
        Txt_Plane.text = _plane;
    }


    void OnClick_OneBtnPopupAndGoMain(GameObject go, int uiID)
    {
        UIManager._Instance.CloseUIWindow(go, uiID);//
        UIManager._Instance.CloseUIPopup(this.gameObject, 5);
        UIManager._Instance.ShowUIWindow(3);//메인 화면.
    }

    void OnClick_OkayBtn()
    {
        UIManager._Instance.CloseUIPopup(this.gameObject, 5);
    }

    void OnClick_Close()//취소.
    {
        UIManager._Instance.CloseUIPopup(this.gameObject, 5);
    }
}
