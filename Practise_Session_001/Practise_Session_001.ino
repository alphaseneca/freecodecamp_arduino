void setup() {
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);// put your setup code here, to run once:
  }

void loop() {
 digitalWrite(10, HIGH); 
 digitalWrite(9, LOW);
 delay(500);
 digitalWrite(10, LOW);
 digitalWrite(9, HIGH);
 delay(500);
 // put your main code here, to run repeatedly:
 /*digitalWrite(9, LOW);
 delay(500);
 digitalWrite(9, HIGH);
 delay(500);*/
}
