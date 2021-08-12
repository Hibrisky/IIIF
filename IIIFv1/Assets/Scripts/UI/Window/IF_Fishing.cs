using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class IF_Fishing : MonoBehaviour
{
    //public Button Btn_Start;//�ӽ�.

    public Slider m_FishingGauge;   //���ø� �ϴµ� �ʿ��� ������.
    float m_GaugeValue = 0.5f;
    float m_MinusWeight = 0.0025f;

    public Button Btn_Hit;          //������ ���� ������ ���.
    public Text Txt_State;

    float m_HandleValue = 0.003f;
    float m_Damage = 0.03f;         //������ ���� ���� ������..

    public Text Txt_Dmg;   
    public Slider m_FishHPBar;
    public bool IsHit = false;

    public Button Btn_Back;

    [HideInInspector]
    public float m_FishHP = 0.0f;
    RectTransform FishHPPosInfo;

    bool IsPressed = false;

    float Timer = 0.0f;

    public Image[] FishingStateIcons;


    public void SetIsHit(bool hit) { IsHit = hit; }
    public bool GetIsHit() { return IsHit; }

    public float GetFishHP() { return m_FishHP; }

    public void SetStateText(string state) { if (Txt_State != null) Txt_State.text = state; }

    // Start is called before the first frame update
    void Start()
    {
        FishHPPosInfo = m_FishHPBar.GetComponent<RectTransform>();

        SettingBitetoBait();//���� �ʱ�ȭ.
        DeactiveUI();

        Txt_Dmg.text = "0";

        if (Btn_Back != null)
            Btn_Back.onClick.AddListener(OnClick_Back);
    }

    // Update is called once per frame
    void Update()
    {
        if (IsHit)
        {
            Timer += Time.deltaTime;
            if (Timer > 1.0f)
            {
                FishingGaugeDamage();
                Timer = 0;
            }

            m_FishingGauge.value -= m_MinusWeight;
            if (m_FishingGauge.value <= 0f)
            {
                m_FishingGauge.value = 0f;
            }

            if (IsPressed)
            {
                m_FishingGauge.value += m_HandleValue;
            }
        }

    }

    void FishingGaugeDamage() // 1�ʴ� ü���� ���̴� ��.
    {
        float f_value = m_FishingGauge.value;
        if (f_value < 0.2f || f_value > 0.8f)
        {
            float dmg = m_Damage * 1.8f;

            m_FishHP -= dmg;
            m_FishHPBar.value -= dmg;
            Txt_Dmg.text = dmg.ToString();
        }
        else if (f_value < 0.4f || f_value > 0.6f)
        {
            float dmg = m_Damage * 1.8f;
            m_FishHP -= dmg;
            m_FishHPBar.value -= dmg;
            Txt_Dmg.text = dmg.ToString();
        }
        else
        {
            float dmg = m_Damage * 2.6f;

            m_FishHP -= dmg;
            m_FishHPBar.value -= dmg;
            Txt_Dmg.text = dmg.ToString();
        }
    }

    public void SettingBitetoBait()
    {
        m_GaugeValue = 0.5f;
        if (m_FishingGauge != null)
        {
            m_FishingGauge.value = m_GaugeValue;
        }
    }
    public void DeactiveUI()//��Ҵ�! or ���ƴ�?
    {
        m_FishingGauge.gameObject.SetActive(false);
        m_FishHPBar.gameObject.SetActive(false);
    }
    public void ActiveUI()//������!
    {
        m_FishingGauge.gameObject.SetActive(true);
        m_FishHPBar.gameObject.SetActive(true);
    }

    public void SettingHPbar(float _hp = 0f)//����� ü�� ����.
    {
        m_FishHP = _hp * 0.01f;
        m_FishHPBar.value = m_FishHP;
    }

    public void SettingFishHPBarPos(Vector3 fishpos)    //�ܺο��� ����� �Լ�.(IF_FishingGame)
    {
        Txt_Dmg.gameObject.transform.position = Camera.main.WorldToScreenPoint(new Vector3(fishpos.x + 1.2f, fishpos.y + 0.8f, fishpos.z));// ��ǥ ����.
        FishHPPosInfo.position = Camera.main.WorldToScreenPoint(new Vector3(fishpos.x + 1.2f, fishpos.y + 0.8f, fishpos.z));// ��ǥ ����.
        Txt_Dmg.rectTransform.position = Camera.main.WorldToScreenPoint(new Vector3(fishpos.x + 1.2f, fishpos.y + 1.8f, fishpos.z));
    }

    public void PossibleFishHitMod()
    {
        Btn_Hit.gameObject.SetActive(true);
    }

    public void ImpossibleFishHitMod()
    {
        Btn_Hit.gameObject.SetActive(false);
    }

    public void ChangeToButtonImage(FishingState state)
    {
        int count = FishingStateIcons.Length;
        for (int i = 0; i < count; i++)
        {
            FishingStateIcons[i].gameObject.SetActive(false);
        }
        
        switch (state)
        {
            case FishingState.E_READY: 
                FishingStateIcons[0].gameObject.SetActive(true);
                break;
            case FishingState.E_CASTING:
                FishingStateIcons[1].gameObject.SetActive(true);
                break;
            case FishingState.E_HIT:
                FishingStateIcons[2].gameObject.SetActive(true);
                break;
            case FishingState.E_CATCH:
                FishingStateIcons[3].gameObject.SetActive(true);
                break;
        }
    }
    void OnClick_Back()
    {
        UIManager._Instance.CloseOneBtnPopupAndBackToMain(this.gameObject,4,"�������� �̵��մϴ�.","�������� �̼��� ��ҵ˴ϴ�.");
    }

    public void OnClick_Hit()
    {
        IsPressed = true;
    }

    public void Mouseup()
    {
        IsPressed = false;
    }
}
