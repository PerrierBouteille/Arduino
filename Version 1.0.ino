int dbOff = 6;
int dbOn = 3;
int valDB = 0;
int pin = 10;
int PinAlarm=8; 
float sinVal; 
int toneVal; 
const float pi = 3.14159;


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
      noTone(PinAlarm);
   }

    if (valDB == HIGH) {
      digitalWrite(dbOff, LOW);
      digitalWrite(dbOn, HIGH);
      Serial.println(" ");
      Serial.println("/!\\ Alert : Volume sonore trop elevee /!\\");
      Serial.println("Port d'un casque anti bruit obligatoire !");
      Serial.println("_______________________________________");
      for(int x=0; x<180; x++){ 
        sinVal = (sin(x*(pi/180))); 
        toneVal = 2000+(int(sinVal*1000)); 
        tone(PinAlarm, toneVal); 
      delay(15); 
      } 
   }
   
   delay(75);  
   
}
