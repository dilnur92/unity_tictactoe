using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class TileImage : MonoBehaviour {
	public Sprite empty_square;
	public Sprite x_sign;
	public Sprite o_sign;
	public int tile_number;
	public int currentPlayerSign = -1;
	MainGameplay mainGameplay;
	const int xSignValue = 1;
	const int oSignValue = -1;
	const int emptySignValue = 0;
	// Use this for initialization
	void Start () {
		//empty_square = GameObject.FindGameObjectsWithTag ("Signs").na
		mainGameplay = GameObject.FindGameObjectWithTag ("Board").GetComponent<MainGameplay> ();
	}
	
	// Update is called once per frame
	void Update () {
	}

	public void ChangeSign(int sign){
		if (sign == xSignValue) {
			gameObject.GetComponent<SpriteRenderer> ().sprite = x_sign;
		} else if (sign == oSignValue) {
			gameObject.GetComponent<SpriteRenderer> ().sprite = o_sign;

		} else {
			gameObject.GetComponent<SpriteRenderer> ().sprite = empty_square;

		}
	}
	void OnMouseDown(){
		//can be clicked only if the machine has made its move
		if (mainGameplay.isPlayersTurnToMove ()) {
			if (currentPlayerSign == xSignValue) {
				mainGameplay.ChangeTileValue (tile_number, xSignValue);
			} else {
				mainGameplay.ChangeTileValue (tile_number, oSignValue);

			}
			int winner = mainGameplay.CheckWinner (); 
			if (winner != MainGameplay.INCONCLUSIVE) {
				mainGameplay.endGame (winner);
			} else {
				mainGameplay.setPlayersTurn (false);
			}
		}


	}
}
