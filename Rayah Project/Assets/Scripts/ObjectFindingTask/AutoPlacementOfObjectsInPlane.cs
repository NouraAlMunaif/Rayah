using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;

[RequireComponent(typeof(ARPlaneManager))]
public class AutoPlacementOfObjectsInPlane : MonoBehaviour
{
    [SerializeField] private GameObject placedPrefab;
    private GameObject placedObject;
    [SerializeField] private ARPlaneManager arPlaneManager;
    [SerializeField] private ObjectFindingTaskUIManager uIManager;
    [SerializeField] private SpawnedObjectManager spawnedObjectManager;
    void Awake()
    {
        arPlaneManager = GetComponent<ARPlaneManager>();
        arPlaneManager.planesChanged += PlaneChanged;
    }

    private void PlaneChanged(ARPlanesChangedEventArgs args)
    {
        if (args.added != null && placedObject == null)
        {
            ARPlane arPlane = args.added[0];
            placedObject = Instantiate(placedPrefab, arPlane.transform.position, Quaternion.identity);
            spawnedObjectManager.DisplaySpawnedObject(placedObject, false);
            uIManager.DisplayIntroductionCanvas(false);
            uIManager.DisplayUIAfterIntro();
        }
    }

 
}