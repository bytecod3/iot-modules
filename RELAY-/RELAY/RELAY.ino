// def pins
const int relaypin = 40;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(relaypin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(relaypin, HIGH);
  Serial.println("BULB ON");
  delay(2000);
  digitalWrite(relaypin, LOW);
  Serial.println("BULB OFF");
  delay(2000);
  

}
