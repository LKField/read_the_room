/*
Read the temperature from an LM75-derived temperature sensor, and display it
in Celcius every 250ms. Any LM75-derived temperature should work.
*/

#include <Temperature_LM75_Derived.h>

TI_TMP102 temperature;

void setup() {
  Serial.begin(115200);
  Wire.begin();
}

void loop() {
  Serial.print("Temperature = ");
  Serial.print(temperature.readTemperatureC());
  Serial.println(" C");

  delay(250);
}
