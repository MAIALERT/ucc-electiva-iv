//Codigo
void setup()
{
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(13, OUTPUT);
}

void loop()
{
   digitalWrite(13,LOW );
   int lectura1 = digitalRead(10);
   if(lectura1 == 0){
     delay(100);
     digitalWrite(13, HIGH);
     delay(100);
   }
  int lectura2 = digitalRead(11);
  if (lectura2 == 0){
      delay(2000);
      digitalWrite(13, HIGH);
      delay(2000);
  }
}