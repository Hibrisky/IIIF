using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;


public class PuzzleManager : MonoBehaviour
{
    WebCamTexture webCamTexture;
    public Camera ARCamera;

    public Button Btn_Shutter;
    public Button Btn_Start;

    public RawImage img_Base;
    public Text DeviceName;

    //==========================================================
    public AspectRatioFitter fit;
    Texture defaultBG;
    bool CamAvailable;

    //========================================================== Puzzle Start
    public GameObject[] Arr_difficulty;
    public SpriteRenderer[] PuzzleImage;

    public GameObject[] arCamera;
    int resWidth;
    int resHeight;

    // Start is called before the first frame update
    void Start()
    {
        Btn_Shutter.onClick.AddListener(OnClick_Shutter);
        Btn_Start.onClick.AddListener(onClick_Start);

        Btn_Start.gameObject.SetActive(false);
        Btn_Shutter.gameObject.SetActive(false);
        img_Base.gameObject.SetActive(false);

        
        //========================================================== Puzzle Start

        int arrCount = Arr_difficulty.Length;
        for (int i = 0; i < arrCount; i++)
        {
            Arr_difficulty[i].SetActive(false);
        }
       
        defaultBG = img_Base.texture;
        //WebCamDevice[] devices = WebCamTexture.devices;
        //
        //if (devices.Length == 0)
        //{
        //    Debug.Log("No Camera Detected");
        //    CamAvailable = false;
        //    return;
        //}

        //for (int i = 0; i < devices.Length; i++)
        //{
        //    if (!devices[i].isFrontFacing)
        //    {
        //        webCamTexture = new WebCamTexture(devices[i].name, Screen.width, Screen.height);
        //    }
        //}

        if (webCamTexture == null)
        {
            Debug.Log("Unable to find back Camera");
            return;
        }
    }

    // Update is called once per frame
    void Update()
    {
        //if (!CamAvailable) return;

        //float ratio = (float)webCamTexture.width / (float)webCamTexture.height;
        //fit.aspectRatio = ratio;
        //
        //float scaleY = webCamTexture.videoVerticallyMirrored ? -1f : 1f;
        //img_Base.rectTransform.localScale = new Vector3(1f, scaleY, 1f);
        //
        //int orient = -webCamTexture.videoRotationAngle;
        //img_Base.rectTransform.localEulerAngles = new Vector3(0, 0, orient);
    }

    void OnClick_PhotoModeOn() // 가이드라인 활성화.
    {
        Btn_Shutter.gameObject.SetActive(true);
        //img_Base.gameObject.SetActive(true);

        //if (webCamTexture != null)
        //{
        //    Debug.Log("Device Name : " + webCamTexture.deviceName);
        //    DeviceName.text = webCamTexture.deviceName;
        //    webCamTexture.Play();
        //
        //    img_Base.texture = webCamTexture;
        //    CamAvailable = true;
        //}
        //else
        //    Debug.LogError("webCamTexture is null");
    }

    void OnClick_Shutter()
    {
        StartCoroutine(TakePhoto());
    }

    void OnClick_PhotoModeOff()//잠시 정리.
    {
        Btn_Shutter.gameObject.SetActive(false);
        img_Base.gameObject.SetActive(false);
        webCamTexture.Stop();
    }

    void onClick_Start()
    {
        int ChildCount = Arr_difficulty[0].GetComponentsInChildren<PieceScript>().Length;

        PieceScript[] _temp = Arr_difficulty[0].GetComponentsInChildren<PieceScript>();

        for (int i = 0; i < ChildCount; i++)
        {
            _temp[i].RandomPiecePos();
        }

        arCamera[0].SetActive(false);
        arCamera[1].SetActive(false);

    }

    IEnumerator TakePhoto()  // Start this Coroutine on some button click
    {
        yield return new WaitForEndOfFrame();

        if (ARCamera != null)
        {
            resWidth = ARCamera.pixelWidth;
            resHeight = ARCamera.pixelHeight;
            RenderTexture rt = new RenderTexture(resWidth, resHeight, 24);
            ARCamera.targetTexture = rt;
            Texture2D screenShot = new Texture2D(resWidth, resHeight, TextureFormat.RGB24, false);
            Rect rec = new Rect(0, 0, screenShot.width, screenShot.height);
            ARCamera.Render();
            RenderTexture.active = rt;
            screenShot.ReadPixels(new Rect(0, 0, resWidth, resHeight), 0, 0);
            screenShot.Apply();

            //=========================================================Create Puzzle Image 로딩문제...
            int ImageCount = PuzzleImage.Length;
            for (int i = 0; i < ImageCount; i++)
            {
                PuzzleImage[i].sprite = Sprite.Create(screenShot, rec, new Vector2(0.5f, 0.5f));
            }
        
            //임시 코드 
            Arr_difficulty[0].SetActive(true);
            img_Base.gameObject.SetActive(false);
        
            Btn_Start.gameObject.SetActive(true);
        }
          
    }
}
