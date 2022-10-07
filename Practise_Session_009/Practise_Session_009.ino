//Break and Continue 



void setup() {
  // put your setup code here, to run once:

int multiple = 1;
int multipleA = 1;
Serial.begin(9600);
while (multiple <= 10) {
  Serial.println(2*multiple);
  multiple++;

  if(multiple==5 ){
    Serial.println("Breaking the loop now");
    break;
  }
}

while(true){
  Serial.println("This is an Endless loop");
  multipleA++;
  Serial.println(multipleA);

  if (multipleA ==10){
    Serial.println("The loop breaks now");
    break;
  }
  
}

for(int i=0; i<=10; i++){
  
  
    if(i==5){
      continue;
    }

      Serial.println(i);

}


Serial.println("End of our loop");


for(int a=0; a<=20; a++){
  Serial.println(a);
  return;
 
}



}

void loop() {
  // put your main code here, to run repeatedly:

}
