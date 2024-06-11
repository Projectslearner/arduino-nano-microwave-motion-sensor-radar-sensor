/*
    Project name : Microwave Motion Sensor RADAR sensor
    Modified Date: 11-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-microwave-motion-sensor-radar-sensor
*/

const int radarPin = 2; // Digital pin connected to the radar sensor module
const int ledPin = 13; // LED pin

void setup() {
  pinMode(radarPin, INPUT); // Set radar sensor pin as input
  pinMode(ledPin, OUTPUT); // Set LED pin as output
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int sensorValue = digitalRead(radarPin); // Read sensor value
  
  // Print sensor value to Serial Monitor
  Serial.print("Radar Sensor Value: ");
  Serial.println(sensorValue);
  
  // If sensor value is HIGH (motion detected), turn on LED
  if (sensorValue == HIGH) {
    digitalWrite(ledPin, HIGH); // Turn on LED
    Serial.println("Motion Detected!");
  } else {
    digitalWrite(ledPin, LOW); // Turn off LED
  }
  
  delay(100); // Delay for stability
}
