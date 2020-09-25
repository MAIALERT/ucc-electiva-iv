int semaforo1[5] = {4,5,6,7,8};
int semaforo2[5] = {13,12,11,10,9};

void setup()
{
  for (int i = 0; i < 5; i++)
  {
  	pinMode(semaforo1[i], OUTPUT);
    pinMode(semaforo2[i], OUTPUT);
  }
}

void loop()
{
  	mode(semaforo1, semaforo2, HIGH);
  	mode(semaforo1, semaforo2, LOW);
}

void mode(int pins1[5], int pins2[5], bool state) {
	digitalWrite(pins1[0], state);
  	digitalWrite(pins2[0], state);
  	delay(2000);
  	digitalWrite(pins1[1], state);
  	digitalWrite(pins2[1], state);
  	delay(2000);
  	digitalWrite(pins1[2], state);
  	digitalWrite(pins2[2], state);
  	delay(2000);
  	digitalWrite(pins1[3], state);
  	digitalWrite(pins2[3], state);
  	delay(2000);
  	digitalWrite(pins1[4], state);
  	digitalWrite(pins2[4], state);
  	delay(2000);
}