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
    float m_HandleValue = 0.003f;
    float m_Damage = 0.03f;         //������ ���� ���� ������..

    public Text Txt_Dmg;   
    public Slider m_FishHPBar;
    public bool IsHit = false;

    [HideInInspector]
    public float m_FishHP = 0.0f;
    RectTransform FishHPPosInfo;

    bool IsPressed = false;

    float Timer = 0.0f;


    public void SetIsHit(bool hit) { IsHit = hit; }
    public bool GetIsHit() { return IsHit; }

    public float GetFishHP() { return m_FishHP; }

    // Start is called before the first frame update
    void Start()
    {
        //Btn_Hit.onClick.AddListener(OnClick_Hit);
        FishHPPosInfo = m_FishHPBar.GetComponent<RectTransform>();

        SettingBitetoBait();//���� �ʱ�ȭ.
        DeactiveUI();

        Txt_Dmg.text = "0";
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
            m_FishHP -= m_Damage * 1.0f;
            m_FishHPBar.value -= m_Damage * 1.0f;
        }
        else if (f_value < 0.4f || f_value > 0.6f)
        {
            m_FishHP -= m_Damage * 1.8f;
            m_FishHPBar.value -= m_Damage * 1.8f;
        }
        else
        {
            m_FishHP -= m_Damage * 2.6f;
            m_FishHPBar.value -= m_Damage * 2.6f;
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
    }

    //�ӽ�.
    public void OnClick_Hit()
    {
        IsPressed = true;
    }

    public void Mouseup()
    {
        IsPressed = false;
    }
}
