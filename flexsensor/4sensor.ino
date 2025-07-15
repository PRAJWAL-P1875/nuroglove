#include <DFRobotDFPlayerMini.h>
#include "mp3tf16p.h"
MP3Player mp3(10, 11); // digital signal pin for dfmini player
const int flexPin1 = A1; // Pin for the first flex sensor
const int flexPin2 = A2; // Pin for the second flex sensor
const int flexPin3 = A3; // Pin for the third flex sensor
const int flexPin4 = A4; // Pin for the fourth flex sensor
void setup() {
  Serial.begin(9600);
  mp3.initialize();
}
void loop() {
  int flexValue1 = analogRead(flexPin1); // Read value from the first flex sensor
  int flexValue2 = analogRead(flexPin2); // Read value from the second flex sensor
  int flexValue3 = analogRead(flexPin3); // Read value from the third flex sensor
  int flexValue4 = analogRead(flexPin4); // Read value from the fourth flex sensor
  Serial.print("Flex Sensor 1 Value: ");
  Serial.println(flexValue1);
  Serial.print("Flex Sensor 2 Value: ");
  Serial.println(flexValue2);
  Serial.print("Flex Sensor 3 Value: ");
  Serial.println(flexValue3);
  Serial.print("Flex Sensor 4 Value: ");
  Serial.println(flexValue4);
  // Check if flex sensor 1 value is greater than 800
  if (flexValue1 > 800) {
    mp3.playTrackNumber(1, 30); // Play track 1 for flex sensor 1
    delay(500); // Add a delay to avoid continuous triggering
  }
  // Check if flex sensor 2 value is greater than 800
  if (flexValue2 > 800) {
    mp3.playTrackNumber(2, 30); // Play track 2 for flex sensor 2
    delay(500); // Add a delay to avoid continuous triggering
  }
  // Check if flex sensor 3 value is greater than 800
  if (flexValue3 > 800) {
    mp3.playTrackNumber(3, 30); // Play track 3 for flex sensor 3
    delay(500); // Add a delay to avoid continuous triggering
  }
// Check if flex sensor 4 value is greater than 800
  if (flexValue4 > 800) {
    mp3.playTrackNumber(4, 30); // Play track 4 for flex sensor 4
    delay(500); // Add a delay to avoid continuous triggering
  }
  delay(20); // Allow time for the serial monitor to update
}
