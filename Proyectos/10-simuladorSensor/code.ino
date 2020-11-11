//constantes
const int pinLeds[10] = {4,5,6,7,8,9,10,11,12,13};
const int length=10;
//Variables
int lecturaAnaloga = 0;
int valorIncial =102.3;
int control = 0;


void setup()
{
  for(int i = 0; i < 10; i++){
  	pinMode(pinLeds[i],OUTPUT);
  }
  Serial.begin(9600);
}

void loop()
{
  lecturaAnaloga = analogRead(A0);
  //control = map(lecturaAnaloga, 0, 1023, 0, 10);
  control = lecturaAnaloga/valorIncial;
  
  for (int i = 0; i < length; i++) 
  {
      digitalWrite(pinLeds[i],i < control);
  }
  delay(1000);
  Serial.println(lecturaAnaloga);
}
