
    using System.Collections;
    using System.Collections.Generic;
    using UnityEngine;

namespace ObjectFindingTask
{
    public class GameManager : MonoBehaviour
    {
        public bool isInstructionMode = false;
        public int complexityLevel;
        [SerializeField] private GameObject arrow;
        [SerializeField] private GameObject content;


        public void DisplayPointerArrow(bool show)
        {
            arrow.SetActive(show);
        }

        void Awake(){
            if(PlayerData.ObjectFindingTaskLevel == 0){//set the instruction mode to true (0 = instruction mode)
                isInstructionMode = true;
            } else {
                  isInstructionMode = false;
                /*
                 * Default valye is 4 objects to find
                 * Level 1 = 3 objecs to find
                 * Level 2 = 4 objects to find
                 * Level 3 = 1 objects to find
                 * Level 4 = 3 objects to find
                 * Level 5 = 4 objects to find
                 */
                if(PlayerData.ObjectFindingTaskLevel == 1 || PlayerData.ObjectFindingTaskLevel == 4)
                {
                    //3 Objects to find
                    content.transform.GetChild(0).gameObject.SetActive(false);
                } else if (PlayerData.ObjectFindingTaskLevel == 3)
                {
                    content.transform.GetChild(0).gameObject.SetActive(false);
                    content.transform.GetChild(1).gameObject.SetActive(false);
                    content.transform.GetChild(2).gameObject.SetActive(false);
                }
            }

            switch (PlayerData.ObjectFindingTaskLevel)
            {
                case 1:
                    complexityLevel = 3;
                    break;
                case 2:
                    complexityLevel = 4;
                    break;
                case 3:
                    complexityLevel = 1;
                    break;
                case 4:
                    complexityLevel = 3;
                    break;
                case 5:
                    complexityLevel = 4;
                    break;
                default:
                    break;
            }
        }

        public void SetFinishedTaskStatus()
        {
            switch (PlayerData.ObjectFindingTaskLevel)
            {
                case 1:
                    PlayerPrefs.SetInt("Task_1", 1);
                    break;
                case 2:
                    PlayerPrefs.SetInt("Task_2", 2);
                    break;
                case 3:
                    PlayerPrefs.SetInt("Task_4", 4);
                    break;
                case 4:
                    PlayerPrefs.SetInt("Task_5", 5);
                    break;
                case 5:
                    PlayerPrefs.SetInt("Task_6", 6);
                    break;
                default:
                    break;
            }

        }
        
    }



}

