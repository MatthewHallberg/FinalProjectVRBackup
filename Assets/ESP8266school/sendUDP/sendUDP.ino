
 #include <ESP8266WiFi.h>
 #include <WiFiUdp.h>

int buttonPin = 5; //d1 on esp8266 nodemcu
int buttonPin2 = 4; //d2 

bool walking = false;
bool sentWalking = false;
bool sentNotWalking = false;

bool firing = false;
bool sentFiring = false;
bool sentNotFiring = false;

const char* ssid     = "will_trade_password_for_beer"; // wifi network name
const char* password = "ginger12"; // wifi network password


IPAddress ipBroadCast(10, 0, 0, 109); //ip of computer network
//IPAddress ipBroadCast(10, 0, 0, 21); //ip of mobile network iphone
//IPAddress ipBroadCast(10, 0, 0, 243); //ip of mobile network small android
//IPAddress ipBroadCast(192, 168, 15, 120); //ip of work


unsigned int udpRemotePort=1999;
const int UDP_PACKET_SIZE = 28;
char udpBuffer[ UDP_PACKET_SIZE];
WiFiUDP udp;

void setup() {
  Serial.begin(115200);
  delay(10);
  // We start by connecting to a WiFi network
  Serial.print("Connecting to ");
  Serial.println(ssid);
 
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
      delay(500);
      Serial.print(".");
  }
  Serial.println("WiFi connected"); 
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
  Serial.println("Starting UDP");
  
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  
  //send connected message
  strcpy(udpBuffer, "Connected");
  Serial.println("Connected"); 
  udp.beginPacket(ipBroadCast, udpRemotePort);
  udp.write(udpBuffer, sizeof(udpBuffer));
  udp.endPacket();
}

void sendFIRE(){
  
  strcpy(udpBuffer, "FIRE"); 
  udp.beginPacket(ipBroadCast, udpRemotePort);
  udp.write(udpBuffer, sizeof(udpBuffer));
  udp.endPacket();
  }

 void sendWALK(){

  strcpy(udpBuffer, "WALK"); 
  udp.beginPacket(ipBroadCast, udpRemotePort);
  udp.write(udpBuffer, sizeof(udpBuffer));
  udp.endPacket(); 
  }

 void sendSTOP(){

  strcpy(udpBuffer, "STOP"); 
  udp.beginPacket(ipBroadCast, udpRemotePort);
  udp.write(udpBuffer, sizeof(udpBuffer));
  udp.endPacket(); 
  }

   void sendDONT(){

  strcpy(udpBuffer, "DONT"); 
  udp.beginPacket(ipBroadCast, udpRemotePort);
  udp.write(udpBuffer, sizeof(udpBuffer));
  udp.endPacket(); 
  }

void loop() {
  int buttonValue = digitalRead(buttonPin);
  int buttonValue2 = digitalRead(buttonPin2);

 if (buttonValue == LOW){
      firing = true;
   } else {
      sentFiring = false;
   }
   
   if (buttonValue == HIGH){
      firing = false;
   } else {
    sentNotFiring = false;
   }

   if (firing == true && sentFiring == false){
      Serial.println("FIRE");
      sendFIRE();
      delay(200);
      sentFiring = true;
   }

   if (firing == false && sentNotFiring == false){
      Serial.println("DONT");
      sendDONT();
      delay(200);
      sentNotFiring = true;
   }
   
   //end firing
   //start walking
   
   if (buttonValue2 == LOW){
      walking = true;
   } else {
      sentWalking = false;
   }
   
   if (buttonValue2 == HIGH){
      walking = false;
   } else {
    sentNotWalking = false;
   }

   if (walking == true && sentWalking == false){
      Serial.println("WALK");
      sendWALK();
      delay(200);
      sentWalking = true;
   }

   if (walking == false && sentNotWalking == false){
      Serial.println("STOP");
      sendSTOP();
      delay(200);
      sentNotWalking = true;
   }
   
}


