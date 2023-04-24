# Weatherstation #

In this repository the program for a part of the weather station (wind speed, wind direction, temperature, air pressure and humidity) is completed.

At the moment the following sensors are integrated:

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
  

## Connection diagram and System overview ## 

Quelle: https://learn.adafruit.com/assets/53438


![Wendy-41 WendySENSE - Systemübersicht - Blockschaltbild drawio (1)](https://user-images.githubusercontent.com/131675403/234001304-1cb7f916-e31d-4982-82ee-79dde7ad8e32.png)

Quelle: Julian Tschernitsch (C)
