using UnityEngine;
using System.Collections;



struct Score{
	public int numberOfHumanWins;
	public int numberOfMachineWins;
	public int numberOfDraws;
}

public class MainGameplay : MonoBehaviour {
	//our game board
	//Tile[,] tiles = new Tile[3, 3];
	Board board = new Board();
	UniversalData universalData;
	Score score;
	const int xSignValue = 1;
	const int oSignValue = -1;
	//default values
	int currentStarter = 2;
	int currentLevel = 2;
	int currentComputerSign = 1;
	int currentPersonSign = -1;
	private const int personSelected = 1;
	private const int computerSelected = 2;
	private const int easyLevelSelected =1;
	private const int mediumLevelSelected =2;
	private const int hardLevelSelected =3;
	static bool isPlayersTurn = false;
	public static int HUMAN = 2;
	public static int COMPUTER = 1;
	public static int DRAW = 0;
	public static int INCONCLUSIVE = -10;
	DataToSave originalData;
	DataToSave data;
	bool isGameOver;
	bool isBoardEmpty = true;
	// Use this for initialization
	MinimaxAlgorithm algorithm;
	void Start () {
		universalData = GameObject.FindGameObjectWithTag ("Data").GetComponent<UniversalData> ();
		algorithm = GetComponent<MinimaxAlgorithm> ();
		originalData.sign = currentPersonSign;
		originalData.level = currentLevel;
		originalData.starter = currentStarter;
		//StartCoroutine(computerMove());

		//looping through image references of tiles
		foreach(Transform t in transform){
			TileImage ch = t.gameObject.GetComponent<TileImage> ();
			int tileNumber = ch.tile_number;
			int row = tileNumber / 3;
			int column = tileNumber % 3;
			Tile n= new Tile();
			n.image = ch;
			n.value = 0;
			board.setTiles(row, column, n);
		}
		//printBoard ();
		//start a new game
		startFirstGame();
	}


	IEnumerator WaitAfterPlayersMove() {
		yield return new WaitForSeconds(1);
	}

	IEnumerator computerMove(){
		yield return new WaitForSeconds(1);
		if (isBoardEmpty) {
			bool notFound = true;
			while (notFound && isGameOver == false) {
				int a = Random.Range (0, 9);

				if (ChangeTileValue (a, currentComputerSign) == true) {
					//sign changed sucessfully
					notFound = false;
				}
			}
		} else {
			print ("minimax it man!");
			if (currentLevel == easyLevelSelected)
				algorithm.move (ref board, currentComputerSign, 1);
			else if (currentLevel == mediumLevelSelected) {
				algorithm.move (ref board, currentComputerSign, 2);
			} else if (currentLevel == hardLevelSelected) {
				algorithm.move (ref board, currentComputerSign, 3);
			}
		}
		int winner = CheckWinner (); 
		if (winner!=INCONCLUSIVE) {
			//game over
			endGame (winner);
		} else {
			isBoardEmpty = false;
			isPlayersTurn = true;
		}
		isPlayersTurn = true;
	}
	// Update is called once per frame
	void Update () {
	}

	IEnumerator startANewGame(){
		yield return new WaitForSeconds(0);
		isBoardEmpty = true;
		StopCoroutine(computerMove ());
		isGameOver = false;
		//clear up the board
		for(int i = 0; i<3;i++){
			for (int j = 0; j < 3; j++) {
				board.changeTileData (i, j, 0, 0);
			}
		}
		if (currentStarter == computerSelected) {
			StartCoroutine(computerMove ());
		} else {
			isPlayersTurn = true;
			isBoardEmpty = false;
		}

	}



