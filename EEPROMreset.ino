#include <EEPROM.h>

void setup() {
  Serial.begin(57600);
  Serial.println("RESETTING");
}

void loop() {


for (int i = 0; i < 512; i++){EEPROM.write(i, 0);}
Serial.println("DONE");
delay(10000);
  

}
