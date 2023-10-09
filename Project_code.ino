/////////////////////////////////
// LED_Blink
//
// This program blinks the LED #13
//  off and on every 1 second
/////////////////////////////////
int ledPin = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode (ledPin, OUTPUT); // Pin 13 is for LED 13

}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (ledPin, HIGH);  // HIGH turns on LED
  delay(1000); 
  digitalWrite (ledPin, LOW);
  delay(1000);
  
}

