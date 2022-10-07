
int i;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
/*for (i=1; i<=100; i++){
  Serial.print("This is line :");
  Serial.println(i);
  delay(100);
}*/


/*Printing 
 * *****
 * *****
 * *****
 * *****
 * *
 * *
 * ***** 10 times 
 */
 
for( i=1; i<10; i++){
  Serial.println("*****");
  
}

for(int i=0; i<=20; i++){
  for(int j=0 ; j<=i; j++){

    Serial.print("*");
  }

    Serial.println();
}
int i= 1;
static int multiple = 1;
int multiplier = 487;
 
 while(i>=10){

  Serial.println("Printing in while Loop");
  delay(1000);

}



while(multiple<=10){
  Serial.println(multiple*multiplier);
  multiple++;
  
}

}

void loop() {
  // put your main code here, to run repeatedly:

  

}
