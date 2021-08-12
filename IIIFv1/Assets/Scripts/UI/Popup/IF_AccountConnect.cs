using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class IF_AccountConnect : MonoBehaviour
{
    public Text Txt_AccountConnect;
    public Button Btn_GoogleLogin;
    public Text Txt_GoogleLogin;

    public Button Btn_AppleLogin;
    public Text Txt_AppleLogin;
    //�߰� ����.


    // Start is called before the first frame update
    void Start()
    {
        if(Btn_GoogleLogin != null)
            Btn_GoogleLogin.onClick.AddListener(OnClick_GoogleLogin);
        if(Btn_AppleLogin != null)
            Btn_AppleLogin.onClick.AddListener(OnClick_AppleLogin);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnClick_GoogleLogin()
    {
        //�ӽ� �ڵ�.
        UIManager._Instance.ShowUIPopup(4);//�������� ��ȣ ��ħ?
        UIManager._Instance.CloseUIPopup(this.gameObject);
    }

    void OnClick_AppleLogin()
    {
        UIManager._Instance.ShowUIPopup(4);//�������� ��ȣ ��ħ?
        UIManager._Instance.CloseUIPopup(this.gameObject);
    }

    private void OnDestroy()
    {
        Txt_AccountConnect = null;
        Btn_GoogleLogin = null;
        Txt_GoogleLogin = null;
        Btn_AppleLogin = null;
        Txt_AppleLogin = null;
    }

}
