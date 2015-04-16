#define RX_PIN 3
#define TX_PIN 2
#define READY_CHAR 65

//SoftwareSerial mySerial(RX_PIN, TX_PIN);
int idx = 0;

//#define MSG_LEN 255
//char message[MSG_LEN] = {0};
//byte msgIdx = 0;

void cloud_setup() {
//  pinMode(RX_PIN, INPUT);
//  pinMode(TX_PIN, OUTPUT);
//  mySerial.begin(9600);
  Serial.begin(9600);
}

//int isMsgAvailable () {
//  if (message[msgIdx] == 0) {
//    return 1;
//  } else {
//    return 0;
//  }
//}

void cloud_loop () {
  int incomingByte = 0;
  
  if (Serial.available() > 0) {   
    incomingByte = Serial.read();
//    Serial.print ("Read from mySerial: ");
//    Serial.println (incomingByte);
    drawChar(incomingByte);
  } else {
//    Serial.print ("Sending ready char [");
//    Serial.print (idx);
//    Serial.println ("]");
    Serial.write (READY_CHAR);
    idx++;
    delay(1000);
  }
//    
//    message[msgIdx] = incomingByte;
//    msgIdx++;
//  } else if (isMsgAvailable() == 1) {
//  }
   
}
