int dbOff = 6;
int dbOn = 3;
int valDB = 0;
int pin = 10;


void setup() {
   Serial.begin(9600);
   pinMode(dbOn, OUTPUT);
   pinMode(dbOff, OUTPUT);
   pinMode(pin, INPUT);

}

void loop() {
  valDB = digitalRead(pin);
  
   if(valDB == LOW) {
      digitalWrite(dbOff, HIGH);
      digitalWrite(dbOn, LOW);
      Serial.println("Detection Off");
      Serial.println("------------");
   }

    if (valDB == HIGH) {
      digitalWrite(dbOff, LOW);
      digitalWrite(dbOn, HIGH);
      Serial.println("Detection On");
      Serial.println("------------");
   }
   
      delay(75);
      
}
