int PinAlarm=8; 
float sinVal; 
int toneVal; 
const float pi = 3.14159; 
void setup(){ 
pinMode(PinAlarm, OUTPUT); 
}
void loop(){ 
for(int x=0; x<180; x++){ 
sinVal = (sin(x*(pi/180))); // conversion de la valeur en radian 
toneVal = 2000+(int(sinVal*1000)); // Génération de la fréquence depuis la valeur de sinVal 
tone(PinAlarm, toneVal); 
delay(2); 
} 
} 
