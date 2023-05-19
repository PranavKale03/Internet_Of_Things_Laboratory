#include <Arduino.h>   
#define IR_PIN 9
#define LED 3

void setup()
{
  pinMode(IR_PIN, INPUT);    
  pinMode(LED, OUTPUT);      

  pinMode(0, OUTPUT);        
  pinMode(1, OUTPUT);        
  digitalWrite(0, LOW);     
  digitalWrite(1, LOW);      

  digitalWrite(LED, LOW);   
  delay(100);                
}

void loop()
{
  if (digitalRead(IR_PIN))   
  {
    digitalWrite(LED, HIGH);   
  }
  else     
  {                  
    digitalWrite(LED, LOW);    
  }
  
  delay(1000);
}

