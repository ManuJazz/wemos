#define GPIO_Button D3
int LED_state = LOW;  
bool BUTTON_state = false;   
unsigned long previousMillis = 0;
const long interval = 1000;

void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
  attachInterrupt(GPIO_Button, blink, FALLING);
}

void blink(){
  BUTTON_state=!BUTTON_state;
}

void loop() {
  digitalWrite(LED_BUILTIN, LOW);
  delay(3000);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(3000);
  if (BUTTON_state){
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
  while (!BUTTON_state)
    yield();

  Serial.println("llamada control en loop()");
}
