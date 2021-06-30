using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class IF_Fishing : MonoBehaviour
{
    //public Button Btn_Start;//�ӽ�.

    public Slider m_FishingGauge;   //���ø� �ϴµ� �ʿ��� ������.
    float m_GaugeValue = 0.5f;
    float m_MinusWeight = 0.00025f;

    public Button Btn_Hit;          //������ ���� ������ ���.
    float m_HandleValue = 0.01f;
    float m_Damage = 0.1f;         //������ ���� ���� ������..

    public bool IsHit = false;

    public Slider m_FishHPBar;
    [HideInInspector]
    public float m_FishHP = 0.0f;
    RectTransform FishHPPosInfo;

    public void SetIsHit(bool hit) { IsHit = hit; }
    public bool GetIsHit() { return IsHit; }

    public float GetFishHP() { return m_FishHP; }

    // Start is called before the first frame update
    void Start()
    {
        Btn_Hit.onClick.AddListener(OnClick_Hit);

        FishHPPosInfo = m_FishHPBar.GetComponent<RectTransform>();

        SettingBitetoBait();//���� �ʱ�ȭ.
        DeactiveUI();

    }

    // Update is called once per frame
    void Update()
    {
        if (IsHit)
        {
            m_FishingGauge.value -= m_MinusWeight;
            if (m_FishingGauge.value <= 0f)
            {
                m_FishingGauge.value = 0f;
            }
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
        FishHPPosInfo.position = Camera.main.WorldToScreenPoint(new Vector3(fishpos.x + 1.2f, fishpos.y + 0.8f, fishpos.z));// ��ǥ ����.
    }

    void OnClick_Hit()
    {
        m_FishingGauge.value += m_HandleValue;
        m_FishHPBar.value -= m_Damage;
        m_FishHP -= m_Damage;
    }
}
