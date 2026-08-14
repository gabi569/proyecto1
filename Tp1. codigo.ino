// C++ code
//
void setup()
{
  pinMode(0 , OUTPUT);
  pinMode(1 , OUTPUT);
  pinMode(2 , OUTPUT);
  pinMode(3 , OUTPUT);
  pinMode(4 , OUTPUT);
  pinMode(5 , OUTPUT);
}

void loop()
{
  analogWrite(0 , 255);
  delay(1000);
  analogWrite(0 , 0);
  
  analogWrite(5 , 128);
  delay(100);
  analogWrite(5 , 0);
  
  digitalWrite(1 , HIGH);
  digitalWrite(2 , HIGH);
  delay(1000);
  digitalWrite(1 , LOW);
  digitalWrite(2, LOW);
  delay(1000);
  
  analogWrite(5 , 128);
  delay(100);
  analogWrite(5 , 0);
  
  analogWrite(3 , 50);
  analogWrite(4, 50);
  delay(1000);
  analogWrite(3, 0);
  analogWrite(4, 0);
  
  analogWrite(5 , 128);
  delay(100);
  analogWrite(5 , 0);
}
