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


    [SerializeField]
    IF_Fishing m_FishingUI;

    IF_Fishes m_Fish;

    void OnEnable()
    {
        if (m_FishingRod != null)
            m_Rod = m_FishingRod.GetComponent<IF_FishingRod>();

        m_FishingUI = GameObject.Find("IF_Fishing(Clone)").GetComponent<IF_Fishing>();

        if (m_Rod != null)
            m_Rod.SetStart(false);//시작 트리거 필요-> 팝업 확인 누를경우.

        UIManager._Instance.ShowUIPopup(9);//낚시 튜토리얼 팝업.
    }

    private void OnDisable()
    {
        m_Rod = null;
        RandomTimer = 0.0f;
        m_FishingUI = null;
        m_Fishes[0].SetActive(false);
        m_Fish.SetBite(false);
    }


    public void GameStart()
    {
        m_Rod.SetStart(true);//시작 트리거 필요-> 팝업 확인 누를경우.
    }

    // Update is called once per frame
    void Update()
    {
        if (m_Rod == null) return;

        switch (m_Rod.GetRodState())
        {
            case FishingState.E_READY:
                {
                    m_FishingUI.SetStateText("Ready");
                    m_FishingUI.ChangeToButtonImage(FishingState.E_READY);
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
                    m_FishingUI.ChangeToButtonImage(FishingState.E_CASTING);
                    m_FishingUI.SetStateText("Casting");
                }
                break;
            case FishingState.E_HIT://물었을때 진동 패턴 시작 후 캐스팅!~
                {
                    m_FishingUI.SetStateText("Hit");
                    //=================================================================물고기 움직임
                    m_Rod.ActiveRodLine(m_Fishes[0].transform.position);//선그리기.
                    IF_Fishes Fish = m_Fishes[0].GetComponent<IF_Fishes>();
                    Vector3 FishPos = Fish.gameObject.transform.position;//물고기 위치 생성.
                    m_FishingUI.SettingFishHPBarPos(FishPos);
                    //=================================================================물고기 움직임

                    if (!m_FishingUI.GetIsHit())//물고기에 따라서 진동패턴이 나눠진다.
                    {
                        m_FishingUI.SetIsHit(true);
                        m_FishingUI.SettingBitetoBait();
                        m_FishingUI.ActiveUI();
                        m_FishingUI.SettingHPbar(100f); //임시 체력.
                        m_FishingUI.ChangeToButtonImage(FishingState.E_HIT);
                        //진동
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

                    m_FishingUI.SetStateText("Catch");

                    //물고기를 낚았을때! 연출..-> 뒤로 넘기는 모션 + 팝업 출력.
                    m_FishingUI.ChangeToButtonImage(FishingState.E_CATCH);
                }
                break;
        }
    }

    void ToTaketheBait()    //미끼를 물었다! 체력계산 필요.
    {
        m_Rod.SetFishingState(FishingState.E_HIT);

        //임시 코드 -> 추후 랜덤 처리.
        m_Fishes[0].SetActive(true);
        m_Fish = m_Fishes[0].GetComponent<IF_Fishes>();
        m_Fish.SetBite(true);
    }

    IEnumerator VibratePattern_1()//btbbttb
    {
        Handheld.Vibrate();
        yield return new WaitForSeconds(0.4f);

        Handheld.Vibrate();
        yield return new WaitForSeconds(1f);

        Handheld.Vibrate();
        yield return new WaitForSeconds(0.4f);

        Handheld.Vibrate();
        yield return new WaitForSeconds(0.4f);

        Handheld.Vibrate();
        yield return new WaitForSeconds(1.0f);

        Handheld.Vibrate();
        yield return new WaitForSeconds(1.0f);
        //끝나면 bool = false;
    }

    IEnumerator VibratePattern_2()//BB_T_T_T_BBB_T_B							
    {
        Handheld.Vibrate();
        yield return new WaitForSeconds(0.4f);
        Handheld.Vibrate();
        yield return new WaitForSeconds(1f);
        Handheld.Vibrate();
        yield return new WaitForSeconds(1f);
        Handheld.Vibrate();
        yield return new WaitForSeconds(1f);
        Handheld.Vibrate();
        yield return new WaitForSeconds(0.4f);
        Handheld.Vibrate();
        yield return new WaitForSeconds(0.4f);
        Handheld.Vibrate();
        yield return new WaitForSeconds(0.4f);
        Handheld.Vibrate();
        yield return new WaitForSeconds(1f);
        Handheld.Vibrate();
        yield return new WaitForSeconds(0.4f);
        Handheld.Vibrate();

        yield return new WaitForSeconds(1f);
        //끝나면 bool = false;낚시 실패!
    }

    IEnumerator VibratePattern_3()//BB_T_BB_T_BB_T_BB_T							
    {
        Handheld.Vibrate();
        yield return new WaitForSeconds(0.4f);
        Handheld.Vibrate();
        yield return new WaitForSeconds(0.4f);
        Handheld.Vibrate();
        yield return new WaitForSeconds(1f);

        Handheld.Vibrate();
        yield return new WaitForSeconds(0.4f);
        Handheld.Vibrate();
        yield return new WaitForSeconds(0.4f);
        Handheld.Vibrate();
        yield return new WaitForSeconds(1f);

        Handheld.Vibrate();
        yield return new WaitForSeconds(0.4f);
        Handheld.Vibrate();
        yield return new WaitForSeconds(0.4f);
        Handheld.Vibrate();
        yield return new WaitForSeconds(1f);

        Handheld.Vibrate();
        yield return new WaitForSeconds(0.4f);
        Handheld.Vibrate();
        yield return new WaitForSeconds(0.4f);
        Handheld.Vibrate();
        yield return new WaitForSeconds(1f);
    }


    public void OnClick_Start() //임시 -> 시작 할 수 있는 트리거 포인트가 필요하다.
    {
        m_Rod.SetStart(true);
        //Btn_Start.gameObject.SetActive(false);
    }
    
}