	void startFirstGame(){
		isBoardEmpty = true;
		isGameOver = false;
		//setting 
		data = universalData.passDataToMainGameplay ();
		if (data.sign == 0 && data.level == 0 && data.starter == 0) {
			data = originalData;
		}
		setData (data);
//		print ("level: ");
//		print (data.level);
//		print ("sign: ");
//		print (data.sign);
//		print ("starter: ");
//		print (data.starter);

		if (currentStarter == computerSelected) {
			StartCoroutine(computerMove ());
		} else {
			isPlayersTurn = true;
			isBoardEmpty = false;
		}

	}
	public bool ChangeTileValue(int tileNumber, int sign){
		int row = tileNumber / 3;
		int column = tileNumber % 3;
		if (board.getOnlyTileValue(row, column) == 0) {
			board.changeTileData (row, column, sign, sign);
			return true;
		} else
			return false;

	}
	int matchSignToTheWinner(int sign){
		if (sign == currentComputerSign) {
			return COMPUTER;
		} else if (sign == currentPersonSign) {
			return HUMAN;
		} else if (sign == 0) {
			return DRAW;
		} else {
			return INCONCLUSIVE;
		}
	}
	public int CheckWinner(){
		int winnerSign=INCONCLUSIVE;
		int sum = 0;
		for(int i = 0; i<3;i++){
			for(int j=0; j<3;j++){
				sum += board.getOnlyTileValue(i, j);
			}
			if(sum ==-3){
				// o sign won
				winnerSign = oSignValue;
			}
			else if(sum ==3){
				//x sign won
				winnerSign = xSignValue;
			}
			sum=0;
		}

		sum = 0;
		for(int i = 0; i<3;i++){
			for(int j=0; j<3;j++){
				sum += board.getOnlyTileValue(j, i);
			}
			if(sum ==-3){
				// o sign won
				winnerSign = oSignValue;
			}
			else if(sum ==3){
				//x sign won
				winnerSign = xSignValue;
			}
			sum=0;

		}

		//check diagonal
		sum = 0;
		sum += board.getOnlyTileValue(0, 0) + board.getOnlyTileValue(1, 1) + board.getOnlyTileValue(2, 2);
		if(sum ==-3){
			// o sign won
			winnerSign = oSignValue;
		}
		else if(sum ==3){
			//x sign won
			winnerSign = xSignValue;
		}
		sum = 0;
		sum += board.getOnlyTileValue(0, 2) + board.getOnlyTileValue(1, 1) + board.getOnlyTileValue(2, 0);;
		if(sum ==-3){
			// o sign won
			winnerSign = oSignValue;
		}
		else if(sum ==3){
			//x sign won
			winnerSign = xSignValue;
		}
		if (winnerSign == INCONCLUSIVE && checkDraw ()) {
			winnerSign = 0; //draw
		}

		return matchSignToTheWinner(winnerSign);
	}

	bool checkDraw(){
		for(int i = 0; i<3;i++){
			for(int j=0; j<3;j++){
				if (board.getOnlyTileValue(i, j) == 0)
					return false;
			}
		}
		return true;
	}

	public void endGame(int winner){
		isGameOver = true;
		//StopCoroutine (computerMove ());
		if (winner == COMPUTER) {
			score.numberOfMachineWins++;
			print ("The Machine Triumphed!");

			//StartCoroutine(startANewGame ());
		} else if (winner == HUMAN) {
			score.numberOfHumanWins++;
			print ("Congratulatios! You Triumphed.");
			//StartCoroutine(startANewGame ());

		} else {
			score.numberOfDraws++;
			print ("It's a draw.");
			//StartCoroutine(startANewGame ());

		}
		StartCoroutine(startANewGame ());

	}

	void printBoard(){
		string s = "";
		for(int i = 0; i<3;i++){
			for(int j=0; j<3;j++){
				s+=(board.getOnlyTileValue(i, j) + " ");
			}
			s+=("\n");
		}
		Debug.Log(s);

	}

	void setData(DataToSave data){
		currentLevel = data.level;
		currentStarter = data.starter;
		currentPersonSign = data.sign;
		for(int i = 0; i<3;i++){
			for(int j=0; j<3;j++){
				board.getTile(i, j).image.currentPlayerSign = data.sign;
			}
		}
		if (currentPersonSign == xSignValue) {
			currentComputerSign = oSignValue;
		} else {
			currentComputerSign = xSignValue;
		}

	}

	public void getInfoOnCurrentLevelChange(int level){
		currentLevel = level;
	}

	public void getInfoOnCurrentSignChange(int sign){
		currentPersonSign = sign;
		for(int i = 0; i<3;i++){
			for(int j=0; j<3;j++){
				board.getTile(i, j).image.currentPlayerSign  = sign;
			}
		}
		if (currentPersonSign == xSignValue) {
			currentComputerSign = oSignValue;
		} else {
			currentComputerSign = xSignValue;
		}
	}

	public void getInfoOnCurrentStarterChange(int starter){
		currentStarter = starter;

	}
	public int getCurrentStarter(){
		return currentStarter;
	}

	public bool isPlayersTurnToMove(){
		return isPlayersTurn;
	}

	public void setPlayersTurn(bool t){
		isPlayersTurn = t;
		if (!t && isGameOver == false)
			StartCoroutine(computerMove());
	}
	public int getCurrentComputerSign(){
		return currentComputerSign;
	}
	public int getCurrentPlayerSign(){
		return currentPersonSign;
	}
}
