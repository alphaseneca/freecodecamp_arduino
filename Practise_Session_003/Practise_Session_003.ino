int myVariable = 6; 
float myFloat = 9.687;
bool Happy = true;
bool Sad = false;
byte x = 254;
char y = '$';



void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
myVariable++;
Serial.println(myVariable);
myVariable--;
Serial.println(myVariable);
Serial.println(myFloat);
Serial.println(Happy);
Serial.println(x);
Serial.println(y);


}

void loop() {
  // put your main code here, to run repeatedly:

}
