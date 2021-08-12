using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LoginTEst : MonoBehaviour
{
    public Button Btn_Login;
    public IF_KakaoLogin K_Login;
    // Start is called before the first frame update
    void Start()
    {
        Btn_Login.onClick.AddListener(OnClick_KakaoLogin);
    }

    void OnClick_KakaoLogin()
    {
        K_Login.KakaoLogin_Android();
    }



}
