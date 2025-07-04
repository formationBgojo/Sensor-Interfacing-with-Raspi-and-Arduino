#include "Arduino_BMI270_BMM150.h"
void setup() {
Serial.begin(9600);
while (!Serial);
if (!IMU.begin()) {
Serial.println("IMU initialization failed !");
while(1);
}
}
void loop() {
float x,y,z;
if (IMU.accelerationAvailable()) {
IMU.readAcceleration(x,y,z);
Serial.print("Acceleration : X="); Serial.print(x);
Serial.print("Y="); Serial.print(y);
Serial.print("Z="); Serial.println(z);
}
delay(2000);
}
