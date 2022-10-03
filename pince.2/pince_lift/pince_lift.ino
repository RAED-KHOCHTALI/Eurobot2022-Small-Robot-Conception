/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo pince;
Servo lift;


void setup() {
  Serial.begin(9600);
     lift.attach(11); lift.write(150); delay(2000);lift.detach();delay(100);0
   pince.attach(10); pince.write(100); delay(2000);pince.detach();delay(100);
  pince.attach(10); pince.write(40); delay(2000);

  lift.attach(11); lift.write(50); delay(2000);lift.detach();delay(100);

}

void loop() {
    if(Serial.available()>0){
    char c=Serial.read();
    switch (c) {
       case 'a':{
        pince.attach(10); pince.write(70); delay(00);pince.detach();  break;
       }
        case 'b':{
        pince.attach(10); pince.write(90); delay(700);pince.detach();  break;
       }

    }
    }
  
}


