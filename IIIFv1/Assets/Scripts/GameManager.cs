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

    //퍼즐 난이도 결정함수.
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
        //종료.
        if (Input.GetKeyDown(KeyCode.Escape))
            Application.Quit();
    }

    public void CurrentSceneCheck(string SceneName)
    {
        CurrSceneName = SceneName;
        //씬이동시 처음 출력되야할 UI.
        switch (CurrSceneName)
        {
            case "2.Login":
                {
                    if (!UIManager._Instance.UIPopupList[3]._IsShow)
                        UIManager._Instance.ShowUIPopup(3);//업데이트 팝업.
                }
                break;
            case "3.InGame":
                {
                    if (!UIManager._Instance.UIWindowList[3]._IsShow)
                        UIManager._Instance.ShowUIWindow(3);//메인화면
                    ARCameraOff();
                }
                break;
            default:
                break;
        }
    }


    //씬 변경 함수 이동.
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
        CameraObject[0].SetActive(false);//메인 카메라
        CameraObject[1].SetActive(true);//ar 카메라
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

    public void PlaneTracking_Mod()//캐릭터 소환시.
    {
        PlaneManager.enabled = true;
        FaceManager.enabled = false;
        ImageTrackingManager.enabled = false;
    }

    public void FaceTracking_Mod()//AR 사진.
    {
        PlaneManager.enabled = false;
        FaceManager.enabled = true;
        ImageTrackingManager.enabled = false;
    }

    public void ImageTracking_Mod()//낚시.
    {
        PlaneManager.enabled = false;
        FaceManager.enabled = false;
        ImageTrackingManager.enabled = true;
    }

    public void AllTracking_Off()//해당 모드 종료 시 호출.
    {
        PlaneManager.enabled = false;
        FaceManager.enabled = false;
        ImageTrackingManager.enabled = false;
    }

    #endregion

    #region ar 퍼즐게임
    public void PuzzleGameStart()
    {
        //상호작용 포털?아이콘? 출력.
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
        //임시
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

    #region 3D퍼즐게임
    public void ClearPuzzle(int _puzzleID = 0)
    {
        Debug.Log("퍼즐 맞췄다!");
    }

    #endregion

    #region 화면 회전
    void ScreenSettingToLandscape()//방 탈출 시에만 사용.
    {
        Screen.orientation = ScreenOrientation.LandscapeLeft;
    }

    void ScreenSettingToPortrait()//컨텐츠 시작 및 방탈출 컨텐츠 종료시. 사용.
    {
        Screen.orientation = ScreenOrientation.Portrait;
    }

    #endregion
}
