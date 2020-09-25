//Codigo
int lectura = 1;
void setup()
{
  pinMode(11, INPUT_PULLUP);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
   lectura = digitalRead(11);
   digitalWrite(12,lectura);
   digitalWrite(13,!lectura);   
}