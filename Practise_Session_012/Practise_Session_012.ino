//Strings 


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

Serial.println("This is my String");
delay(500);

char str1[6] = {'U','K','E','S','H'};
Serial.println(str1);
delay(500);

char str2[6] = {'U','K','E','S','H','\0'};
Serial.println(str2);
delay(500);

char str3[6] = "Ukesh";
Serial.println(str3);
delay(500);

/*
char str4[10] = "Ukesh";
Serial.println(str4);
delay(500);

*/

char str5[] = "Unisha";
Serial.println(str5);
delay(500);

String str6 = "This is witten by String data type" ;
Serial.println(str6);
delay(500);

Serial.println(str6.charAt(4)); //Here the string is a class which has many more functions like 
//comparision and conversion fron one to another data type

}

void loop() {



  // put your main code here, to run repeatedly:

}
