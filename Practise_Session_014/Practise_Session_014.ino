/*
   digitalWrite / digitalRead
   analogWrite / analogRead

  int button = 5 ;
  int Led = 9 ;
  void setup() {

  pinMode( button, INPUT);
  pinMode( Led, OUTPUT);

  }

  // put your setup code here, to run once:


  void loop() {

  Serial.begin(9600);
  Serial.println(digitalRead(button));
  if (digitalRead(button)== HIGH){
    digitalWrite(Led,HIGH);
  }

  else{
      digitalWrite(Led,LOW);
  }
  delay(500);

  }
*/

int LED1 = 9;
int LED2 = 10;
int delayperiod = 2;

void setup() {
  pinMode(LED1, OUTPUT);

}

void loop () {
  fade(LED1);
  fade(LED2);
}

void fade (int LED) {
  for (int i = 0; i <= 250 ; i++) {
    analogWrite(LED, i);
    delay(delayperiod);
  }

  for (int i = 250; i >= 0 ; i--) {
    analogWrite(LED, i);
    delay(delayperiod);
  }
}
