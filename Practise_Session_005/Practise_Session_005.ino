#define pi 3.14

/*void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println();
}

void loop() {
 // put your main code here, to run repeatedly:

 float area = pi*5*5;
 Serial.println(area);
 delay(1000);
 
}
*/
//Static qualifiers are in use where we need to have a static value of the data in the specific functions 

void setup(){
  
}


void loop(){
  static int x = 0; //Static Qualifiers 
  x++;
  Serial.begin(9600);
  Serial.println(x);
  delay(500);
  
  
}
