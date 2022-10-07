//Comparision Opearators <, >, <=, >=, == , != 
void setup() {
  // put your setup code here, to run once:
int variableOne = 8;
int variableTwo = 7;
int variableThree = 6;
float variableEx = 5.55;

Serial.begin(9600);
Serial.println(variableOne > variableTwo); //is true = 1
Serial.println(variableOne < variableTwo); //is false = 0
Serial.println(variableThree <= variableOne); //is true = 1
delay(1000);
Serial.println(variableThree >= variableEx); // is true = 1
Serial.println(variableOne==variableTwo); //is false = 0
Serial.println(variableThree!= variableTwo); //is true as it is always true unless the variable ar eequal = 1

delay (2000);
Serial.println();
Serial.println();
Serial.println();


// Logical Opearators And && Or || and Not !

Serial.print("When both statement are true then ");
Serial.println(true&&true);   
Serial.print("When both statement are true then ");
Serial.println(1&&1<2 );
// And Opearator
/*  1&&1 = 1
 *  1&&0 = 0
 *  0&&1 = 0
 *  0&&0 = 0
 */

delay (2000);
Serial.println();
Serial.println();
Serial.println();

Serial.print("When any statement among two statement are true then ");
Serial.println(true||true); 
Serial.print("When any statement among two statement are true then ");
Serial.println(0||1 );
//Or Opearator 

/* 1||1 = 1
 *  1||0 = 1
 *  0||1 = 1
 *  0||0 = 0
 */
delay (2000);
Serial.println();
Serial.println();
Serial.println();

Serial.print("When a statement is true it changes it to false and vice versa");
Serial.println(!true);
Serial.print("When a statement is true it changes it to false and vice versa");
Serial.println(!false);
 


}

void loop() {
  // put your main code here, to run repeatedly:

}
