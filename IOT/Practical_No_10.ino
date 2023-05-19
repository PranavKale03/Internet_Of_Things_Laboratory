#include <Arduino.h>   
#define IR_PIN 9
#define LED 3
#define BUZZER 4

void setup()
{
  pinMode(IR_PIN, INPUT);    
  pinMode(LED, OUTPUT);      
  pinMode(BUZZER, OUTPUT);  

  pinMode(0, OUTPUT);        
  pinMode(1, OUTPUT);        
  digitalWrite(0, LOW);     
  digitalWrite(1, LOW);      

  digitalWrite(LED, LOW);   
  digitalWrite(BUZZER, HIGH); 
  delay(1000);                
}

void loop()
{
  if (digitalRead(IR_PIN))   
  {
    digitalWrite(LED, HIGH);   
    digitalWrite(BUZZER, LOW);
  }
  else     
  {                  
    digitalWrite(LED, LOW);    
    digitalWrite(BUZZER, HIGH); 
  }
  delay(1000);
}
