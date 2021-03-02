# include <Servo.h>

Servo servo;

// variabelen voor de sensor
int pinLaser = 7;
int pinReciever = 6;

// variabelen voor de lampjes 
int rood = 13;
int blauw = 12
int geel = 11
int groen = 10;

// variabele voor tijd
int huidigeMillis = 0;

// variabele voor tellen van hoeveel balletjes voorbij komen
int aantalBalletjes = 0;

void setup () {
  // aangeven of variabele een OUTPUT of INPUT is
  pinMode (pinLaser, OUTPUT);
  pinMode (pinReceiver, INPUT);
  pinMode (rood, OUTPUT);
  pinMode (blauw, OUTPUT);
  pinMode (geel, OUTPUT);
  pinMode (groen, OUTPUT);
  digitalWrite(pinLaser, HIGH);
  servo.attach(9);
  Serial.begin (9600);
}

void loop () {
  
  // variabele declareren, door het uitlezen van de pin
  int value = digitalRead (pinReceiver); 
  
  // variabele declareren met millis
  int huidigeMillis = millis();
  
  // als er aan deze tijdaanduidingen wordt voldaan, zal de servo op 0 graden gedraaid blijven staan 
  if (huidigeMillis > 0 && huidigeMillis < 600) {
    servo.write(0);
  }
  
  // als er aan deze tijdsaanduiding is voldaan, zal de servo zichzelf naar 90 graden draaien
  if (huidigeMillis >= 600) {
    servo.write(90);
  }
  
  // als er aan deze tijdsaanduiding is voldaan, zal de servo zichzelf weer terugdraaien naar 0 graden
  if (huidigeMillis >= 1200) {
    servo.write(0);
  }
  
  // als er aan deze tijdsaanduiding is voldaan, zal de servo zichzelf naar 90 graden draaien
  if (huidigeMillis >= 1800) {
    servo.write(90);
  }
  
  // als er aan deze tijdsaanduiding is voldaan, zal de servo zichzelf weer terugdraaien naar 0 graden
  if (huidigeMillis >= 2400) {
    servo.write(0);
  }
  
  // als er een balletje voorbij komt, receiver ontvangt niets
  if (value == LOW) {
    digitalWrite (rood, HIGH);
    digitalWrite (blauw, HIGH);
    digitalWrite (geel, HIGH);
    digitalWrite (groen, HIGH);
  }
  
  // als er geen balletje voorbij komt, receiver ontvangt laserstraal
  if (value == HIGH) {
    digitalWrite (rood, LOW);
    digitalWrite (blauw, LOW);
    digitalWrite (geel, LOW);
    digitalWrite (groen, LOW);
  }
    
  /* als er een balletje voorbij komt, receiver ontvangt niets, 
  tellen we dit balletje op bij het aantalBalletjes, zo kunnen we zien hoeveel balletjes er langs zijn geweest. 
  eigenlijk wilde we dit op de widget weergeven, maar dit lukte niet, dus geven we het weer in de Serial Monitor */
  if (value == LOW) {
    aantalBalletjes = aantalBalletjes + 1;
    Serial.println(aantalBalletjes);
  }
}

