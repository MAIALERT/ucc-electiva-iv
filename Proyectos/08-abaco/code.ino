//Codigo
const int pinPushbuttonPlus = 8;
const int pinPushbuttonLess = 7;
const int pinPushbuttonPlus1 = 1;
const int pinPushbuttonLess1 = 2;
const int pinPushbuttonLed = 0;
const int pinLeds1[4] = {9,10,11,12};
const int pinLeds2[4] = {6,5,4,3};
const int pinLed= 13;
const int len = 4;
int aux = 0;
int aux1= 0;
int answer = 0;

void setup()
{
  pinMode(pinPushbuttonPlus, INPUT_PULLUP);
  pinMode(pinPushbuttonLess, INPUT_PULLUP);
  pinMode(pinPushbuttonPlus1, INPUT_PULLUP);
  pinMode(pinPushbuttonLess1, INPUT_PULLUP);
  pinMode(pinPushbuttonLed, INPUT_PULLUP);
  pinMode(pinLed, OUTPUT);
  for(int i = 0; i < len; i++){
    pinMode(pinLeds1[i], OUTPUT);
    pinMode(pinLeds2[i], OUTPUT);
  }
}
void loop()
{
  int zeroReadingPlus = digitalRead(pinPushbuttonPlus);
  int zeroReadingLess = digitalRead(pinPushbuttonLess);
  int readOnePlus = digitalRead(pinPushbuttonPlus1);
  int readOneLess = digitalRead(pinPushbuttonLess1);
  int totalReading = digitalRead(pinPushbuttonLed);
  if (! zeroReadingPlus && aux < 4 ){
    aux++;
  }
  
  if (! readOnePlus && aux1 < 4){
    aux1++;
  }
  
  if (! zeroReadingLess && aux > 0){
    aux--;
  }
  
  if (! readOneLess && aux1 > 0){
    aux1--;
  }
  
  for (int i = 0; i < len; i++){
     digitalWrite(pinLeds1[i],i < aux); 
     digitalWrite(pinLeds2[i],i < aux1);   
  }
  delay(200);  
  //RESULTADO
  answer = aux+aux1;
  for(int i = 0; i < answer;i++){
   digitalWrite(pinLed,LOW);
   if(! totalReading){
     delay(500);
     digitalWrite(pinLed, HIGH);
     delay(500);
   }
  }   
}

