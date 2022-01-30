using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class MenuUIManager : MonoBehaviour
{
    [Header("Start Menu UI")]
    [SerializeField] GameObject startCanvas;
    [SerializeField] GameObject termsAndConidtionCanvas;
    [SerializeField] GameObject termsAndConditionText;
    [SerializeField] GameObject disagreeText;
    [SerializeField] GameObject welcomeCanvas;

    [Header("Start Canvas")]
    [SerializeField] GameObject createJourneyPanel;
    [SerializeField] GameObject BlurPanel;

    [Header("User Registration Canvas")]
    [SerializeField] GameObject registerCanvas;
    [SerializeField] Text enterYourNameText;
    [SerializeField] Text selectYourGuideText;
    [SerializeField] InputField registerInputField;
    public int characterID = 0;
    [SerializeField] GameObject[] charactersButtons;
    [SerializeField] Animator[] characterButtonsAnimation;
    [SerializeField] GameObject userRegisterGroup;
    [SerializeField] Animator registerAnimator;

    [Header("Character Selection")]
    [SerializeField] Sprite[] characterImages;

    bool isUserMale = false;
    bool isUserFemale = false;

    private void Start()
    {
        Application.targetFrameRate = 300;
    }

    private void Update()
    {
        if(registerInputField.isFocused == true)
        {
            registerAnimator.SetBool("isInputFieldActive", true);
        } else
        {
            registerAnimator.SetBool("isInputFieldActive", false);
        }
    }

    #region Start Canvas
    public void OnNationalMuseumButtonClick()
    {
        startCanvas.SetActive(false);
        //termsAndConidtionCanvas.SetActive(true);
        registerCanvas.SetActive(true);
    }

    public void OnCreateYourJourneyButtonClick()
    {
        BlurPanel.SetActive(true);
        createJourneyPanel.SetActive(true);
    }

    public void OnCreateYourJourneyContinueButtonClick()
    {
        createJourneyPanel.SetActive(false);
        BlurPanel.SetActive(false);
    }
    #endregion

    // public void OnTermsAndConditionsAgreeButtonClick()
    // {
    //     termsAndConidtionCanvas.SetActive(false);
    //     welcomeCanvas.SetActive(true);
    // }

    // public void OnTermsAndConditionDisagreeButtonClick()
    // {
    //     termsAndConditionText.SetActive(false);
    //     disagreeText.SetActive(true);
    // }

    // public void StartNowButtonClick()
    // {
    //     welcomeCanvas.SetActive(false);
    //     registerCanvas.SetActive(true);
    // }

    #region Register Canvas
    public void OnNextButtonClick()
    {
        if (registerInputField.text == "")//no input for name
        {
            enterYourNameText.color = Color.red;
        }
        else
        {//when there is a input
            enterYourNameText.color = Color.black;
            if (PlayerData.characterNumber != 0)
            {
                selectYourGuideText.color = Color.black;
                PlayerPrefs.SetString("PlayerName",registerInputField.text);
                SceneManager.LoadScene("1MenuAR");
            }
            else //when the user has not selected Guide
            {
                selectYourGuideText.color = Color.red;
                foreach (var item in characterButtonsAnimation)
                {
                    item.SetTrigger("playMaleFemaleButtonAnimation");
                }
            }
        }

    }

    public void onCharacter1ButtonClick()
    {
        //characterID = 1;

        //PlayerData.characterNumber = 0;
        //ButtonSelectionColorEffect();
        BringCharacterButtonInTheMiddle(0);
        FindTheSelecctedCharacter();
        Debug.Log(PlayerData.characterNumber);
    }

    public void onCharacter2ButtonClick()//The main button
    {
        //characterID = 2;
        //PlayerData.characterNumber = 1;
        //ButtonSelectionColorEffect();
        BringCharacterButtonInTheMiddle(1);
        FindTheSelecctedCharacter();
        Debug.Log(PlayerData.characterNumber);
    }

    public void onCharacter3ButtonClick()
    {
        //characterID = 3;
        //PlayerData.characterNumber = 2;
        //ButtonSelectionColorEffect();
        BringCharacterButtonInTheMiddle(2);
        FindTheSelecctedCharacter();
        Debug.Log(PlayerData.characterNumber);
    }

    private void FindTheSelecctedCharacter()
    {
        switch (charactersButtons[1].GetComponent<Image>().sprite.name)
        {
            case "BlackRobot":
                PlayerData.characterNumber = 1;
                break;
            case "RedRobot":
              PlayerData.characterNumber = 2;
                break;
            case "BlueRobot":
                PlayerData.characterNumber = 3;
                break;
            default:
                break;
        }
    }
 

    //private void ButtonSelectionColorEffect()
    //{
    //    for (int i = 0; i < charactersButtons.Length; i++)
    //    {
    //        if (i == characterID - 1)
    //        {
    //            charactersButtons[i].GetComponent<Image>().color = Color.gray;
    //        }
    //        else
    //        {
    //            charactersButtons[i].GetComponent<Image>().color = Color.white;
    //        }
    //    }
    //}

    private void BringCharacterButtonInTheMiddle(int selectedButtonNumber)
    {
        Sprite tempMiddleImage = charactersButtons[1].GetComponent<Image>().sprite;
        //Chnage the Main(Middle) Button image
        charactersButtons[1].GetComponent<Image>().sprite = charactersButtons[selectedButtonNumber].GetComponent<Image>().sprite;
        charactersButtons[1].GetComponent<Image>().color = Color.gray; //gray out the middle selection
        charactersButtons[selectedButtonNumber].GetComponent<Image>().sprite = tempMiddleImage;

    }

    #endregion




}
