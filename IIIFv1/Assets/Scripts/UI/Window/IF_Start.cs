using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class IF_Start : MonoBehaviour
{
    public Button Btn_Start;

    // Start is called before the first frame update
    void Start()
    {
        Btn_Start.onClick.AddListener(OnClick_Start);
    }

    void OnClick_Start()
    {
        //여기서 구글,IOS연동.
        //Test 플로우
        UIManager._Instance.CloseUIPopup(this.gameObject);
        UIManager._Instance.ShowUIPopup(2);
        //GameManager.ShowLoadingBySceneChange("3.InGame");

#if UNITY_EDITOR
        Debug.Log("Start Button Click");
#endif
    }
}
