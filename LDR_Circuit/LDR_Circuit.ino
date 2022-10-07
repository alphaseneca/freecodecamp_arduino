
//Original source:  https://www.arduino.cc/en/Tutorial/ReadAnalogVoltage

// This code is used with a video tutorial for RoboJax.com
// Published on Aug 31, 2017 from Aajx, ON, Canada.
// Written/Edited by A.B.S

void setup()

{

  Serial.begin(9600);          //  setup serial
  pinMode(10, OUTPUT);
}



void loop(){

  int LDRvalue = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = LDRvalue * (5.0 / 1023.0);
  // print out the value you read:
  Serial.print("Voltage =");// prints the text "Voltage ="
  Serial.print(voltage);// prints the actual voltage
  
  // check if voltage is less than 3, then set pin 10 to high or ON
  if(voltage < 0.05
  ){
    digitalWrite(10, HIGH); 
  }else{
    digitalWrite(10, LOW); // or keep of OFF when voltage is larger than 3
  }
  Serial.println();
  delay(300);

}


 
