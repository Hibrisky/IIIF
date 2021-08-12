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
            m_Rod.SetStart(false);//���� Ʈ���� �ʿ�-> �˾� Ȯ�� �������.

        UIManager._Instance.ShowUIPopup(9);//���� Ʃ�丮�� �˾�.
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
        m_Rod.SetStart(true);//���� Ʈ���� �ʿ�-> �˾� Ȯ�� �������.
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
            case FishingState.E_HIT://�������� ���� ���� ���� �� ĳ����!~
                {
                    m_FishingUI.SetStateText("Hit");
                    //=================================================================����� ������
                    m_Rod.ActiveRodLine(m_Fishes[0].transform.position);//���׸���.
                    IF_Fishes Fish = m_Fishes[0].GetComponent<IF_Fishes>();
                    Vector3 FishPos = Fish.gameObject.transform.position;//����� ��ġ ����.
                    m_FishingUI.SettingFishHPBarPos(FishPos);
                    //=================================================================����� ������

                    if (!m_FishingUI.GetIsHit())//����⿡ ���� ���������� ��������.
                    {
                        m_FishingUI.SetIsHit(true);
                        m_FishingUI.SettingBitetoBait();
                        m_FishingUI.ActiveUI();
                        m_FishingUI.SettingHPbar(100f); //�ӽ� ü��.
                        m_FishingUI.ChangeToButtonImage(FishingState.E_HIT);
                        //����
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

                    //����⸦ ��������! ����..-> �ڷ� �ѱ�� ��� + �˾� ���.
                    m_FishingUI.ChangeToButtonImage(FishingState.E_CATCH);
                }
                break;
        }
    }

    void ToTaketheBait()    //�̳��� ������! ü�°�� �ʿ�.
    {
        m_Rod.SetFishingState(FishingState.E_HIT);

        //�ӽ� �ڵ� -> ���� ���� ó��.
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
        //������ bool = false;
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
        //������ bool = false;���� ����!
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


    public void OnClick_Start() //�ӽ� -> ���� �� �� �ִ� Ʈ���� ����Ʈ�� �ʿ��ϴ�.
    {
        m_Rod.SetStart(true);
        //Btn_Start.gameObject.SetActive(false);
    }
    
}
