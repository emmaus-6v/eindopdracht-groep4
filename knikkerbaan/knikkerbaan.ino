// variabelen voor de sensor
int pinLaser = 7;
int pinReciever = 6;

// variabelen voor de lampjes 
int rood = 13;
int blauw = 12
int geel = 11
int groen = 10;

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
  Serial.begin (9600);
}

void loop () {
  int value = digitalRead (pinReceiver);
  Serial.println (value); // deze zou weggelaten kunnen worden
  
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


