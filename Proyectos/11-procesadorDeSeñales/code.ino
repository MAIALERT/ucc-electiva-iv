//Codigo
//constantes
const int pinLeds[10] = {13, 12, 11, 10, 9, 7, 6, 5, 4, 3};
//variables
String entradaPin = "";
String estadoLed ="";

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 10; i++) 
  {
    pinMode(pinLeds[i], OUTPUT);
  }
}

void loop() {
  if (Serial.available()) 
  {
    entradaPin = Serial.readStringUntil(':');
    estadoLed = Serial.readStringUntil(':');
    if (entradaPin == "ALL") 
    {
      for (int i = 0; i < 10; i++) 
      {
        digitalWrite(pinLeds[i], estadoLed == "1");
      }
    } else {
      digitalWrite(entradaPin.toInt(), estadoLed == "1");
    }

    Serial.print("Pin Numero: " + entradaPin + ", Estado del Pin(Apagado = 0 || Encendido = 1): " + estadoLed);
    Serial.println();
  }
  delay(1000);
}