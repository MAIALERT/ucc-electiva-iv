//codigo
//constantes
const int pinLeds[7] = {6,7,8,9,10,11,12};
const int length = 7;
//variables
int lecturaAnaloga = 0;
int porcentaje = 0;

void setup()
{
  Serial.begin(9600);
  for(int i = 0; i < length; i++){
    pinMode(pinLeds[i], OUTPUT);
  }
}

void loop()
{
  lecturaAnaloga = analogRead(A0);
  porcentaje = map(lecturaAnaloga, 0, 1023, 0, 7);

  for (int i = 0; i < length; i++) {
    digitalWrite(pinLeds[i], i < porcentaje);
  }

  Serial.print("Lectura ->  dato: ");
  Serial.print(lecturaAnaloga);
  Serial.print(" %: ");
  Serial.print(porcentaje);
  Serial.println();
  delay(1000);
}