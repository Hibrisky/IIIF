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
        //����.
        if (Input.GetKeyDown(KeyCode.Escape))
            Application.Quit();

        //���̵��� ó�� ��µǾ��� UI.
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
    //�� ���� �Լ� �̵�.

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

    void ScreenSettingToLandscape()//�� Ż�� �ÿ��� ���.
    {
        Screen.orientation = ScreenOrientation.LandscapeLeft;
    }

    void ScreenSettingToPortrait()//������ ���� �� ��Ż�� ������ �����. ���.
    {
        Screen.orientation = ScreenOrientation.Portrait;
    }
}
