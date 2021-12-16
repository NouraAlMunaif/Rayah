
    using System.Collections;
    using System.Collections.Generic;
    using UnityEngine;

namespace ObjectFindingTask
{
    public class GameManager : MonoBehaviour
    {
        public bool isInstructionMode = false;
        [SerializeField] private GameObject arrow;


        public void DisplayPointerArrow(bool show)
        {
            arrow.SetActive(show);
        }
    }

}

