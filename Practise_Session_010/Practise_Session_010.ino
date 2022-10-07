void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int x = 3;
  int y = 33;
  switch(x){
     case 1:
            Serial.println("Choice 1");
            break;
     case 2:
            Serial.println("Choice 2");
            break;
     case 3:
            Serial.println("Choice 3");
            break;
     case 4:
            Serial.println("Choice 4");
            break;  
     default:
            Serial.println("The value of this digit is not assigned. "); 
  }


        switch(y){
             case 1 ... 10:
                    Serial.println("Choice from 1 ... 10 ");
                    break;
             case 11 ... 20:
                    Serial.println("Choice 11 ... 20 ");
                    break;
             case 21 ... 30:
                    Serial.println("Choice 21 ... 30 ");
                    break;
             case 31 ... 40:
                    Serial.println("Choice 31 ... 40 ");
                    break;  
             default:
                    Serial.println("The value of this digit is not assigned. "); 

  
}
}

void loop() {
  // put your main code here, to run repeatedly:

}
