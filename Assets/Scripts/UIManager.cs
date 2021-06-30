using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class UIWindow
{
    public GameObject _UIWindow;
    public int _Id = 0;
    public bool _IsShow = false;
}

[System.Serializable]
public class UIPopup
{
    public GameObject _UIPopup;
    public int _Id = 0;
    public bool _IsShow = false;
}


public class UIManager : MonoBehaviour
{

    public static UIManager _Instance;

    public Transform UIPool;
    public UIWindow[] UIWindowList;
    public UIPopup[] UIPopupList;



    int CurrUIWindow = 0;
    int CurrUIPopup = 0;

    //List<GameObject> PrevUIWindow = new List<GameObject>();   //Window가 다중 출력 경우. 임시 저장소. 근데 다중 출력될 경우 유무 확인.
    private void Awake()
    {
        _Instance = this;
    }

    public void Initialized()
    {
        DontDestroyOnLoad(UIPool);
    }

    public void ShowUIWindow(int _WindowId)
    {
        int UICount = UIWindowList.Length;
        for (int i = 0; i < UICount; i++)
        {
            if (UIWindowList[i]._Id == _WindowId)
            {
                Instantiate(UIWindowList[i]._UIWindow, UIPool);
                UIWindowList[i]._UIWindow.SetActive(true);
                UIWindowList[i]._IsShow = true;
                CurrUIWindow = _WindowId;
            }
        }
    }

    public void ShowUIPopup(int _PopupId)
    {
        int UICount = UIPopupList.Length;
        for (int i = 0; i < UICount; i++)
        {
            if (UIPopupList[i]._Id == _PopupId)
            {
                Instantiate(UIPopupList[i]._UIPopup, UIPool);
                UIPopupList[i]._UIPopup.SetActive(true);
                UIPopupList[i]._IsShow = true;
                CurrUIPopup = _PopupId;
            }
        }
    }

    public void CloseUI(GameObject ui)//닫는용도. 해당창에선 다신 안킴?
    {
        if (ui.transform.IsChildOf(UIPool))
            Destroy(UIPool.Find(ui.name).gameObject);
    }

    //public void ShowLoadingBySceneChange(string SceneName)
    //{
    //    Transform ts_loading = UIWindowList[1]._UIWindow.transform;
    //    GameObject obj = UIPool.Find(ts_loading.name).gameObject;
    //    IF_Loading loading = obj.GetComponent<IF_Loading>();
    //    if (loading != null)
    //        loading.LoadLevel(SceneName);
    //}

    public void Destroy()
    {
        Destroy(this);
    }
}
