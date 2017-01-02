const int buttonPin = 1;     
const int ledPin =  0;      
int val = 0;

int buttonState = 0;        

void setup() {
 
  pinMode(ledPin, OUTPUT);
  
  pinMode(buttonPin, INPUT_PULLUP);
  

}

void loop() {

buttonState = digitalRead(buttonPin);

 
  if (buttonState == HIGH) {
    delay(1000);
    for (int i = 0; i < 3; i++) {
      digitalWrite(ledPin, HIGH);
      delay(500);
      digitalWrite(ledPin,LOW);
       delay(500);
  }
  }
  else{ digitalWrite(ledPin,LOW);}
  }
