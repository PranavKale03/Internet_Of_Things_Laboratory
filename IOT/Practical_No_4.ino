void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  
}

char user_input;

void loop()
{
  Serial.begin(9600);
  
  while(1)
  {
    user_input = Serial.read();
    if (user_input == 'g'){
      digitalWrite(5, HIGH);
      delay(1000);
      digitalWrite(5, LOW);
    }

    else if (user_input == 'y'){
      digitalWrite(6, HIGH);
      delay(1000);
      digitalWrite(6, LOW);
    }

    else if (user_input == 'r'){
      digitalWrite(7, HIGH);
      delay(1000);
      digitalWrite(7, LOW);
    }

    else if (user_input == 'b'){
      digitalWrite(5, HIGH);
      delay(1000);
      digitalWrite(5, LOW);
      delay(1000);
      digitalWrite(5, HIGH);
      delay(1000);
      digitalWrite(5, LOW);
    }
  }
  Serial.end();
};
