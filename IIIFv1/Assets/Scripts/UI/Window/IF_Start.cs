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
        //���⼭ ����,IOS����.
        //Test �÷ο�
        UIManager._Instance.CloseUIPopup(this.gameObject);
        UIManager._Instance.ShowUIPopup(2);
        //GameManager.ShowLoadingBySceneChange("3.InGame");

#if UNITY_EDITOR
        Debug.Log("Start Button Click");
#endif
    }
}
