int sensorPin =A5;
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
}

void loop() {
  
  // put your main code here, to run repeatedly:
sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
}
