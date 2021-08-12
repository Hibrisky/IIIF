using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

[System.Serializable]
public enum FishingState
{
    E_READY = 0,
    E_CASTING,
    E_HIT,
    E_CATCH
};


public class IF_FishingRod : MonoBehaviour
{
    public GameObject m_BaitPos;
    public FishingState m_RodState;
    bool IsCasting = false;
    public bool IsStart = false;

    public GameObject m_RodEndPoint;
    public LineRenderer m_Line;

    public void SetStart(bool _start) { IsStart = _start; }
    public bool GetIsCasting() { return IsCasting; }
    public FishingState GetRodState() { return m_RodState; }
    public void SetFishingState(FishingState state) { m_RodState = state; }

    // Start is called before the first frame update
    void OnEnable()
    {
        m_RodState = FishingState.E_READY;
    }

    void OnDisable()
    {
        m_RodState = FishingState.E_READY;
        IsStart = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (IsStart)
        {
            Quaternion deviceRotation = IF_Gyro.Get();
            float EulerAngleY = deviceRotation.eulerAngles.y;
            float EulerAngleX = deviceRotation.eulerAngles.x;

            Quaternion CurrentRot = Quaternion.Euler(EulerAngleY * -1.0f, 0, 0);
            //if (EulerAngleX > 100)//임시 각도라 확인 필요.
            //    CurrentRot = Quaternion.Euler(EulerAngleY * -1.0f, 0, 0); //deviceRotation.eulerAngles.x 값에 따라서 반전이 필요하다.
            //else
            //    CurrentRot = Quaternion.Euler(EulerAngleY, 0, 0); //deviceRotation.eulerAngles.x 값에 따라서 반전이 필요하다.


            if (m_RodState == FishingState.E_READY)
            {
                transform.localRotation = CurrentRot;
            }
            //임시 
            //RodPos.text = transform.localPosition.ToString();

            if (CurrentRot.x > -0.15f)//임시 각도가 -0.2보다 낮으면
            {
                if (m_RodState != FishingState.E_HIT && m_RodState != FishingState.E_CATCH)
                    Casting();
            }
            else if (CurrentRot.x < -0.9f)
            {
                if(m_RodState != FishingState.E_HIT)
                    CastingCancel();
            }

            switch (m_RodState)
            {
                case FishingState.E_READY:
                    {
                        ReadyForFishing();
                    }
                    break;
                case FishingState.E_CASTING:
                    {
                        ActiveRodLine(m_RodEndPoint.transform.position, m_BaitPos.transform.position);
                    }
                    break;
                case FishingState.E_HIT:
                    {
                    }
                    break;
                case FishingState.E_CATCH:
                    {
                    }
                    break;
            }
        }
    }

    void ReadyForFishing()
    {
        m_RodState = FishingState.E_READY;
        IsCasting = false;
    }

    void Casting()  //캐스팅후 대기 및 취소시
    {
        m_RodState = FishingState.E_CASTING;

        if (!IsCasting)
            StartCoroutine(ActiveBait());//한번만 호출
        IsCasting = true;
    }

    void CastingCancel()//캐스팅 취소
    {
        ReadyForFishing();
        StopCoroutine(ActiveBait());
        m_BaitPos.SetActive(false);
    }

    IEnumerator ActiveBait()
    {
        yield return new WaitForSeconds(1f);
        m_BaitPos.SetActive(true);
        Vector3 RodPos = transform.position;
        m_BaitPos.transform.localPosition = new Vector3(RodPos.x, -2f, RodPos.z + 100f/*Random.Range(10f,15f)*/);

        //BaitPos.text = m_BaitPos.transform.localPosition.ToString();
    }

    public void ActiveRodLine(Vector3 _rodEndpoint, Vector3 _bait)
    {
        m_Line.gameObject.SetActive(true);

        Vector3 endpoint = _rodEndpoint;
        Vector3 baitpoint = _bait;

        if (m_Line != null)
        {
            m_Line.SetPosition(0, endpoint);
            m_Line.SetPosition(1, baitpoint);
        }
    }
    public void DeactiveRodLine()
    {
        m_Line.gameObject.SetActive(false);
    }

    public void ActiveRodLine(Vector3 fishPos)
    {
        Vector3 endpoint = m_RodEndPoint.transform.position;
        Vector3 _fishpos = fishPos;

        if (m_Line != null)
        {
            m_Line.SetPosition(0, endpoint);
            m_Line.SetPosition(1, _fishpos);
        }
    }
}
