#include<Arduino_HS300x.h>
void setup() {
Serial.begin(9600);
while (!Serial);
if (!HS300x.begin()) {
Serial.println(" HS300 sensor initialization failed !");
while(1);
}
}
void loop() {
float temp = HS300x.readTemperature();
float humidity = HS300x.readHumidity();
Serial.print("Temp :") ; Serial.print(temp) ; Serial.print("C");
Serial.print("Humidity :"); Serial.print(humidity); Serial.println("%");
delay(2000);
}
