using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DragAndDrop : MonoBehaviour
{
    public GameObject SelectedPiece;

    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButton(0))
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit))
            {
                if (hit.transform.CompareTag("Puzzle"))
                {
                    PieceScript Piece = hit.transform.GetComponent<PieceScript>();

                    if (!Piece.InRightPos)
                    {
                        if (Piece.IsStart)
                        {
                            if (SelectedPiece == null)
                            {
                                SelectedPiece = hit.transform.gameObject;
                                SelectedPiece.GetComponent<PieceScript>().Selected = true;
                                Debug.Log(SelectedPiece.name);
                            }
                        }
                    }
                }
            }
#if UNITY_EDITOR
            //Debug.DrawRay(ray.origin, ray.direction * 100, Color.red, 0.5f);
#endif
        }

        if (SelectedPiece != null)
        {
            Vector3 MouseP = new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10f);
            Vector3 MousePoint = Camera.main.ScreenToWorldPoint(MouseP);
            SelectedPiece.transform.position = new Vector3(MousePoint.x, MousePoint.y, 0f);
        
        
            Debug.Log("Piece Pos : " + MousePoint.ToString());
        }
        if (Input.GetMouseButtonUp(0))
        {
            if (SelectedPiece != null)
            {
                SelectedPiece.GetComponent<PieceScript>().Selected = false;
                SelectedPiece = null;
            }
        }
        
    }


}
