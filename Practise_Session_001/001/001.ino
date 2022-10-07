int myVariable = 5;



void setup() {
 Serial.begin(9600);
 Serial.println(myVariable);// put your setup code here, to run once:
 myVariable = myVariable + 2;
 Serial.println(myVariable);
 
}

void loop() {
  // put your main code here, to run repeatedly:

}
