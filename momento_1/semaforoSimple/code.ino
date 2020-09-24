//Codigo
int pins[3] = {11,12,13};
int len = 3;

void setup()
{
  for (int i = 0; i < len; i++)
  {
  	pinMode(pins[i], OUTPUT);
  }
}

void loop()
{
  for (int i = 0; i < len; i++)
  {
    digitalWrite(pins[i-1], LOW);
   	digitalWrite(pins[i], HIGH);
    delay(1000);
  }
    digitalWrite(pins[len-1], LOW); 
}