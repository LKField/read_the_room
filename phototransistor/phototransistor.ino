int sensor = 3;

void setup() {
  pinMode(sensor, INPUT);
  Serial.begin(115200);
}

void loop() {
  int light = analogRead(sensor);
  Serial.print("The level of light is: ");
  Serial.println(light);
  delay(500);
}
