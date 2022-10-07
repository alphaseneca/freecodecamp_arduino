//Functions

/*
int Green = 9;
int Blue = 10;
int delayperiod = 500;

void setup() {
  // put your setup code here, to run once:
pinMode(Green, OUTPUT);
pinMode(Blue, OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
 myCustomBlink(Green);
 myCustomBlink(Blue);
 
}

void myBlink (){
  digitalWrite(Green, HIGH);
  delay(delayperiod);
  digitalWrite(Green, LOW);
  delay(delayperiod);
}


void myCustomBlink ( int pin){
  digitalWrite(pin,HIGH);
  delay(delayperiod);
  digitalWrite(pin,LOW);
  delay(delayperiod);
  
}

*/

void setup (){
  
     Serial.begin(9600);
     int e = sum(40,50,60);
     Serial.println(e); //Prints the addition of three given digits

      int d = sum(-45,60,45);
      Serial.println(d);

}

void loop (){
 
Serial.println(isTall(123));
bool heightmapping = isTall(90);

Serial.println(heightmapping);
  
}


      int sum (int a,int b,int c){
        return a+b+c; // Function returning int value i.e sum 
        }


      int isTall (int height){
            if(height>100){
            return true;
            }
            else {
              return false;
                 }
            } // Function returning boolean vlaue of true or false 
