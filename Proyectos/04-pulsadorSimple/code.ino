//Codigo
void setup()
{
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
   digitalWrite(12, LOW);
   digitalWrite(13, LOW);
   int lectura1 = digitalRead(10);
   if(lectura1 == 0){
     digitalWrite(12, HIGH);
     digitalWrite(13, HIGH);
   }
  int lectura2 = digitalRead(11);
  if (lectura2 == 0){
      digitalWrite(13, HIGH);
  }
}