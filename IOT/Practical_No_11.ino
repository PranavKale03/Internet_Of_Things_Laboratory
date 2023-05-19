#define outPin 12 
#define DHTTYPE DHT11
#include <Arduino.h>
#include <Adafruit_Sensor.h> 
#include "DHT.h"
  DHT dht(12, DHT11);
void setup() { 
	Serial.begin(9600); dht.begin();
}
	float max=0; 
	float min=96; 
void loop() {
	int readData = dht.read(8); 
	float c = dht.readTemperature();
	if(isnan(c)) {
	Serial.println("not working");
	} 
	if(c>max){
		max=c;
	} 
	if(c<min){ min=c;}
	Serial.print("Temperature = "); 
	Serial.print(c); 
	Serial.println("°C"); 
	Serial.print("Max: ");
 
    	Serial.println(max); 
	Serial.print("Min: "); 
	Serial.println(min); 
	delay(2000);
}
