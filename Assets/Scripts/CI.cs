using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//using UnityEngine.SceneManagement;

public class CI : MonoBehaviour
{
    public void SceneChanger()
    {
        //SceneManager.LoadScene("2.Login",LoadSceneMode.Single);

        GameManager.ShowLoadingBySceneChange("2.Login");
    }
}
