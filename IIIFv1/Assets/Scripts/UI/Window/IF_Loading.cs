using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class IF_Loading : MonoBehaviour
{
    //로딩 임시 변수.
    float f_Value = 0.0f;


    public Slider LoadingBar;
    public Text Txt_Percent;
    public Text Txt_Count;

    public void LoadLevel(string sceneName)
    {
        f_Value = 0.0f;
        this.gameObject.SetActive(true);
        StartCoroutine(LoadAsynchronously(sceneName));
    }

    IEnumerator LoadAsynchronously(string sceneName)
    {
        AsyncOperation operation = SceneManager.LoadSceneAsync(sceneName);
        #region 실제적용
        //while (!operation.isDone)
        //{
        //    float progress = Mathf.Clamp01(operation.progress / .9f);
        //    Debug.Log(operation.progress);
        //
        //    LoadingBar.value = progress;
        //
        //    //f_Value += 0.001f;
        //    //LoadingBar.value = f_Value;
        //    yield return null;
        //}
        #endregion

        #region 임시
        while (f_Value < 1)
        {
            f_Value += 0.01f;
            LoadingBar.value = f_Value;
            Txt_Percent.text = string.Format("{0:F1}%", f_Value * 100);
            yield return null;
        }
        #endregion

        this.gameObject.SetActive(false);
        //GameManager.CurrSceneName = sceneName;
        GameManager.Instance.CurrentSceneCheck(sceneName);
    }


    //public Slider LoadingBar;
    //public Text Txt_Percent;

    ////임시 변수
    //float f_value = 0;
    //// Start is called before the first frame update
    //void Start()
    //{
    //    if (LoadingBar != null)
    //    {
    //        LoadingBar.value = 0;
    //        f_value = LoadingBar.value;
    //    }
    //    Txt_Percent.text = string.Format("{0:F1}", 0.0f);
    //}

    //// Update is called once per frame
    //void Update()
    //{
    //    //임시
    //    if (f_value <= 1)
    //    {
    //        LoadingBar.value += 0.001f;
    //        f_value = LoadingBar.value;
    //        Txt_Percent.text = string.Format("{0:F1}%", f_value * 100);
    //    }
    //    else
    //    {
    //        //임시
    //        this.gameObject.SetActive(false);
    //    }
    //}
}
