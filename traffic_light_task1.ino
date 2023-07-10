void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
}

void loop()
{
  digitalWrite(2,1);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(3,1);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(3,0);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(3,1);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(3,0);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(3,1);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(3,0);
  digitalWrite(2,0);
  digitalWrite(4,1);
  delay(2000); // Wait for 2000 milliseconds(s)
  digitalWrite(4,0);
}