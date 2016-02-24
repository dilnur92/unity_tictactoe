using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public struct DataToSave{
	public int sign;
	public int level;
	public int starter;
}
public class OptionsMenu : MonoBehaviour {
	UniversalData universalData;
	public Button personButton;
	public Button computerButton;

	public Button xButton;
	public Button oButton;
	int currentStarter = 2;
	int currentLevel = 2;
	int currentComputerSign = 1;
	int currentPersonSign = -1;
	public Button easyButton;
	public Button mediumButton;
	public Button hardButton;
	private const int personSelected = 1;
	private const int computerSelected = 2;
	private const int xSelected = 1;
	private const int oSelected = 2;
	private const int easyLevelSelected =1;
	private const int mediumLevelSelected =2;
	private const int hardLevelSelected =3;
	Color unselectedNormalColor = Color.white;
	Color selectedNormalColor = new Color(1f, 1f, 1f, 0.4f);
	Color selectedHighlightedColor = new Color(1f, 1f, 1f, 0.4f);
	Color unSelectedHighlightedColor = new Color(0.8f, 0.9f, 0.6f, 1f); //F1EF97FF

	//Default values: Computer goes first, medium level

	// Use this for initialization
	void Start () {
		universalData = GameObject.FindGameObjectWithTag ("Data").GetComponent<UniversalData> ();
		//mainGameplay = GameObject.FindGameObjectWithTag ("Board").GetComponent<MainGameplay> ();
		//mainGameplay = GameObject.FindGameObjectWithTag ("Board").GetComponent<MainGameplay> ();

		//Default values: Computer goes first, medium level, player gets the O sign
		setSelectedButtonColor (ref computerButton);
		setSelectedButtonColor (ref mediumButton);
		setSelectedButtonColor (ref oButton);
	}

	void setSelectedButtonColor(ref Button b){
		ColorBlock colorBlock = b.colors;
		colorBlock.normalColor = selectedNormalColor;
		colorBlock.highlightedColor = selectedHighlightedColor;
		b.colors = colorBlock;
	}

	void setUnselectedButtonColor(ref Button b){
		ColorBlock colorBlock = b.colors;
		colorBlock.normalColor = unselectedNormalColor;
		colorBlock.highlightedColor = unSelectedHighlightedColor;
		b.colors = colorBlock;
	}

	public void pressPerson(){
		setSelectedButtonColor (ref personButton);
		setUnselectedButtonColor (ref computerButton);
		//mainGameplay.getInfoOnCurrentStarterChange (personSelected);
		currentStarter = personSelected;
	}

	public void pressComputer(){
		setSelectedButtonColor (ref computerButton);
		setUnselectedButtonColor (ref personButton);

		currentStarter = computerSelected;
	}

	public void pressXSign(){
		setSelectedButtonColor (ref xButton);
		setUnselectedButtonColor (ref oButton);
		currentPersonSign = xSelected;
	}

	public void pressOSign(){
		setSelectedButtonColor (ref oButton);
		setUnselectedButtonColor (ref xButton);
		currentPersonSign = oSelected;
	}

	public void pressEasy(){
		setSelectedButtonColor (ref easyButton);
		setUnselectedButtonColor (ref mediumButton);
		setUnselectedButtonColor (ref hardButton);
		currentLevel = easyLevelSelected;
	}

	public void pressMedium(){
		setSelectedButtonColor (ref mediumButton);
		setUnselectedButtonColor (ref easyButton);
		setUnselectedButtonColor (ref hardButton);
		currentLevel = mediumLevelSelected;

	}

	public void pressHard(){
		setSelectedButtonColor (ref hardButton);
		setUnselectedButtonColor (ref mediumButton);
		setUnselectedButtonColor (ref easyButton);
		currentLevel = hardLevelSelected;
	}

	public void writeData(){
		DataToSave data;
		data.sign = currentPersonSign;
		data.level = currentLevel;
		data.starter = currentStarter;
		universalData.setData (data);
	}

	// Update is called once per frame
	void Update () {
	
	}
}
