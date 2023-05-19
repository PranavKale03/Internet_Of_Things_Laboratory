const int y1 = 4;
const int y2 = 0;
const int y3 = 8;
const int y4 = 12;


void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(A1, OUTPUT);
  pinMode(A0, OUTPUT);
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);	
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  delay(5000);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(A1, LOW);
  digitalWrite(A0, LOW);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW); 

//-------------------------------------------------
// sector 2, 4 : Green
// secotr 1, 3 : Red
    digitalWrite(1, HIGH);
    digitalWrite(13, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    delay(10000);

//----------------------------------------------------
// 4 and 2 :Yellow
    digitalWrite(1, LOW);
    digitalWrite(13, LOW);
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);

    digitalWrite(y1, HIGH);
    // digitalWrite(y2, HIGH);
    digitalWrite(y3, HIGH);
    // digitalWrite(y4, HIGH);
    delay(20000);

//----------------------------------------------------
// 2 and 4 : Red
    digitalWrite(4, LOW);
    digitalWrite(0, LOW);
    digitalWrite(8, LOW);
    digitalWrite(12, LOW);

    digitalWrite(A1, HIGH);
    digitalWrite(A0, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(9, HIGH);
    delay(20000);   
//----------------------------------------------------
    
    digitalWrite(A1, LOW);
    digitalWrite(A0, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(5, LOW);
    digitalWrite(9, LOW);
    digitalWrite(1, LOW);
    digitalWrite(13, LOW);
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
    digitalWrite(7, LOW);
}