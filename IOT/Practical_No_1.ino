void setup()
{
  pinMode(8, OUTPUT);
}

void loop()
{
  digitalWrite(8, HIGH);
  delay(1200); // Wait for 1200 millisecond(s)
  digitalWrite(8, LOW);
  delay(1200); // Wait for 1200 millisecond(s)
}
