//#define RX_PIN 3
//#define TX_PIN 2
//SoftwareSerial mySerial(RX_PIN, TX_PIN);

void messages_setup() {
//  pinMode(RX_PIN, INPUT);
//  pinMode(TX_PIN, OUTPUT);
  //mySerial.begin(9600);
}

int readSerial () {
  int incomingByte = 0;
  
  if(Serial.available() > 0) {
    incomingByte = Serial.read();
    Serial.print ("Read from Serial: ");
    Serial.println (incomingByte);
    Serial.println ();
  } 
//  else if (mySerial.available() > 0) {
//    incomingByte = mySerial.read();
//    Serial.print ("Read from mySerial: ");
//    Serial.println (incomingByte);
//  }
  return incomingByte;
}

void messages_loop () {
  message1();
  message2();
  message3();
  message4();
  message5();
  message6();
  message7();
  message8();
  message9();
}

void messages_loop1() {
  int incomingByte = 0; //to determine the byte of # input

  incomingByte = readSerial ();
  //Accessing serial port

  if(incomingByte == 49) {
    message1(); 
  }
  if(incomingByte == 50) {
    message2(); 
  }

  if(incomingByte == 51) {
    message3(); 
  }

  if(incomingByte == 52) {
    message4(); 
  }

  if(incomingByte == 53) {
    message5(); 
  }

  if(incomingByte == 54) {
    message6(); 
  }

  if(incomingByte == 55) {
    message7(); 
  }

  if(incomingByte == 56) {
    message8(); 
  }

  if(incomingByte == 57) {
    message9();
  }
}

void print_message (char * str) {
  Serial.println(str);
  drawWord (str);
}

void message1() {
  print_message("Turning Left");
}

void message2() {
  print_message("Turning Right");
}

void message3() {
  print_message("God Loves You!");
}

void message4() {
  print_message("Just Married!");
}

void message5() {
  print_message("Forever Alone");
}

void message6() { 
  print_message("Congrats Grad");
}

void message7() {
  print_message("Smile Human!");
}

void message8() {
  print_message("OHHHMIGAW");
}

void message9() {
  print_message("Sorry");
}


