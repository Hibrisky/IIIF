using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IF_TextureDivide : MonoBehaviour
{
    public int PuzzleCount = 4;
    int ImageWidth = 0;
    int ImageHeight = 0;
    int PuzzleWidthSize = 0;
    int PuzzleHeightSize = 0;
    
    public GameObject TextureDivide(Texture2D _texture)//�ؽ��� ��ȯ? ������Ʈ ��ȯ?
    {
        Texture2D source = _texture;

        if (source != null)
        {
            ImageWidth = source.width;
            ImageHeight = source.height;
            PuzzleWidthSize = ImageWidth / PuzzleCount;
            PuzzleHeightSize = ImageHeight / PuzzleCount;
        }
        else
            Debug.LogError("source Is null");

        GameObject spritesRoot = new GameObject();//GameObject.Find("SpritesRoot");//�̰� �ܺ� �Լ��� ����.

        for (int i = 0; i < PuzzleCount; i++)
        {
            for (int j = 0; j < PuzzleCount; j++)
            {
                Debug.Log("�̹��� width ������ : " + source.width.ToString());
                Debug.Log("�̹��� height ������ : " + source.height.ToString());

                Sprite newSprite = Sprite.Create(source, new Rect(i * PuzzleWidthSize, j * PuzzleHeightSize, PuzzleWidthSize, PuzzleHeightSize), new Vector2(0, 0));
                if (newSprite == null)
                {
                    Debug.Log("�̹��� ���� ����!");
                    return null;
                }

                GameObject n = new GameObject();
                SpriteRenderer sr = n.AddComponent<SpriteRenderer>();
                sr.sprite = newSprite;

                Vector3 worldSize;
                Vector2 spritesize = sr.sprite.rect.size;
                Vector2 localSpriteSize = spritesize / sr.sprite.pixelsPerUnit;
                worldSize = localSpriteSize;
                worldSize.x *= sr.transform.lossyScale.x;
                worldSize.y *= sr.transform.lossyScale.y;
                n.transform.position = new Vector3((float)(i * worldSize.x), (float)(j * worldSize.y), 0);
                n.transform.parent = spritesRoot.transform;
            }
        }

        return spritesRoot;
    }
}
