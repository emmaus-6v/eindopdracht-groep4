/* const int ledPin =  LED_BUILTIN;

// globale variabelen
int ledState = LOW;               // status van de LED
unsigned long millisVorigeVerandering = 0; // bewaard tijd van laatste LED-verandering

// andere constanten
const long interval = 1000;           // interval in milliseconden

void setup() {
  // stel ledpin in als output:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // tijd van nu
  unsigned long millisNu = millis();

  // is de verstreken tijd sinds de laatste verandering langer dan de interval?
  if (millisNu - millisVorigeVerandering >= interval) {    
    // bewaar tijdstip van de verandering die we hierna gaan doen
    millisVorigeVerandering = millisNu;

    // zet de status van de LED om
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    // geef de pin de waarde van de status
    digitalWrite(ledPin, ledState);
  }
}

*/
// sensor
int pinLaser = 7;
int pinReciever = 6;

// variabelen van lampjes 
int rood = ..;
int geel = ..;
int blauw = ..;
int groen = ..;

// variabele voor tellen van hoeveel balletjes voorbij komen
int aantalBalletjes = 0;

void setup () {
  // aangeven of variabele een OUTPUT of INPUT is
  pinMode (pinLaser, OUTPUT);
  pinMode (pinReceiver, INPUT);
  pinMode (rood, OUTPUT);
  pinMode (geel, OUTPUT);
  pinMode (blauw, OUTPUT);
  pinMode (groen, OUTPUT);
  digitalWrite(pinLaser, HIGH);
  Serial.begin (9600);
}

void loop () {
  int value = digitalRead (pinReceiver);
  Serial.println (value);
  
  // als er een balletje voorbij komt, receiver ontvangt niets
  if (value == LOW) {
    digitalWrite (rood, HIGH);
    digitalWrite (geel, HIGH);
    digitalWrite (blauw, HIGH);
    digitalWrite (groen, HIGH);
  }
  
  // als er geen balletje voorbij komt, receiver ontvangt laserstraal
  if (value == HIGH) {
    digitalWrite (rood, LOW);
    digitalWrite (geel, LOW);
    digitalWrite (blauw, LOW);
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


