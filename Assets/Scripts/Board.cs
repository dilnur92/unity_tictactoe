using UnityEngine;
using System.Collections;

public class Board {
	Tile[,] tiles = new Tile[3, 3];

	public void setTiles(int tileRow, int tileColumn, Tile tile){
		tiles [tileRow, tileColumn] = tile;
	}

	public void changeTileData(int tileRow, int tileColumn, int tileSign, int value){
		tiles [tileRow, tileColumn].image.ChangeSign(tileSign);
		tiles [tileRow, tileColumn].value = value;
	}

	//particularly used in MiniMax
	public void changeOnlyTileValue(int tileRow, int tileColumn, int value){
		tiles [tileRow, tileColumn].value = value;
	}

	public Tile getTile(int tileRow, int tileColumn){
		return tiles [tileRow, tileColumn];
	}

	public int getOnlyTileValue(int tileRow, int tileColumn){
		return tiles[tileRow, tileColumn].value;
	}
}

public class Tile{
	public TileImage image;
	public int value;

	public void setTileValue(int val){
		value = val;
	}

	public int getTileValue(){
		return value;
	}

}