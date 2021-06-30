using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance;

    public static string CurrSceneName = "";
    public GameObject[] CameraObject;//static?


    private void Awake()
    {
        Instance = this;

        DontDestroyOnLoad(this);
        for (int i = 0; i < CameraObject.Length; i++)
        {
            DontDestroyOnLoad(CameraObject[i]);
        }
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

        //씬이동시 처음 출력되야할 UI.
        switch (CurrSceneName)
        {
            case "2.Login":
                {
                    if (!UIManager._Instance.UIPopupList[3]._IsShow)
                        UIManager._Instance.ShowUIPopup(3);
                }
                break;
            case "3.InGame":
                {
                    if (!UIManager._Instance.UIWindowList[3]._IsShow)
                        UIManager._Instance.ShowUIWindow(3);
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

    private void OnApplicationQuit()
    {
        UIManager._Instance.Destroy();
        UIManager._Instance = null;
    }

    void ScreenSettingToLandscape()//방 탈출 시에만 사용.
    {
        Screen.orientation = ScreenOrientation.LandscapeLeft;
    }

    void ScreenSettingToPortrait()//컨텐츠 시작 및 방탈출 컨텐츠 종료시. 사용.
    {
        Screen.orientation = ScreenOrientation.Portrait;
    }
}
