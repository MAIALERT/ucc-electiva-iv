int pins1[3] = {11,12,13};
int pins2[3] = {8,9,10};
int len = 3;
int aux1=0;

void setup()
{
  for (int i = 0; i < len; i++)
  {
  	pinMode(pins1[i], OUTPUT);
    pinMode(pins2[i], OUTPUT);
  }
  digitalWrite(pins2[0], HIGH);
  digitalWrite(pins1[0], HIGH);
}

void loop()
{
  semaforo1(); 
  semaforo2();
  
} 

void semaforo1 ()
{
  delay(1000);
  digitalWrite(pins1[0], LOW);
  digitalWrite(pins1[1], HIGH);
  delay(1500);
  
  digitalWrite(pins1[1], LOW);
  digitalWrite(pins1[2], HIGH);
  delay(4500);
  
  digitalWrite(pins1[1], HIGH);
  digitalWrite(pins1[2], LOW);
  delay(1500);

  digitalWrite(pins1[1], LOW);
  digitalWrite(pins1[0], HIGH);
}
void semaforo2 ()
{
  delay(1000);
  digitalWrite(pins2[0], LOW);
  digitalWrite(pins2[1], HIGH);
  delay(1500);
  
  digitalWrite(pins2[1], LOW);
  digitalWrite(pins2[2], HIGH);
  delay(4500);
  
  digitalWrite(pins2[1], HIGH);
  digitalWrite(pins2[2], LOW);
  delay(1500);

  digitalWrite(pins2[1], LOW);
  digitalWrite(pins2[0], HIGH);
}


