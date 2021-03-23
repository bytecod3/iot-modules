#include <SoftwareSerial.h>

// create software serial object
SoftwareSerial mySerial(4, 5);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  mySerial.begin(9600);

  Serial.println("Initializing...");
  delay(1000);

  mySerial.println("AT"); // perfom handshake, Return OK
  updateSerial();
  mySerial.println("AT+CSQ"); // Signal quality Test
  updateSerial();
  mySerial.println("AT+CCID"); // read SIM info to check whether it is plugged
  updateSerial();
  mySerial.println("AT+CREG?"); // check whether sim registered
  updateSerial();
  
}

void loop() {
  // put your main code here, to run repeatedly:
  updateSerial();
  

}

void updateSerial(){
  delay(500);
  while(Serial.available()){
    mySerial.write(Serial.read()); // forward to software serial
    
  }

  while(mySerial.available()){
    Serial.write(mySerial.read()); // forward to serial port
  }
}
