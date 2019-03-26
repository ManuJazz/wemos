#include <ESP8266WiFi.h>          //ESP8266 Core WiFi Library (you most likely already have this in your sketch)

#include <DNSServer.h>            //Local DNS Server used for redirecting all requests to the configuration portal
#include <ESP8266WebServer.h>     //Local WebServer used to serve the configuration portal
#include <WiFiManager.h>          //https://github.com/tzapu/WiFiManager WiFi Configuration Magic :-)

#include <IFTTTWebhook.h>         //https://github.com/romkey/IFTTTWebHook IFTTT Trigger Magic :-)
#define IFTTT_API_KEY ""
#define IFTTT_EVENT_NAME ""
#define IFTTT_FINGERPRINT "AA:75:CB:41:2E:D5:F9:97:FF:5D:A0:8B:7D:AC:12:21:08:4B:00:8C" //generated with https://www.grc.com/fingerprints.htm

volatile bool BUTTON_state = false;

void button_pressed() {
  noInterrupts();
  BUTTON_state = true;
  interrupts();
}

void setup() {
  WiFiManager wifiManager;
  wifiManager.autoConnect("Wemos", "1234");

  attachInterrupt(D3, button_pressed, FALLING); //CHANGE, RISING, FALLING Lógica inversa

  Serial.begin(115200);

  Serial.println(WiFi.localIP());
}

void loop() {
  while (!BUTTON_state)
    yield();

  IFTTTWebhook myWebHook(IFTTT_API_KEY, IFTTT_EVENT_NAME, IFTTT_FINGERPRINT);
  myWebHook.trigger();
  
  Serial.println("botón pulsado");  
  BUTTON_state = false;
}
