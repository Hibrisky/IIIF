using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IF_KakaoLogin : MonoBehaviour
{

    AndroidJavaObject ajo;


    // Start is called before the first frame update
    void Start()
    {
        ajo = new AndroidJavaObject("com.EHan.IIIFv1.UKakao");
    }


    public void KakaoLogin_Android()
    {
        ajo.Call("KakaoLogin");
    }
}
