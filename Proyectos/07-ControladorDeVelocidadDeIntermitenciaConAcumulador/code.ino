//Codigo
const int pinPushbuttonPlus = 7;
const int pinPushbuttonLess = 6;
const int pinPushbuttonLed = 5;
const int pinLeds[5] = {8,9,10,11,12};
const int pinLed= 13;
const int len = 5;
int aux = 0;

void setup()
{
  pinMode(pinPushbuttonPlus, INPUT_PULLUP);
  pinMode(pinPushbuttonLess, INPUT_PULLUP);
  pinMode(pinPushbuttonLed, INPUT_PULLUP);
  for(int i = 0; i < len; i++){
    pinMode(pinLeds[i], OUTPUT);
  }
}
void loop()
{
  if (! digitalRead(pinPushbuttonPlus) && aux < 5) {
    aux++;
  }

  if (! digitalRead(pinPushbuttonLess) && aux > 0) {
    aux--;
  }

  if (! digitalRead(pinPushbuttonLed)) {
    if (aux == 0) {
        digitalWrite(pinLed, HIGH);
    } else {
      digitalWrite(pinLed, HIGH);
      delay(aux * 200);
      digitalWrite(pinLed, LOW);
    }
  } else {
    digitalWrite(pinLed, LOW);
  }

  for (int i = 0; i < len; i++) {
    digitalWrite(pinLeds[i], i < aux);
	}

  Serial.print(aux);
	delay(200);
}
