using System.Collections;
using System.Collections.Generic;
using UnityEngine.XR.ARFoundation;
using UnityEngine;

public class CameraToggle : MonoBehaviour
{

    [SerializeField]
    ARCameraManager m_CameraManager;
    //public GameObject placeFaceButton;
    //public GameObject cameraButton;

    public ARCameraManager cameraManager
    {
        get => m_CameraManager;
        set => m_CameraManager = value;
    }

    [SerializeField]
    ARSession m_Session;

    public ARSession session
    {
        get => m_Session;
        set => m_Session = value;
    }

    void Update()
    {
        if (m_CameraManager == null || m_Session == null)
            return;
    }

    public void ToggleCam()
    {
        if (m_CameraManager.requestedFacingDirection == CameraFacingDirection.User)
        {
            m_CameraManager.requestedFacingDirection = CameraFacingDirection.World;
            //camToUser = false;
        }
        else
        {
            m_CameraManager.requestedFacingDirection = CameraFacingDirection.User;
            //camToUser = true;
        }
    }
}
