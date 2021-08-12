using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class IF_CreateNickName : MonoBehaviour
{
    [SerializeField] InputField Input_Account;
    public Button Btn_Okay;

    public GameObject[] Panel_CreateFail_Alarms;

    // Start is called before the first frame update
    void Start()
    {
        Btn_Okay.onClick.AddListener(OnClick_Okay);

        int count = Panel_CreateFail_Alarms.Length; 
        for (int i = 0; i < count; i++)
        {
            Panel_CreateFail_Alarms[i].SetActive(false);
        }
    }

    void SendUserAccountInfo(string userinfo)
    {
        //ex)
        //if (Input_Account != null)
        //  Protocol.SendAccountInfo(Input_Account.text);

        GameManager.ShowLoadingBySceneChange("3.InGame");
    }

    void OnClick_Okay()
    {
        //Scene이동. 임시.
        if (Input_Account.text != "")
        {
            Debug.Log("Create to Account Info: " + Input_Account.text);

            //서버 호출필요.
            GameManager.Instance.m_UserInfo.user_name = Input_Account.text;
            GameManager.Instance.m_UserInfo.user_point = 12345;

            UIManager._Instance.CloseUIPopup(this.gameObject);
            SendUserAccountInfo(Input_Account.text);
        }
        else
        {
            Debug.Log("입력하세요.");
        }
    }
}
