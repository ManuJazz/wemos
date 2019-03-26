#define GPIO_Button D3
bool BUTTON_state=false;   
int LED_state = LOW;  
unsigned long previousMillis = 0;
const long interval = 1000;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  attachInterrupt(GPIO_Button, blink, RISING);
}

void blink() {
  BUTTON_state=!BUTTON_state;
}

void loop() {
  if (BUTTON_state) {
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
}
