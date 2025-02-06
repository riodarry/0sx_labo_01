const int LED_PIN=13;
int delai=2000;
int temps_clignotement=250;
int temp_variation=2048/256;


void setup(){
   Serial.begin(9600);  
    pinMode(LED_PIN, OUTPUT);

}
void allumer(){
 digitalWrite(LED_PIN, HIGH);
 Serial.println("allume-2409626");
delay (delai);

}
void clignotement(){
  for(int i=0; i<=2;i++){
   digitalWrite(LED_PIN, HIGH);
  delay(temps_clignotement);
   digitalWrite(LED_PIN, LOW);
   delay(temps_clignotement);

  }
  Serial.println("clignotement -2409626");
  
}
void variation(){
for (int i=0;i<=255;i++){
  analogWrite(LED_PIN, i);
 Serial.println("variation -2409626");
 delay(temp_variation);
}
  
}
void eteindre(){
   digitalWrite(LED_PIN, LOW);
 Serial.println("Eteindre-2409626");
delay(delai);

}

void loop(){

allumer();
clignotement();
variation();
eteindre();

}


