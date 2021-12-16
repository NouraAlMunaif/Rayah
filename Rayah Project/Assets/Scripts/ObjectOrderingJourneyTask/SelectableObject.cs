using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SelectableObject : MonoBehaviour
{
    public int objectID;
    Rigidbody rigidbody;
    [SerializeField] private float origianlZPosition;
 
    // Start is called before the first frame update
    void Start()
    {
        rigidbody = GetComponent<Rigidbody>();
        rigidbody.velocity = Vector3.zero;
        origianlZPosition = transform.position.z;
    }

    // Update is called once per frame
    void Update()
    {
        //lock z position transformation
        transform.position = new Vector3(transform.position.x, transform.position.y, origianlZPosition);
    }

    public void OnCollisionExit(Collision collision)
    {
        GameObject collidedGameobject = collision.gameObject;
        if (collidedGameobject.CompareTag("SelectableObject"))
        {
            //stop selectable objects from getting push around by the physics force collision
            collidedGameobject.GetComponent<Rigidbody>().velocity = Vector3.zero;
        }
    }

}
