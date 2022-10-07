int myVariable= 5;
int mySecondVariable = 6;
int sumValue;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println(myVariable);
sumValue = myVariable+ mySecondVariable;
Serial.println(sumValue);



/*myVariable= myVariable + 2;
Serial.println(myVariable);
myVariable= myVariable -2;
Serial.println(myVariable);
myVariable= myVariable *5 ;
Serial.println(myVariable);
myVariable= myVariable / 25 ;
Serial.println(myVariable);
*/

//The int Variable only holds the integer value like 

/*myVariable= myVariable/ 2;
Serial.println(myVariable);


//% or Modulo is used to get the remainder 

myVariable= myVariable%2;
Serial.println(myVariable);
*/

}

void loop() {
  // put your main code here, to run repeatedly:

}
