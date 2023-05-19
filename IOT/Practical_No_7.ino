#include<Arduino.h>
#include"DHT.h"

#define dhtpin 12
#define dhtType DHT11

DHT dht(dhtpin,dhtType);

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
println("Working properly !");
dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float f = dht.readTemperature(True);

  if(isnan(h)||isnan(t)||isnan(f)){
    Serial.println("Not Working !");
  }
  Serial.println("HUMIDITY IS :");
  Serial.println(h);
  Serial.println("Temperature (in celsisus) is :");
  Serial.println(t);
  Serial.println("Temperature (in Farheniet) is  :");
  Serial.println(f);

  Serial.end();
}
