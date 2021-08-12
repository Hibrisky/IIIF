using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Android;
using System.IO;

public class IF_Permission : MonoBehaviour
{
#if UNITY_ANDROID
    private void Start()
    {
        StartCoroutine(CameraPermissionCheckCoroutine());//카메라 권한 요청
        
        
    }

#else
#endif

    IEnumerator CameraPermissionCheckCoroutine()
    {
        Debug.Log("CameraPermission_couroutine");

        yield return new WaitForEndOfFrame();
        if (Permission.HasUserAuthorizedPermission(Permission.Camera) == false)
        {
            Permission.RequestUserPermission(Permission.Camera);

            yield return new WaitForSeconds(0.2f);
            yield return new WaitUntil(() => Application.isFocused == true);

            if (Permission.HasUserAuthorizedPermission(Permission.Camera) == false)
            {
                StartCoroutine("CameraPermissionCheckCoroutine");
                yield break;
            }
        }


        StartCoroutine(GPSPermissionCheckCoroutine());//GPS 권한 요청


    }

    IEnumerator GPSPermissionCheckCoroutine()
    {
        Debug.Log("GPSPermission_couroutine");

        yield return new WaitForEndOfFrame();
        if (Permission.HasUserAuthorizedPermission(Permission.FineLocation) == false)
        {
            Permission.RequestUserPermission(Permission.FineLocation);

            yield return new WaitForSeconds(0.2f);
            yield return new WaitUntil(() => Application.isFocused == true);

            if (Permission.HasUserAuthorizedPermission(Permission.FineLocation) == false)
            {
                StartCoroutine("GPSPermissionCheckCoroutine");
                yield break;
            }
        }

        StartCoroutine(WritePermissionCheckCoroutine());//쓰기 요청
    }

    IEnumerator WritePermissionCheckCoroutine()
    {
        Debug.Log("WritePermission_couroutine");

        yield return new WaitForEndOfFrame();
        if (Permission.HasUserAuthorizedPermission(Permission.ExternalStorageWrite) == false)
        {
            Permission.RequestUserPermission(Permission.ExternalStorageWrite);

            yield return new WaitForSeconds(0.2f);
            yield return new WaitUntil(() => Application.isFocused == true);

            if (Permission.HasUserAuthorizedPermission(Permission.ExternalStorageWrite) == false)
            {
                StartCoroutine("WritePermissionCheckCoroutine");
                yield break;
            }
        }
    }

}
