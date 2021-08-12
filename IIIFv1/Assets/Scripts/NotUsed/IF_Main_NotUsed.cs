using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class IF_Main_NotUsed : MonoBehaviour
{
    public Button Btn_Tour;
    public Button Btn_Adventure;
    public Button Btn_Pay;

    public GameObject Panel_Tour;
    public GameObject Panel_Adventure;
    public GameObject Panel_Pay;

    public GameObject m_Camera;
    public GameObject m_ARSessionOrigin;
    public GameObject m_ARSession;

    // Start is called before the first frame update
    void Start()
    {
        //���Ⱑ������....
        m_Camera = GameObject.Find("Main Camera");//ī�޶� ��� �ұ�...
        m_ARSessionOrigin = GameObject.Find("AR Session Origin");
        m_ARSession = GameObject.Find("AR Session");

        if (m_ARSessionOrigin != null)
            m_ARSessionOrigin.SetActive(false);
        if (m_ARSession != null)
            m_ARSession.SetActive(false);

        Btn_Tour.onClick.AddListener(OnClick_Tour);
        Btn_Adventure.onClick.AddListener(OnClick_Adventure);
        Btn_Pay.onClick.AddListener(OnClick_Pay);
    }
   
    void OnClick_Tour()
    {
        Panel_Tour.SetActive(true);
        Panel_Adventure.SetActive(false);
        Panel_Pay.SetActive(false);

        m_Camera.SetActive(true);
        m_ARSessionOrigin.SetActive(false);
        m_ARSession.SetActive(false);
    }
    void OnClick_Adventure()
    {
        Panel_Tour.SetActive(false);
        Panel_Adventure.SetActive(true);
        Panel_Pay.SetActive(false);


        //���ɰ� �浹������ �⺻ ī�޶� ���.
        //�浹 �� AR ī�޶� ���.
        m_Camera.SetActive(true);
        m_ARSessionOrigin.SetActive(false);
        m_ARSession.SetActive(false);
    }
    void OnClick_Pay()
    {
        Panel_Tour.SetActive(false);
        Panel_Adventure.SetActive(false);
        Panel_Pay.SetActive(true);

        m_Camera.SetActive(true);
        m_ARSessionOrigin.SetActive(false);
        m_ARSession.SetActive(false);
    }

    #region ���ɰ� �浹
    void ActiveARCamera()//���ɰ� �浹�� ����� �Լ�.
    {
        m_Camera.SetActive(false);
        m_ARSessionOrigin.SetActive(true);
        m_ARSession.SetActive(true);
    }

    void DeactivateARCamera()
    {
        m_Camera.SetActive(true);
        m_ARSessionOrigin.SetActive(false);
        m_ARSession.SetActive(false);
    }
    #endregion
}
