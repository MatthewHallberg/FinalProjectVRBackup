using UnityEngine;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Net.Sockets;
using System.Net;
using System.Collections;

public class gunController : MonoBehaviour
{

	public bool walking = false;
	public float speed;
	public GameObject shield;
	public bool shieldIsUp = false;
	public bool firing;
	public float fireRate = .1F;
	private float nextFire = 1F;
	private AudioSource audio;
	private GameObject bullet;
	public GameObject spawnPoint;
	public GameObject Gun;

	// Use this for initialization
	void Start ()
	{
		//set scale of shield incase we changed it in editor and set it inactive.
		shield.transform.localScale = new Vector3 (.02f, .02f, 0f);

		Application.targetFrameRate = 60;
		audio = Gun.GetComponent<AudioSource > ();
		// Create UDP client
		int receiverPort = 1999;
		UdpClient receiver = new UdpClient (receiverPort);

		// Start async receiving - received data goes to DataReceived()
		receiver.BeginReceive (DataReceived, receiver);
       
    }

	void Update ()
	{
		//print (shieldIsUp);

		if (walking == true || Input.GetKey ("o")) {
			if (!shieldIsUp && shield.transform.localScale.z == 0) {
				shield.GetComponent<Animation> ().Play ("Open");
				shieldIsUp = true;
				walking = true;
			}
		} 

		if (walking == false || Input.GetKey ("c")) {
			if (shieldIsUp && shield.transform.localScale.z == .02f) {
				shield.GetComponent<Animation> ().Play ("Close");
				shieldIsUp = false;
				walking = false;
			}
		} 

		if (firing == true || Input.GetKey ("space") && Time.time > nextFire) {
			if (!shieldIsUp) {
				audio.Play ();
				nextFire = Time.time + fireRate;
				bullet = Instantiate (Resources.Load ("bullet"), spawnPoint.transform.position, spawnPoint.transform.rotation) as GameObject;
				bullet.GetComponent<Rigidbody> ().AddRelativeForce (spawnPoint.transform.forward * -5000);
				Destroy (bullet, 5);
				firing = false;
			}
		}
	}


	// This is called whenever data is received
	private void DataReceived (IAsyncResult ar)
	{

		UdpClient c = (UdpClient)ar.AsyncState;
		IPEndPoint receivedIpEndPoint = new IPEndPoint (IPAddress.Any, 0);
		Byte[] receivedBytes = c.EndReceive (ar, ref receivedIpEndPoint);

		string packet = System.Text.Encoding.UTF8.GetString(receivedBytes, 0, 12);

		packet.Trim ();

		if (packet.Contains ("STOP")) {
			walking = false;
		} else if (packet.Contains ("WALK")) {
			walking = true;
		}

		if (packet.Contains ("FIRE")) {
			firing = true;
		} else if (packet.Contains ("DONT")) {
			firing = false; 
		}

		// Restart listening for udp data packages
		c.BeginReceive (DataReceived, ar.AsyncState);
	}
		
}

