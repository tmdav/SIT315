//Arduino code for LED that is activated by PIR motion sensor
//The PIR sensor produces a low output when there is no motion and high when motion is detected
//The output of this prints to the serial monitor

const int MOTION_SENSOR_PIN = 7; //Set motion sensor signal pin to digital pin 5 of Arduino

const int LED_PIN = 3; //Set LED pin to digital pin 3 on Arduino

int motionStateCurrent = LOW; //Set initial state of motion sensor

void setup() {
Serial.begin(9600); // Set data rate in bits
pinMode(MOTION_SENSOR_PIN, INPUT); // Set MOTION_SENSOR_PIN as input
pinMode(LED_PIN, OUTPUT); // Set LED_PIN as output
}

void loop() {
motionStateCurrent = digitalRead(MOTION_SENSOR_PIN); // Read current state

if(motionStateCurrent){
Serial.println("Motion detected"); // Print to terminal
digitalWrite(LED_PIN, HIGH); //Set LED_PIN to high
}
else{
Serial.println("No Motion detected"); //Print to terminal when no motion detected
detected
digitalWrite(LED_PIN, LOW); //Set LED_PIN to low
}
