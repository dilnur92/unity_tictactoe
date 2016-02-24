using UnityEngine;
using System.Collections;

public class ResolutionKeeper : MonoBehaviour {

	// Use this for initialization
	void Start () {
		Camera.main.aspect = 1280f/800f;
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
