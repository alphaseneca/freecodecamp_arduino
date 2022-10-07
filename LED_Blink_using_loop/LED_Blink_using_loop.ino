 
int BLUE = 10;
int GREEN = 9;

void setup() {
  // put your setup code here, to run once:



pinMode (BLUE, OUTPUT);
pinMode (GREEN,  OUTPUT);

}

void loop() {

Serial.begin(9600);  
int count = 10;
int delayvalue = 500;

Serial.println("Blue is activated");
for(int i=0; i<count; i++){
  digitalWrite(BLUE,HIGH);
  delay(delayvalue);
  digitalWrite(BLUE,0);
  delay(delayvalue);
  
   Serial.println(count-i);
 
}
digitalWrite(BLUE,LOW);
Serial.println("BLUE stops Blinking");
Serial.println("Green is activated");

for(int i=0; i<count; i++){
  digitalWrite(GREEN,HIGH);
  delay(delayvalue);
  digitalWrite(GREEN,0);
  delay(delayvalue);
  
  Serial.println(count-i);

}

digitalWrite(GREEN,LOW);
Serial.println("GREEN stops Blinking");




  // put your main code here, to run repeatedly:

}
