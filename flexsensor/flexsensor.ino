const int flexSensorPin = A1;  // Analog pin connected to the flex sensor
int flexValue = 0;             // Variable to store the flex sensor value
void setup() {
  Serial.begin(9600);  // Initialize serial communication at 9600 bps
}
void loop() {
  flexValue = analogRead(flexSensorPin);  // Read the value from the flex sensor
  Serial.print("Flex Sensor Value: ");
  Serial.println(flexValue);  // Print the value to the Serial Monitor
  delay(500);
}
 