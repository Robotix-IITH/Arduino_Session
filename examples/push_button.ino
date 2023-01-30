
int pushButton = 2;
int led = 13;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(pushButton, INPUT);
  pinMode(led,OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  

  // read the input pin:
  int buttonState = digitalRead(pushButton);
  // print out the state of the button:
  Serial.println(buttonState);
  delay(1);        // delay in between reads for stability

  if(buttonState > 0){
    digitalWrite(led,HIGH);  // turn the LED ON (High is the  voltage level)
    delay(1000);
    digitalWrite(led,LOW); // turn the LED OFF
  }
  else{{
    digitalWrite(led,LOW); // LED is always OFF
  }
}
}
