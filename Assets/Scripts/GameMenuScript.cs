using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameMenuScript : MonoBehaviour {
	OptionsMenu optionsScreen;
	public Canvas quit;
	public Canvas optionsMenu;
	public Button start;
	public Button options;
	public Button exit;

	// Use this for initialization
	void Start () {
		quit = quit.GetComponent<Canvas> ();
		optionsScreen = GameObject.FindGameObjectWithTag ("OptionsMenu").GetComponent<OptionsMenu> ();

		quit.enabled = false;
		optionsMenu.enabled = false;
	}

	public void startGame(){
		//Application.LoadLevel (1);
		SceneManager.LoadScene (1);

	}

	public void GameOptions(){
		//Application.LoadLevel (1); -is obsolete
		//SceneManager.LoadScene (1);
		optionsMenu.enabled = true;

		quit.enabled = false;
		start.enabled = false;
		options.enabled = false;
		exit.enabled = false;
		
	}

	public void exitGame(){
		Application.Quit ();
		//SceneManager.LoadScene ("MySceneName");
		
	}

	public void PressNo(){
		quit.enabled = false;
		start.enabled = true;
		options.enabled = true;
		exit.enabled = true;
	}

	public void PressExit(){
		quit.enabled = true;
		start.enabled = false;
		exit.enabled = false;
	}

	//functions related to the optionsMenu Canvas
	public void GoBackToMainMenuFromOptions(){
		optionsScreen.writeData ();
		optionsMenu.enabled = false;
		quit.enabled = false;
		start.enabled = true;
		options.enabled = true;
		exit.enabled = true;
	}
	// Update is called once per frame
	void Update () {
	
	}
}
