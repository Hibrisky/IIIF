using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class IF_VirtualPad : MonoBehaviour, IDragHandler, IPointerUpHandler,IPointerDownHandler
{
    public Image Img_PadBG;
    public Image Img_Pad;


    Vector3 InputVector;


    public virtual void OnDrag(PointerEventData ped)
    {
        Vector2 pos;
        if (RectTransformUtility.ScreenPointToLocalPointInRectangle(Img_PadBG.rectTransform, ped.position, ped.pressEventCamera, out pos))
        {
            pos.x = (pos.x / Img_PadBG.rectTransform.sizeDelta.x);
            pos.y = (pos.y / Img_PadBG.rectTransform.sizeDelta.y);

            InputVector = new Vector3(pos.x * 2, pos.y * 2, 0);
            InputVector = (InputVector.magnitude > 1.0f) ? InputVector.normalized : InputVector;

            Img_Pad.rectTransform.anchoredPosition = new Vector3(InputVector.x * (Img_PadBG.rectTransform.sizeDelta.x / 3),
                                                                    InputVector.y * (Img_PadBG.rectTransform.sizeDelta.x / 3));
        }
    }

    public virtual void OnPointerDown(PointerEventData ped)
    {
        OnDrag(ped);
    }

    public virtual void OnPointerUp(PointerEventData ped)
    {
        InputVector = Vector3.zero;

        Img_Pad.rectTransform.anchoredPosition = Vector3.zero;
    }

    public float GetHorizontalValue()
    {
        return InputVector.x;
    }

    public float GetVerticalValue()
    {
        return InputVector.y;
    }



}

