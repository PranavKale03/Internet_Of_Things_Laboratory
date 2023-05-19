int inputNumber;
int squaredNumber;

void setup()
{
  Serial.begin(9600);
  Serial.println("Input a number : ");
}

void loop()
{
  if (Serial.available() > 0)
  {
    inputNumber = Serial.parseInt();
    
    Serial.println(inputNumber);
    
    squaredNumber = sq(inputNumber);
    
    Serial.println("Square of number is ");
    
    Serial.println(squaredNumber);
  }
}
