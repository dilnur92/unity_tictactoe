using UnityEngine;
using System.Collections;

public class UniversalData : MonoBehaviour {
	int currentStarter = 2;
	int currentLevel = 2;
	int currentPersonSign = -1; // x = -1
	DataToSave dataToPass;
	MainGameplay mainGameplay;
	// Use this for initialization
	void Awake () {
		//used as a communication tool in between scenes
		DontDestroyOnLoad (transform.gameObject);

	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void setData(DataToSave data){
		dataToPass = data;
//		print ("level: ");
//		print (data.level);
//		print ("sign: ");
//		print (data.sign);
//		print ("starter: ");
	}

	public DataToSave passDataToMainGameplay(){
		return dataToPass;
	}
}
