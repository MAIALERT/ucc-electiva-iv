//constantes
const int pinLeds[10] = {4,5,6,7,8,9,10,11,12,13};
const int length=10;
const int valorIncial =1024;
//Variables
int lecturaAnaloga = 0;

void setup()
{
  for(int i = 0; i < 10; i++)
  {
  	pinMode(pinLeds[i],OUTPUT);
  }
  Serial.begin(9600);
}

void loop()
{
  lecturaAnaloga = analogRead(A0);  
  for (int i = 0; i < length; i++) 
  {
      digitalWrite(pinLeds[i],HIGH);
      delay(valorIncial-lecturaAnaloga);
      digitalWrite(pinLeds[i],LOW);  
  }

  Serial.println(lecturaAnaloga);
}

