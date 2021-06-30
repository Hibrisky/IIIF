using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using UnityEngine.XR.ARFoundation;

public class IF_JigsawPuzzle : MonoBehaviour
{
    [System.Serializable]
    public struct ImageInfo
    {
        public string name;
        public Texture2D Image;
    };

    public GameObject m_SpritesRoot;

    [SerializeField]
    GameObject m_textureDivideObj;

    IF_TextureDivide m_TextureDivide;

    public ARTrackedImageManager m_trackedImageManager;

    
    public ImageInfo[] ImageInfos;


    private void Start()
    {
        m_TextureDivide = m_textureDivideObj.GetComponent<IF_TextureDivide>();

        if (m_TextureDivide != null)
            Debug.Log("m_textureDivide Is Not Null");
        else
            Debug.Log("m_textureDivide Is Null");
    }
    private void OnEnable()
    {
        m_trackedImageManager.trackedImagesChanged += ImageChanged;
    }
    
    private void OnDisable()
    {
        if (m_SpritesRoot.transform.childCount != 0)
        {
            m_trackedImageManager.trackedImagesChanged -= ImageChanged;
        }
    }

    void ImageChanged(ARTrackedImagesChangedEventArgs eventArgs)
    {
        foreach (ARTrackedImage trackedImage in eventArgs.added)
        {
            Debug.Log("이미지 이름 : " + trackedImage.referenceImage.name);
            m_trackedImageManager.gameObject.SetActive(true);
            UpdateImage(trackedImage);
            
        }
    }

    void UpdateImage(ARTrackedImage trackedImage)//해당 이미지를 가져온다.
    {
        Texture2D source = FindImageInfo(trackedImage.referenceImage.name);

        if (source != null)
            Debug.Log(source.name);
        else
        {
            Debug.Log("trackedImage.referenceImage.texture Is null");
            return;
        }

        if (m_TextureDivide != null)
        {
            GameObject Puzzles = m_TextureDivide.TextureDivide(source);
            if (Puzzles != null)
            {
                Puzzles.transform.localScale = new Vector3(0.03f, 0.03f, 0.03f);
                Puzzles.transform.SetParent(m_SpritesRoot.transform);
                Debug.Log(m_SpritesRoot.transform.position);
                //m_SpritesRoot.transform.position = new Vector3(0,0,100);
            }
            else
                Debug.Log("Texture Divide Fail");
        }
        else
            Debug.Log("m_textureDivide Is Null!!");
    }

    Texture2D FindImageInfo(string name)
    {
        int ImageInfoCount = ImageInfos.Length;

        for (int i = 0; i < ImageInfoCount; i++)
        {
            if (ImageInfos[i].name == name)
                return ImageInfos[i].Image;
        }

        return null;
    }

}
