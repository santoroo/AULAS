const int BUTTON_PIN = 6; 
const int LED_PIN1 = 3; 

int buttonState = 0;
void setup() {
  pinMode(LED_PIN1, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
  buttonState = digitalRead(BUTTON_PIN);
  if(buttonState == LOW) 
  {
    digitalWrite(LED_PIN1, LOW);
  }
  else 

  {
    digitalWrite(LED_PIN1, HIGH); 
  }
}
