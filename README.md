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


![Wendy-41 WendySENSE - Systemübersicht - Blockschaltbild drawio (1)](https://user-images.githubusercontent.com/131675403/234001304-1cb7f916-e31d-4982-82ee-79dde7ad8e32.png)

Quelle: Julian Tschernitsch (C)
