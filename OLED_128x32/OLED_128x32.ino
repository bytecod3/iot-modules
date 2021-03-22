/*
 * This code prints a string on the screen
 * Using OLED 128X32 Screen
 */

// required libraries
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// define screen parameters
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32 // use 64 for a 128x64

// create object for screen
// parameters: screen-width, screen-height, &Wire = reference to Wire library, -1 = OLED_RESET pin
Adafruit_SSD1306 myScreen(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);


void setup() {
  Serial.begin(11500);

  if(!myScreen.begin(SSD1306_SWITCHCAPVCC, 0x3C)){
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // infinite loop
  }

  delay(2000);
  myScreen.clearDisplay(); // all pixels are off

  myScreen.setTextSize(1); // font-size allowed range 1-8
  myScreen.setTextColor(WHITE);
  myScreen.setCursor(0, 0);

  // display static text
  myScreen.println("GEOSCREEN");

  myScreen.display();
  myScreen.startscrollright(0x00, 0x07);

}

void loop() {
  

}
