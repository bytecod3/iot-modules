/*
 * Obtain GPS data using the NEO-6M GPS module
 * Required external libraries: NEOGPS
 */

#include <SoftwareSerial.h>
#include <NMEAGPS.h>

SoftwareSerial gpsSerial(2 , 3); // define rx and tx pins
NMEAGPS gps;  // create GPS object

void setup() {
  Serial.begin(9600);
  gpsSerial.begin(9600); // connect GPS sensor

}

uint32_t loopCount = 0;

void loop() {
  // get the structure that contains all all the parsed values

//  Serial.println(loopCount);

  if(gps.available(gpsSerial)){
//    gps_fix fix = gps.read();
//
    Serial.println("Reached");
//  
//    // display position
//    Serial.print("Position: ");
//  
//    if(fix.valid.location){
//      Serial.print("lat: "); Serial.print(fix.latitude(), 6); Serial.print(" ");
//      Serial.print("long: "); Serial.print(fix.longitude(), 6);
//    }else{
//      Serial.println('?');
//    }

//Serial.println(loopCount);
  }

  loopCount++;
  
  
}
