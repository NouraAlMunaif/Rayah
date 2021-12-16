using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OrderSelectButtons : MonoBehaviour
{
    public int selectedObjectID = 0;
    [SerializeField] OrderSelectButtons[] otherButtons;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnCollisionEnter(Collision collision)
    {
        GameObject collidedObject = collision.gameObject;
        Debug.Log(collidedObject.name);
        bool objectHasAlreadyBeenSelected = false;
        if (collidedObject.CompareTag("SelectableObject") && selectedObjectID == 0)
        {
            //Prevent double button selection
            int collidedObjectID = collidedObject.GetComponent<SelectableObject>().objectID;
            foreach (var item in otherButtons)
            {
                if(item.selectedObjectID == collidedObjectID)
                {
                    objectHasAlreadyBeenSelected = true;
                }
            }
            if(objectHasAlreadyBeenSelected == false)
            {
                Material selectableObjectMaterial = collidedObject.GetComponent<MeshRenderer>().material;
                this.gameObject.GetComponent<MeshRenderer>().material = selectableObjectMaterial;
                selectedObjectID = collidedObjectID;
                Destroy(collidedObject);
            }

        }
    }

}
