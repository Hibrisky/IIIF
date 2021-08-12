using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class IF_FishingGuidePupup : MonoBehaviour
{
    public Button Btn_Okay;

    // Start is called before the first frame update
    void Start()
    {
        if (Btn_Okay != null)
            Btn_Okay.onClick.AddListener(OnClick_FishingStart);
    }

    void OnClick_FishingStart()
    {
        GameManager.Instance.FishingGameStart();
        UIManager._Instance.CloseUIPopup(this.gameObject,9);
    }


}
