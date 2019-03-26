# wemos
Several Wemos implementations that approach programmers to first steps in IoT/Arduino development

## Ejer01_blink
This exercise includes the simple task of blinking the LED in Wemos Shield. It's the perfect way to begin.
If you're using Arduino IDE and Wemos Shield has not been added, it's necesary to follow the next steps:
1. File -> Preferences -> Additional Boards Manager URLs: http://arduino.esp8266.com/stable/package_esp8266com_index.json
2. Tools -> Boards -> Boards Manager -> "esp" -> Install: esp8266 by esp8266 Community
[![Instalar nueva placa de prototipado](https://j.gifs.com/APDP1z.gif)](https://www.youtube.com/watch?v=14jI7ineMzM)


## Ejer 03_LED_Phone
This exercise allows to interact with the LED Shield connected to Wemos using the phone and a Wifi connection.
In order to recognize the LED Shield, it's necesary to add Adafruit Neopixel library.
1. Sketch -> Include Library -> Manage Libraries -> "Adafruit Neopixel" -> Adafruit Neopixel by Adafruit (Arduino Library for controlling Simple-wire based LED pixels and strip)
[![Instalar nueva librería](https://j.gifs.com/0VRV9X.gif)](https://www.youtube.com/watch?v=RzLoHEC_0e8)


## Ejer 05_IFTTT
Using a Button Shield in Wemos a pizza delivery must be requested. In order to do this, the button should invoke a GET URL from Webhooks that active a new GET Petition to https://api.thingspeak.com/update?api_key=0BRH5WGEXL7NRXP3&field1=PIZZA. You will need to calculate Fingerprinting of Webhooks URL using the web platform: https://www.grc.com/fingerprints.htm

