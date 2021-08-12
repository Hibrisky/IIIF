using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class IF_Main : MonoBehaviour
{
    public Image Img_Bg;

    public Button Btn_CharacterSpawn;

    public Button Btn_Quest;
    public Text Txt_Quest;

    public Button Btn_Map;
    public Text Txt_Map;

    public Button Btn_ARCamera;

    public Button Btn_PointShop;
    public Text Txt_PointShop;

    public Button Btn_Option;
    public Text Txt_Option;

    public Button Btn_Back;
    public Text Txt_Back;

    public IF_CustomToggle Tog_OnOff;

    public Text Txt_NickName;
    public Text Txt_IPoint;



    //===============================================Text Button
    public Button Btn_TestPuzzle;
    private Image ButtonImg;

    public Button Btn_TestFishing;
    Image FishingImage;



    void Start()
    {
        if (Txt_NickName != null)
            Txt_NickName.text = GameManager.Instance.m_UserInfo.user_name;

        if(Txt_IPoint != null)
            Txt_IPoint.text = "I.P : " + GameManager.Instance.m_UserInfo.user_point.ToString();

        if (Img_Bg != null)
            Img_Bg.gameObject.SetActive(true);

        if (Tog_OnOff != null)
            Tog_OnOff.isOn = false;

        if (Btn_CharacterSpawn != null)
            Btn_CharacterSpawn.onClick.AddListener(OnClick_CharacterSpawn);

        if (Btn_Quest != null)
            Btn_Quest.onClick.AddListener(OnClick_Quest);

        if (Btn_Map != null)
            Btn_Map.onClick.AddListener(OnClick_Map);
        
        if (Btn_ARCamera != null)
            Btn_ARCamera.onClick.AddListener(OnClick_ARCamera);

        if (Btn_PointShop != null)
            Btn_PointShop.onClick.AddListener(OnClick_PointShop);

        if (Btn_Option != null)
            Btn_Option.onClick.AddListener(OnClick_Option);

        if (Btn_Back != null)
        {
            Btn_Back.onClick.AddListener(OnClick_Back);
            Btn_Back.gameObject.SetActive(false);
        }

        //===============================================Text Button
        if (Btn_TestPuzzle != null)
        {
            Btn_TestPuzzle.onClick.AddListener(OnClick_PuzzleTest);
            ButtonImg = Btn_TestPuzzle.image;
        }

        if (Btn_TestFishing != null)
        {
            Btn_TestFishing.onClick.AddListener(OnClick_FishTest);
            FishingImage = Btn_TestFishing.image;
        }
        //===============================================Text Button

        GameManager.Instance.ARCameraOff();
    }

    void Update()
    {
        BG_OnOff();
    }

    public void BG_OnOff()
    {
        if (Tog_OnOff.isOn)
        {
            Img_Bg.gameObject.SetActive(false);
            ButtonImg.enabled = false;
            GameManager.Instance.PuzzleGameStart();
        }
        else
        {
            Img_Bg.gameObject.SetActive(true);
            ButtonImg.enabled = true;
            GameManager.Instance.PuzzleGameOff();
        }
    }

    void OnClick_CharacterSpawn()
    {
        GameManager.Instance.PlaneTracking_Mod();
    }

    void OnClick_Quest()
    {
        //퀘스트 팝업 출력.
        UIManager._Instance.ShowUIPopup(7);// quest//중복 출력 막기.
    }

    void OnClick_Map()
    {
        UIManager._Instance.OneButton_AlarmPopup("업데이트 대기 중", "추후 업데이트 예정");
    }

    void OnClick_ARCamera()//페이스트래킹.
    {
        GameManager.Instance.FaceTracking_Mod();
    }

    void OnClick_PointShop()
    {
        UIManager._Instance.OneButton_AlarmPopup("업데이트 대기 중","추후 업데이트 예정");
    }

    void OnClick_Option()
    {
        UIManager._Instance.ShowUIPopup(6);// option
    }

    void OnClick_Back()
    {
        
    }


    //====================================================puzzle Test
    void OnClick_PuzzleTest()
    {
        GameManager.Instance.PuzzleGameOff();
        UIManager._Instance.CloseUIWindow(this.gameObject,3);
        UIManager._Instance.ShowUIWindow(5);//퍼즐 유아이

        if (!Tog_OnOff.isOn)
        {
            GameManager.Instance.ARCameraOn();
        }
    }

    void OnClick_FishTest()
    {
        GameManager.Instance.DeactiveFishingPortal();
        UIManager._Instance.CloseUIWindow(this.gameObject, 3);
        UIManager._Instance.ShowUIWindow(4);

        if (!Tog_OnOff.isOn)
        {
            GameManager.Instance.ARCameraOn();
        }

        GameManager.Instance.StartFisingGame();
    }
}
