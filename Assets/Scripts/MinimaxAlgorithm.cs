using UnityEngine;
using System.Collections;
using System.Collections.Generic;

//hold information on what score the mover makes
//if he choose to move to board[row, column]
public struct ScoreOnMove{
	public int score;
	public int row;
	public int column;
	public ScoreOnMove(int s){
		score = s;
		row = 0;
		column = 0;
	}
}

public class MinimaxAlgorithm : MonoBehaviour {
	MainGameplay mainGameplay;
	const int size = 3;
	// Use this for initialization
	void Start () {
		mainGameplay = GameObject.FindGameObjectWithTag ("Board").GetComponent<MainGameplay> ();
	}
	
	// Update is called once per frame
	void Update () {

	}

	public void move(ref Board board, int sign, int depth){
		ScoreOnMove s = getMoveWithTheHighestScore (ref board, MainGameplay.COMPUTER, sign, depth, 0);
		board.changeTileData (s.row, s.column, sign, sign);
	}

	//recursive algorithm generating the move with the highest score
	ScoreOnMove getMoveWithTheHighestScore(ref Board board, int playerIndex, int playerSign, int depth, int depthCounter){
		ScoreOnMove temp;
		temp.row = 0;
		temp.column = 0;
		int winner = mainGameplay.CheckWinner ();
		//base case
		if (winner == MainGameplay.HUMAN) {
			temp.score = -100;

			return temp;
		} else if (winner == MainGameplay.COMPUTER) {
			temp.score = 100;
			return temp;
		
		} else if (winner == MainGameplay.DRAW){
			temp.score = 0;
			return temp;
		}else if(depthCounter >= depth){
			temp.score = 0;
			return temp;
		}

		List<ScoreOnMove> moves = new List<ScoreOnMove> ();

		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (board.getOnlyTileValue (i, j) == 0) {
					//we first put a player sign to each and every tile
					//to see which one generates the highest score
					//to do so, we change tile values, and change them back 
					//after we are done calculating the minimax value
					ScoreOnMove scoreOnMove;
					scoreOnMove.row = i;
					scoreOnMove.column = j;
					board.changeOnlyTileValue (i, j, playerSign);
					// Board board, int playerIndex, int playerSign, int depth, int depthCounter
					if (playerIndex == MainGameplay.HUMAN) {
						scoreOnMove.score = getMoveWithTheHighestScore (ref board, MainGameplay.COMPUTER, mainGameplay.getCurrentComputerSign(), depth, depthCounter++).score;
					} else {
						scoreOnMove.score = getMoveWithTheHighestScore (ref board, MainGameplay.HUMAN, mainGameplay.getCurrentPlayerSign(), depth, depthCounter++).score;
					}
					moves.Add (scoreOnMove);
					board.changeOnlyTileValue (i, j, 0);

				}
			}	
		}
		//computer wants to choose a move that maximizes the chance of victory
		//so we choose the highest score
		int index = 0;
		if (playerIndex == MainGameplay.COMPUTER) {
			int score = -1000000000;
			int listSize = moves.Count;
			for (int i = 0; i < listSize; i++) {
				if (moves [i].score > score) {
					score = moves [i].score;
					index = i;
				}
			}
		//in case of the player, the algorithm is supposed to minimize the chance of player's victory
		//that's why, we choose the one with the lowest score
		} else {
			int score = 1000000000;
			int listSize = moves.Count;
			for (int i = 0; i < listSize; i++) {
				if (moves [i].score < score) {
					score = moves [i].score;
					index = i;
				}
			}
		}

		return moves [index];
	}

}
