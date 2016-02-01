#include <Servo.h>

Servo servo0;
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;
Servo servo7;
int potpin=0;
int potval;
int inint = 0;

void setup() {
  /*
  servo0.attach(8);
  servo1.attach(9);
  servo2.attach(2);
  servo3.attach(3);
  servo4.attach(4);
  servo5.attach(5);
  servo6.attach(6);
  servo7.attach(7);
*/
  Serial.begin(9600);
  // put your setup code here, to run once:
   if (Serial.available() > 0) {    // is a character available?
      inint = Serial.parseInt();       
      Serial.println(inint);
   }

}

void loop() {
  
  while(inint==0){
    servo0.attach(8);
    potval = analogRead(potpin);           
    potval = map(potval, 0, 1023, 0, 180);    
    servo0.write(potval);                 
    Serial.println(potval);
    delay(15); 
    if (Serial.available() > 0) {   
      inint = Serial.parseInt();       
      Serial.println(inint);
      servo0.detach();
    } 
  }
  while(inint==1){
    servo1.attach(9);
    potval = analogRead(potpin);           
    potval = map(potval, 0, 1023, 0, 180);    
    servo1.write(potval);                 
    Serial.println(potval);
    delay(15); 
    if (Serial.available() > 0) {   
      inint = Serial.parseInt();       
      Serial.println(inint);
      servo1.detach();
    } 
  }
    while(inint==2){
    servo2.attach(2);
    potval = analogRead(potpin);           
    potval = map(potval, 0, 1023, 0, 180);    
    servo2.write(potval);                 
    Serial.println(potval);
    delay(15);
    if (Serial.available() > 0) {    
      inint = Serial.parseInt();       
      Serial.println(inint);
      servo2.detach();
    }  
  }
  while(inint==3){
    servo3.attach(3);
    potval = analogRead(potpin);           
    potval = map(potval, 0, 1023, 0, 180);    
    servo3.write(potval);                 
    Serial.println(potval);
    delay(15);
    if (Serial.available() > 0) {    
      inint = Serial.parseInt();       
      Serial.println(inint);
      servo3.detach();
    }  
  }
  while(inint==4){
    servo4.attach(4);
    potval = analogRead(potpin);           
    potval = map(potval, 0, 1023, 0, 180);    
    servo4.write(potval);                 
    Serial.println(potval);
    delay(15);
    if (Serial.available() > 0) {    
      inint = Serial.parseInt();       
      Serial.println(inint);
      servo4.detach();
    }  
  }
  while(inint==5){
    servo5.attach(5);
    potval = analogRead(potpin);           
    potval = map(potval, 0, 1023, 0, 180);    
    servo5.write(potval);                 
    Serial.println(potval);
    delay(15);
    if (Serial.available() > 0) {    
      inint = Serial.parseInt();       
      Serial.println(inint);
      servo5.detach();
    }  
  }
  while(inint==6){
    servo6.attach(6);
    potval = analogRead(potpin);           
    potval = map(potval, 0, 1023, 0, 180);    
    servo6.write(potval);                 
    Serial.println(potval);
    delay(15);
    if (Serial.available() > 0) {    
      inint = Serial.parseInt();       
      Serial.println(inint);
      servo6.detach();
    }  
  }
  while(inint==7){
    servo7.attach(7);
    potval = analogRead(potpin);           
    potval = map(potval, 0, 1023, 0, 180);    
    servo7.write(potval);                 
    Serial.println(potval);
    delay(15);
    if (Serial.available() > 0) {    
      inint = Serial.parseInt();       
      Serial.println(inint);
      servo7.detach();
    }  
  }

    
/*
  servo0.write(180);
  delay(750);
  servo0.write(160);
  delay(750);
  servo0.write(180);
  delay(750);
  servo1.write(90);
  delay(750);
  servo1.write(70);
  delay(750);
  servo1.write(90);
  delay(750);
  servo2.write(180);
  delay(750);
  servo2.write(160);
  delay(750);
  servo2.write(180);
  delay(750);
  servo3.write(90);
  delay(750);
  servo3.write(70);
  delay(750);
  servo3.write(90);
  delay(750);
  servo4.write(90);
  delay(750);
  servo4.write(70);
  delay(750);
  servo4.write(90);
  delay(750);
  servo5.write(90);
  delay(750);
  servo5.write(70);
  delay(750);
  servo5.write(90);
  delay(750);
  servo6.write(90);
  delay(750);
  servo6.write(70);
  delay(750);
  servo6.write(90);
  delay(750);
  servo7.write(90);
  delay(750);
  servo7.write(70);
  delay(750);
  servo7.write(90);
  delay(750);
*/

}
