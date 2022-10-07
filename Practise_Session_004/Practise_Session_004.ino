//Global variable are those variable which can be accessed in all the functions across the code //
int myGlobalVariable = 776;

const float pi = 3.14;
#define good true //there are qualifiers and are called constant variables


 /*void setup() {
  // put your setup code here, to run once:
  //Local variable are those variable which can be accessed within that function and doesnot transfer to another scope
int myLocalVariable = 852;
Serial.begin(9600);
Serial.println("Printing in Setup");
Serial.println(myGlobalVariable);
Serial.println(myLocalVariable);


}

void loop() {
  // put your main code here, to run repeatedly:
  //We can have same name but assign different values in the local variable //
int myLocalVariable = 123;
Serial.println("Printing in Loop");
Serial.println(myGlobalVariable);
Serial.println(myLocalVariable);
Serial.println(myGlobalVariable+myLocalVariable);
delay(2000);
*/

void setup()
{
  
  

}

void loop(){
  Serial.begin(9600);
  Serial.println(pi);
  delay(1000);
  Serial.println(good);
  delay(1000);
  
}
