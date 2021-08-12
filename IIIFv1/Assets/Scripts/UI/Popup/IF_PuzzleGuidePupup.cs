using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class IF_PuzzleGuidePupup : MonoBehaviour
{
    public Button Btn_Okay;
    public Text Txt_Explane;


    // Start is called before the first frame update
    void Start()
    {
        if (Btn_Okay != null)
            Btn_Okay.onClick.AddListener(OnClick_Okay);
    }

    void OnClick_Okay()
    {
        UIManager._Instance.CloseUIPopup(this.gameObject,8);
    }
}
