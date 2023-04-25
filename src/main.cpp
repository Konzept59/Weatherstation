#include <Arduino.h>
#include <DHT.h>
#include <DHT_U.h>
#include <Wire.h>
#include <Adafruit_BMP280.h>

// definition of DHT Type 
#define DHTTYPE DHT22

// definition of Sensor Pin
#define DHT22_Pin 8

// attaching pins and Type 
DHT dht(DHT22_Pin, DHTTYPE);

// declatioon of humidit and temperataur variables
float dhtHumidity, dhtTemperature;


Adafruit_BMP280 bmp; // use I2C interface
Adafruit_Sensor *bmp_temp = bmp.getTemperatureSensor();
Adafruit_Sensor *bmp_pressure = bmp.getPressureSensor();

void setup() {
  // Serial begin baud 9600
  Serial.begin(9600);

  
  // check if BMP280 works!
  Serial.println(F("BMP280 test"));
  if  (!bmp.begin()) {
    Serial.println(F("Could not find a valid BMP280 sensor,  check wiring!"));
    while (1);
  }

  // Default settings from datasheet.  
  bmp.setSampling(Adafruit_BMP280::MODE_NORMAL,     // Operating Mode. 
                  Adafruit_BMP280::SAMPLING_X2,     // Temp. oversampling 
                  Adafruit_BMP280::SAMPLING_X16,    // Pressure oversampling 
                  Adafruit_BMP280::FILTER_X16,      // Filtering. 
                  Adafruit_BMP280::STANDBY_MS_500); //  Standby time. 
  

  // starting dht Sensor
  dht.begin();

  // waiting for 0.5 seconds 
  delay(500);

}


void loop() {
    
    // creating variables for bmp Temperature, Pressure and Altitude
    char bmpTemperature[16];
    char bmpPressure[16];
    char bmpAltitude[16];

    float pressure = bmp.readPressure()/100;


    // Reading Temperature, Pressure and Altitude 
    dtostrf(9.0 * bmp.readTemperature() / 5.0 + 32.0, 3, 0, bmpTemperature);
    dtostrf(bmp.readPressure(), 3, 0, bmpPressure);
    dtostrf (bmp.readPressure(), 3, 0, bmpAltitude);
    
    // Printing Temperature from bmp280 Sensor
    Serial.print(F("Temperature  = "));
    Serial.print(bmp.readTemperature());
    Serial.println(" °C");

    // Printing Airpressure from bmp280 Sensor
    Serial.print(F("Pressure = "));
    Serial.print(bmp.readPressure()/100);
    Serial.println("  hPa");

    // Printing Altitude from bmp280 Sensor
    Serial.print(F("Approx altitude = "));
    Serial.print(bmp.readAltitude(1012));  //The "1019.66" is the pressure(hPa) at sea level in day in your region
    Serial.println("  m");                    //If you don't know it, modify it until you get your current  altitude

    // reading Humidity and Temperature from DHT22 Sensor
    dhtHumidity = dht.readHumidity();
    dhtTemperature = dht.readTemperature();

    // printing Humidity form DHT22 Sensor
    Serial.print("Humidity: ");
    Serial.print(dhtHumidity);
    Serial.print(" %, ");

    // printing Temperature form DHT22 Sensor
    Serial.print("Temperature: ");
    Serial.print(dhtTemperature);
    Serial.println(" °C");

    // printing one empty line 
    Serial.println("-------------------------------");

    float analogTemp = (256/50)*dhtTemperature;
    float analogHum = (256/100) * dhtHumidity;
    double analogPressure = 0.2348623853211009 * pressure;

    // Sending Pressure, Temeperature and Humidity Data to Hioki LR8450
    analogWrite(9, analogPressure);
    analogWrite(10, analogTemp);
    analogWrite(11, analogHum);

    

    // Delay for 2 seconds
    delay(2000);
  
  
}
