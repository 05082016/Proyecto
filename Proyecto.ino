#include <Servo.h>
#define pinBase 12
#define pinMano 8
#define pinElevacionm 4
#define pinElevacionb 2

Servo motorBase;
Servo motorMano;
Servo motorElevacionm;
Servo motorElevacionb;


void setup() {
  motorBase.attach(pinBase);
  motorBase.write(160);
  delay(3000);
   motorBase.write(50);
  delay(3000);
   motorBase.write(0);
  delay(3000);
  motorBase.write(90);
  motorMano.attach(pinMano);
  motorMano.write(0);
  delay(4000);
  motorMano.write(50);
  delay(4000);
  motorMano.write(0);
  motorElevacionm.attach(pinElevacionm);
  motorElevacionm.write(95);
  delay(3500);
  motorElevacionm.write(165);
  delay(3500);
  motorElevacionm.write(15);
  delay(3500);
  motorElevacionm.write(95);
  motorElevacionb.attach(pinElevacionb);
  motorElevacionb.write(90);
  delay(4500);
  motorElevacionb.write(175);
  delay(4500);
  motorElevacionb.write(10);
  delay(4500);
  motorElevacionb.write(90);
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
