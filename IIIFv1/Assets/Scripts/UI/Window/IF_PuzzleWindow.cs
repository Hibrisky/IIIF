using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class IF_PuzzleWindow : MonoBehaviour
{
    public Button Btn_Shutter;
    public Button Btn_Start;
    public Button Btn_Back;

    int resWidth;
    int resHeight;

    PuzzleInfo CreatePuzzle;

    // Start is called before the first frame update
    void OnEnable()
    {
        if (Btn_Shutter != null)
            Btn_Shutter.onClick.AddListener(OnClick_Shutter);

        if (Btn_Start != null)
        {
            Btn_Start.onClick.AddListener(OnClick_Start);
            Btn_Start.gameObject.SetActive(false);
        }

        if (Btn_Back != null)
            Btn_Back.onClick.AddListener(OnClick_Back);

        UIManager._Instance.ShowUIPopup(8);//가이드 팝업.
    }

    private void OnDisable()
    {
        Btn_Shutter.onClick.RemoveAllListeners();
        Btn_Start.onClick.RemoveAllListeners();
        Btn_Back.onClick.RemoveAllListeners();

        GameManager.Instance.GetARCamera().targetTexture = null;
        GameManager.Instance.GetPuzzleInfo()[0].Arr_Difficulty.SetActive(false);
    }

    void OnClick_Shutter()//camera Screen Capture
    {
        StartCoroutine(TakePhoto());
    }

    void OnClick_Start()//game start
    {
        Btn_Start.gameObject.SetActive(false);
        //난이도는 임시로 고정한다.
        int ChildCount = GameManager.Instance.GetPuzzleInfo()[0].Arr_Difficulty.GetComponentsInChildren<PieceScript>().Length;
        //
        PieceScript[] _temp = GameManager.Instance.GetPuzzleInfo()[0].Arr_Difficulty.GetComponentsInChildren<PieceScript>();
        //
        for (int i = 0; i < ChildCount; i++)
        {
            _temp[i].RandomPiecePos();
        }
        //
    }

    void OnClick_Back()// Go to Main
    {
        UIManager._Instance.CloseOneBtnPopupAndBackToMain(this.gameObject, 5, "메인으로 이동합니다.", "진행중인 미션은 취소됩니다.");
    }

    IEnumerator TakePhoto()  // Start this Coroutine on some button click
    {
        yield return new WaitForEndOfFrame();

        if (GameManager.Instance.GetARCamera() == null)
        {
            Debug.LogError("GameManager.Instance.GetARCamera() Is Null");
            yield return 0;
        }

        Camera ARCamera = GameManager.Instance.GetARCamera();

        if (ARCamera != null)
        {
            resWidth = ARCamera.pixelWidth;
            resHeight = ARCamera.pixelHeight;
            RenderTexture rt = new RenderTexture(resWidth, resHeight, 24);

            ARCamera.targetTexture = rt;//타겟 텍스쳐 해제.
            Texture2D screenShot = new Texture2D(resWidth, resHeight, TextureFormat.RGB24, false);
            Rect rec = new Rect(0, 0, screenShot.width, screenShot.height);
            ARCamera.Render();
            RenderTexture.active = rt;
            screenShot.ReadPixels(new Rect(0, 0, resWidth, resHeight), 0, 0);
            screenShot.Apply();
            //=========================================================Create Puzzle Image 로딩문제...

            PuzzleInfo puzzleinfo = GameManager.Instance.GetPuzzleInfo()[0];
            
            int ImageCount = puzzleinfo.PuzzleImage.Length;
            for (int i = 0; i < ImageCount; i++)
            {
                puzzleinfo.PuzzleImage[i].sprite = Sprite.Create(screenShot, rec, new Vector2(0.5f, 0.5f));
            }

            //임시 코드 
            puzzleinfo.Arr_Difficulty.SetActive(true);

            GameManager.Instance.ARCameraOff();
            
            Btn_Shutter.gameObject.SetActive(false);
            Btn_Start.gameObject.SetActive(true);
        }
    }
}
