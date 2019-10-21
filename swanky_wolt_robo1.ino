int value=0;
void setup()
{
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(12,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop()
{
 value=analogRead(A0);
  
  if(value<500)
  {
    digitalWrite(12,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(10,HIGH);
    
}
  else
  {
    digitalWrite(12,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(7,LOW);
    digitalWrite(10,LOW);
  }
}
    