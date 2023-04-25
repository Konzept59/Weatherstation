# Weatherstation #

In this repository the program for a part of the weather station (wind speed, wind direction, temperature, air pressure and humidity) is completed.

**At the moment the following sensors are integrated:**

* Windgeschwindigkeit
  * Pro-D Anemometer (Davis 6410)
  * External Mechanical part for Weatherstation (WH1080 und WH1090) Anemometer and Winddirection indicator
* Temperature and Humidity
  * DHT22 + AM2302
* Temperature and Pressure
  * BMP280
* y-Controller
  * Arduino NANO
  
## Libraries used ## 
* "adafruit/DHT sensor library@^1.4.4"
* "adafruit/Adafruit BME280 Library@^2.2.2"
* "adafruit/Adafruit BMP280 Library@^2.6.6"

## Software used ##
* Visual Studio Code
  * Version: 1.77.3 (user setup)
   Commit: 704ed70d4fd1c6bd6342c436f1ede30d1cff4710
   Date: 2023-04-12T09:16:02.548Z
   Electron: 19.1.11
   Chromium: 102.0.5005.196
   Node.js: 16.14.2
   V8: 10.2.154.26-electron.0
   OS: Windows_NT x64 10.0.22621
   Sandboxed: No
* PlatformIO 
  * Core: 6.1.6
    Home: 3.4.3

  

## Connection diagram and System overview ## 

Quelle: https://learn.adafruit.com/assets/53438


![Wendy-41 WendySENSE - Systemübersicht - Blockschaltbild drawio](https://user-images.githubusercontent.com/131675403/234275768-30142344-0d19-49a9-a158-472b1f21191c.png)


Quelle: Julian Tschernitsch (C)


## **Sources** ## 
* https://forum.arduino.cc/t/solved-adafruit-bme280-temp-humidity-barometric-pressure-sensor/431976/22
* https://learn.adafruit.com/assets/53438
* https://learn.adafruit.com/adafruit-bmp280-barometric-pressure-plus-temperature-sensor-breakout?view=all
* https://iotspace.dev/arduino-dht22-auslesen-temperatur-und-luftfeuchtesensor/
* https://lastminuteengineers.com/dht11-dht22-arduino-tutorial/#:~:text=Wiring%20DHT11%20and%20DHT22%20Sensors%20to%20an%20Arduino,-Now%20it's%20time&text=Connecting%20DHT%20sensors%20to%20Arduino,pin%20to%20digital%20pin%20%238.
* https://github.com/tchapi/markdown-cheatsheet/blob/master/README.md
* https://www.makershop.de/bme280-sensor-arduino-nano/
