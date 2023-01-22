int led = 9;    // LED connected to digital pin 9
int brightness = 0; // Brightness of the LED
int fadeAmount = 5; // change in fading

void setup() {
  // nothing happens in setup
  pinMode(led, OUTPUT);
}

void loop() {
 
  // set the brightness of pin 9 
  analogWrite(led,brightness);

  // change the brightness for the next time through the loop:
  brightness = brightness + fadeAmount;
  
  // reverse the direction of fading
  if(brightness <= 0 || brightness >= 255){
    fadeAmount = -fadeAmount;
  }
  // wait for 30 milliseconds to see dimming effect
  delay(30);
}
