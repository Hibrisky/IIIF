using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class UIWindow
{
    public GameObject _UIWindow;
    public int _Id = 0;
    [HideInInspector]
    public bool _IsShow = false;
}

[System.Serializable]
public class UIPopup
{
    public GameObject _UIPopup;
    public int _Id = 0;
    [HideInInspector]
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

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            int UICount = UIWindowList.Length;
            for (int i = 0; i < UICount; i++)
            {
                UIWindowList[i]._IsShow = false;
            }
        }
    }

    #region 알림 팝업.

    public void CloseOneBtnPopupAndBackToMain(GameObject go, int uiID, string _title, string _plane)
    {
        IF_AlarmPopup Alarm = ShowAlarmPopup().GetComponent<IF_AlarmPopup>();
        Alarm.CloseOneBtnPopupAndBackToMain(go,uiID,_title,_plane);
    }


    public void OneButton_AlarmPopup(string _title, string _plane)
    {
        IF_AlarmPopup Alarm = ShowAlarmPopup().GetComponent<IF_AlarmPopup>();
        Alarm.OneButton_AlarmPopup(_title,_plane);
    }

    public void TwoButton_AlarmPopup(string _title, string _plane)
    {
        IF_AlarmPopup Alarm = ShowAlarmPopup().GetComponent<IF_AlarmPopup>();
        Alarm.TwoButton_AlarmPopup(_title, _plane);
    }

    #endregion



    public void ShowUIWindow(int _WindowId, GameObject ui = null)
    {
        int UICount = UIWindowList.Length;
        for (int i = 0; i < UICount; i++)
        {
            if (UIWindowList[i]._Id == _WindowId)
            {
                if (!UIWindowList[i]._IsShow)
                {
                    Instantiate(UIWindowList[i]._UIWindow, UIPool);
                    UIWindowList[i]._UIWindow.SetActive(true);
                    UIWindowList[i]._IsShow = true;
                    CurrUIWindow = _WindowId;
                }
            }
        }
    }

    public void ShowUIPopup(int _PopupId, GameObject ui = null)
    {
        if (ui != null && ui.transform.IsChildOf(UIPool))
        {
            ui.SetActive(true);
        }
        else
        {
            int UICount = UIPopupList.Length;
            for (int i = 0; i < UICount; i++)
            {
                if (UIPopupList[i]._Id == _PopupId)
                {
                    if (!UIPopupList[i]._IsShow)
                    {
                        Instantiate(UIPopupList[i]._UIPopup, UIPool);
                        UIPopupList[i]._UIPopup.SetActive(true);
                        UIPopupList[i]._IsShow = true;
                        CurrUIPopup = _PopupId;
                    }
                }
            }
        }
    }

    public GameObject ShowAlarmPopup()
    {
        GameObject Popup = Instantiate(UIPopupList[5]._UIPopup, UIPool);
        UIPopupList[5]._UIPopup.SetActive(true);
        UIPopupList[5]._IsShow = true;

        return Popup;
    }


    public void CloseUIWindow(GameObject ui, int _id = 0)
    {
        if (ui.transform.IsChildOf(UIPool))
        {
            Destroy(UIPool.Find(ui.name).gameObject);
            UIWindowList[_id]._IsShow = false;
        }
    }


    public void CloseUIPopup(GameObject ui, int _id = 0)//닫는용도. 해당창에선 다신 안킴?
    {
        if (ui.transform.IsChildOf(UIPool))
        {
            //UIPopupList[_id]._UIPopup.SetActive(false);
            Destroy(UIPool.Find(ui.name).gameObject);
            UIPopupList[_id]._IsShow = false;
        }
    }

    public void HideUI(GameObject ui)
    {
        if (ui.transform.IsChildOf(UIPool))
            ui.SetActive(false);
    }

    public void Destroy()
    {
        Destroy(this);
    }

}
