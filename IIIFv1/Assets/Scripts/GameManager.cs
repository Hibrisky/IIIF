using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

[System.Serializable]
public class UserInfo
{
    public string user_name;
    public int user_point = 0;
}

[System.Serializable]
public class PuzzleInfo
{
    public GameObject Arr_Difficulty;
    public SpriteRenderer[] PuzzleImage;
}

public class GameManager : MonoBehaviour
{
    public static GameManager Instance;

    public static string CurrSceneName = "";
    public GameObject[] CameraObject;//static?
    public Camera ARCamera;

    public UserInfo m_UserInfo;

    //ar Components
    public ARPlaneManager PlaneManager;
    public ARFaceManager FaceManager;
    public ARTrackedImageManager ImageTrackingManager;

    //===================================================Puzzle
    public GameObject PuzzleGroup;
    public PuzzleInfo[] m_PuzzleInfo;
    public GameObject PuzzlePortal;
    public bool isPuzzleGameStart = false;


    public bool GetPuzzleStart() { return isPuzzleGameStart; }
    public void SetPuzzleStart(bool isStart) { isPuzzleGameStart = isStart; }
    //===================================================Puzzle
    //===================================================Fishing
    public GameObject Prefab_FishingRod;
    //public void StartFisingGame

    //===================================================Fishing
    public Camera GetARCamera() { return ARCamera; }

    //���� ���̵� �����Լ�.
    public PuzzleInfo[] GetPuzzleInfo() { return m_PuzzleInfo; }


    private void Awake()
    {
        Instance = this;

        DontDestroyOnLoad(this);

        int count = CameraObject.Length;
        if (count != 0)
        {
            for (int i = 0; i < CameraObject.Length; i++)
            {
                DontDestroyOnLoad(CameraObject[i]);
            }
        }
        else
            Debug.LogError("Camera Length is 0");

        PlaneManager.enabled = false;
        FaceManager.enabled = false;
        ImageTrackingManager.enabled = false;

        //====================================================puzzle;
        DontDestroyOnLoad(PuzzleGroup);
        for (int i = 0; i < m_PuzzleInfo.Length; i++)
        {
            m_PuzzleInfo[i].Arr_Difficulty.SetActive(false);
        }
        //====================================================puzzle;
        //====================================================FishingGame
        if (Prefab_FishingRod != null)
            Prefab_FishingRod.SetActive(false);

        //====================================================FishingGame

        PuzzlePortal.SetActive(false);
    }

    void Start()
    {
        UIManager._Instance.Initialized();
    }

    // Update is called once per frame
    void Update()
    {
        //����.
        if (Input.GetKeyDown(KeyCode.Escape))
            Application.Quit();
    }

    public void CurrentSceneCheck(string SceneName)
    {
        CurrSceneName = SceneName;
        //���̵��� ó�� ��µǾ��� UI.
        switch (CurrSceneName)
        {
            case "2.Login":
                {
                    if (!UIManager._Instance.UIPopupList[3]._IsShow)
                        UIManager._Instance.ShowUIPopup(3);//������Ʈ �˾�.
                }
                break;
            case "3.InGame":
                {
                    if (!UIManager._Instance.UIWindowList[3]._IsShow)
                        UIManager._Instance.ShowUIWindow(3);//����ȭ��
                    ARCameraOff();
                }
                break;
            default:
                break;
        }
    }


    //�� ���� �Լ� �̵�.
    public static void ShowLoadingBySceneChange(string SceneName)
    {
        Transform ts_loading = UIManager._Instance.UIWindowList[1]._UIWindow.transform;
        GameObject obj = UIManager._Instance.UIPool.Find(ts_loading.name).gameObject;
        IF_Loading loading = obj.GetComponent<IF_Loading>();
        if (loading != null)
            loading.LoadLevel(SceneName);
    }


    public void ARCameraOn()
    {
        CameraObject[0].SetActive(false);//���� ī�޶�
        CameraObject[1].SetActive(true);//ar ī�޶�
        CameraObject[2].SetActive(true);
    }

    public void ARCameraOff()
    {
        CameraObject[0].SetActive(true);//
        CameraObject[1].SetActive(false);
        CameraObject[2].SetActive(false);
    }

    private void OnApplicationQuit()
    {
        //UIManager._Instance.Destroy();
        UIManager._Instance = null;
    }


  


    #region Components Control

    public void PlaneTracking_Mod()//ĳ���� ��ȯ��.
    {
        PlaneManager.enabled = true;
        FaceManager.enabled = false;
        ImageTrackingManager.enabled = false;
    }

    public void FaceTracking_Mod()//AR ����.
    {
        PlaneManager.enabled = false;
        FaceManager.enabled = true;
        ImageTrackingManager.enabled = false;
    }

    public void ImageTracking_Mod()//����.
    {
        PlaneManager.enabled = false;
        FaceManager.enabled = false;
        ImageTrackingManager.enabled = true;
    }

    public void AllTracking_Off()//�ش� ��� ���� �� ȣ��.
    {
        PlaneManager.enabled = false;
        FaceManager.enabled = false;
        ImageTrackingManager.enabled = false;
    }

    #endregion

    #region ar �������
    public void PuzzleGameStart()
    {
        //��ȣ�ۿ� ����?������? ���.
        PuzzlePortal.SetActive(true);
    }

    public void PuzzleGameOff()
    {
        PuzzlePortal.SetActive(false);
    }
    #endregion

    #region Fishing Game
    public void FishingGameStart()
    {
        IF_FishingGame fishgame = Prefab_FishingRod.GetComponent<IF_FishingGame>();
        fishgame.GameStart();
    }

    public void ActiveFishingPortal()
    {
        //�ӽ�
        PuzzlePortal.SetActive(true);
    }
    public void DeactiveFishingPortal()
    {
        PuzzlePortal.SetActive(false);
    }

    public void StartFisingGame()
    {
        Prefab_FishingRod.SetActive(true);
    }

    #endregion

    #region 3D�������
    public void ClearPuzzle(int _puzzleID = 0)
    {
        Debug.Log("���� �����!");
    }

    #endregion

    #region ȭ�� ȸ��
    void ScreenSettingToLandscape()//�� Ż�� �ÿ��� ���.
    {
        Screen.orientation = ScreenOrientation.LandscapeLeft;
    }

    void ScreenSettingToPortrait()//������ ���� �� ��Ż�� ������ �����. ���.
    {
        Screen.orientation = ScreenOrientation.Portrait;
    }

    #endregion
}
