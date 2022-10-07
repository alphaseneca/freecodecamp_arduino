void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

Serial.println("This line should print irrespective of anything");

if(5>3){
  Serial.println("This lise should print if the condition is true");

       }

  Serial.println("This line should be executed irrespective of anything");


  bool mybool = true ;

if(mybool==true){
  Serial.println("This line should be Only Executed if the set mybool value is true");
}
}





void loop() {
  // put your main code here, to run repeatedly:

}
