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

    [Header("User Registration Canvas")]
    [SerializeField] GameObject registerCanvas;
    [SerializeField] Text enterYourNameText;
    [SerializeField] Text selectYourGuideText;
    [SerializeField] InputField registerInputField;
    public int characterID = 0;
    [SerializeField] GameObject[] charactersButtons;
    [SerializeField] Animator[] characterButtonsAnimation;

    bool isUserMale = false;
    bool isUserFemale = false;

    #region Start Canvas
    public void OnNationalMuseumButtonClick()
    {
        startCanvas.SetActive(false);
        //termsAndConidtionCanvas.SetActive(true);
        registerCanvas.SetActive(true);
    }

    public void OnCreateYourJourneyButtonClick()
    {
        createJourneyPanel.SetActive(true);
    }

    public void OnCreateYourJourneyContinueButtonClick()
    {
        createJourneyPanel.SetActive(false);
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
            if (characterID != 0)
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
        characterID = 1;
        PlayerData.characterNumber = 0;
        ButtonSelectionColorEffect();
    }

    public void onCharacter2ButtonClick()
    {
        characterID = 2;
        PlayerData.characterNumber = 1;
        ButtonSelectionColorEffect();
    }

    public void onCharacter3ButtonClick()
    {
        characterID = 3;
        PlayerData.characterNumber = 2;
        ButtonSelectionColorEffect();
    }

    private void ButtonSelectionColorEffect()
    {
        for (int i = 0; i < charactersButtons.Length; i++)
        {
            if (i == characterID - 1)
            {
                charactersButtons[i].GetComponent<Image>().color = Color.gray;
            }
            else
            {
                charactersButtons[i].GetComponent<Image>().color = Color.white;
            }
        }
    }

    #endregion




}
