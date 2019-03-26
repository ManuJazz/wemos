int LED_state = LOW;     
unsigned long previousMillis = 0;
const long interval = 100;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop(){
  unsigned long currentMillis = millis();
  if(currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;   
    if (LED_state == LOW)
      LED_state = HIGH;
    else
      LED_state = LOW;
    digitalWrite(LED_BUILTIN, LED_state);
  }
}
