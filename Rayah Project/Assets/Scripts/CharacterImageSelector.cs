using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class CharacterImageSelector : MonoBehaviour
{
    [SerializeField] Sprite[] characterImages;
    // Start is called before the first frame update
    void Start()
    {
        transform.GetComponent<Image>().sprite = characterImages[PlayerData.characterNumber - 1];
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
