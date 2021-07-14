using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class IF_FishingGame : MonoBehaviour
{
    // Start is called before the first frame update

    public GameObject[] m_Fishes;
    public GameObject m_FishingRod;

    IF_FishingRod m_Rod;
    float RandomTimer = 0.0f;

    public Button Btn_Start;

    [SerializeField] 
    GameObject FishingUI;
    IF_Fishing m_FishingUI;

    void Start()
    {
        Btn_Start.onClick.AddListener(OnClick_Start);

        m_Rod = m_FishingRod.GetComponent<IF_FishingRod>();
        m_FishingUI = FishingUI.GetComponent<IF_Fishing>();
    }

    // Update is called once per frame
    void Update()
    {
        switch (m_Rod.GetRodState())
        {
            case FishingState.E_READY:
                {
                    
                }
                break;
            case FishingState.E_CASTING:
                {
                    if (m_Rod.GetIsCasting())
                    {
                        RandomTimer += Time.deltaTime;

                        if (RandomTimer > Random.Range(3, 5))
                        {
                            ToTaketheBait();
                            RandomTimer = 0f;
                        }
                    }
                }
                break;
            case FishingState.E_HIT:
                {
                    m_Rod.ActiveRodLine(m_Fishes[0].transform.position);
                    IF_Fishes Fish = m_Fishes[0].GetComponent<IF_Fishes>();
                    Vector3 FishPos = Fish.gameObject.transform.position;
                    m_FishingUI.SettingFishHPBarPos(FishPos);

                    if (!m_FishingUI.GetIsHit())
                    {
                        m_FishingUI.SetIsHit(true);
                        m_FishingUI.SettingBitetoBait();
                        m_FishingUI.ActiveUI();
                        m_FishingUI.SettingHPbar(100f); //임시 체력.

                        //진동
                        Handheld.Vibrate();
                    }

                    float _hp = m_FishingUI.GetFishHP();
                    if (_hp <= 0)
                    {
                        m_Rod.SetFishingState(FishingState.E_CATCH);
                    }
                }
                break;
            case FishingState.E_CATCH:
                {
                    m_FishingUI.SetIsHit(false);
                    m_FishingUI.DeactiveUI();
                    m_Rod.DeactiveRodLine();
                    m_Fishes[0].SetActive(false);

                    //물고기를 낚았을때! 연출..-> 뒤로 넘기는 모션 + 팝업 출력.
                }
                break;
        }
    }

    void ToTaketheBait()    //미끼를 물었다! 체력계산 필요.
    {
        m_Rod.SetFishingState(FishingState.E_HIT);

        //임시 코드 -> 추후 랜덤 처리.
        m_Fishes[0].SetActive(true);
        IF_Fishes Fish = m_Fishes[0].GetComponent<IF_Fishes>();
        Fish.SetBite(true);
    }

    public void OnClick_Start() //임시 -> 시작 할 수 있는 트리거 포인트가 필요하다.
    {
        m_Rod.SetStart(true);
        Btn_Start.gameObject.SetActive(false);
    }
}
