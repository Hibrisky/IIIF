using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class IF_Fishing : MonoBehaviour
{
    //public Button Btn_Start;//임시.

    public Slider m_FishingGauge;   //낚시를 하는데 필요한 게이지.
    float m_GaugeValue = 0.5f;
    float m_MinusWeight = 0.00025f;

    public Button Btn_Hit;          //누를때 마다 게이지 상승.
    float m_HandleValue = 0.01f;
    float m_Damage = 0.1f;         //누를때 마다 들어가는 데미지..

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

        SettingBitetoBait();//최초 초기화.
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
    public void DeactiveUI()//잡았다! or 놓쳤다?
    {
        m_FishingGauge.gameObject.SetActive(false);
        m_FishHPBar.gameObject.SetActive(false);
    }
    public void ActiveUI()//물었다!
    {
        m_FishingGauge.gameObject.SetActive(true);
        m_FishHPBar.gameObject.SetActive(true);
    }

    public void SettingHPbar(float _hp = 0f)//물고기 체력 세팅.
    {
        m_FishHP = _hp * 0.01f;
        m_FishHPBar.value = m_FishHP;
    }

    public void SettingFishHPBarPos(Vector3 fishpos)    //외부에서 사용할 함수.(IF_FishingGame)
    {
        FishHPPosInfo.position = Camera.main.WorldToScreenPoint(new Vector3(fishpos.x + 1.2f, fishpos.y + 0.8f, fishpos.z));// 좌표 조절.
    }

    void OnClick_Hit()
    {
        m_FishingGauge.value += m_HandleValue;
        m_FishHPBar.value -= m_Damage;
        m_FishHP -= m_Damage;
    }
}
