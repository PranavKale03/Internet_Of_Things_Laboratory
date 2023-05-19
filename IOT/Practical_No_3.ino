void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);

}

int counter = 0;

void loop()
{

  counter = counter + 1;
  delay(50);
  
  if (counter<100){
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);

  }

  else if (counter>100 && counter<=200){
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
  }

  else if (counter>200 && counter<=250){
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
  }

  if (counter>250){
    counter = 0;
  };
}
