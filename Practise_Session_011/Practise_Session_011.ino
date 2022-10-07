//Arrays are the compartment for placing the values.

// This example is of one dimensional array and there is two and three dimensional arrays too
// Two dimensional array come into use while storing a pixel vlaue of a black and white photo and 
// Three dimensional array come handy while storing the pixel value of colour photograph
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
int myArray [10] = { 234,456,122,345,231,1231,1234,4543,123,446 };

Serial.println(myArray[9]);
delay(1000);
Serial.println(myArray[7]);
delay(1000);
Serial.println(myArray[0]);
delay(500);

myArray[0]= 456;

Serial.println(myArray[0]);
delay(500);



int newVariable = myArray[0] + myArray[7];
Serial.println(newVariable);


for(int i=0; i<10; i++){
  Serial.print(myArray[i]);
  Serial.print(",");
}

for(int i=0; i<10; i++){
  myArray[i] = myArray[i]+ 5;

  Serial.println(myArray[i]);
}
int sum = 0;
for(int i= 0; i<10; i++){
  sum = sum + myArray[i];
  Serial.println("Adding");
  Serial.println(sum);
  delay(500);
  
}

Serial.println(sum);

}
void loop() {
  // put your main code here, to run repeatedly:

}
