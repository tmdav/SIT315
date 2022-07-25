//Arduino code for LED that is activated by PIR motion sensor
// Normal execution is suspended when interrupt service routine (ISR) is run ie. when motion is detected.

const int MOTION_SENSOR_PIN = 2;   			//Set motion sensor signal pin to digital pin 5 of Arduino
const int LED_PIN           = 3;   			//Set LED pin to digital pin 3 on Arduino
volatile int motionState = 0; 			    //Set initial state of motion sensor

void setup() {
  Serial.begin(9600);                		// Set data rate in bits
  pinMode(MOTION_SENSOR_PIN, INPUT); 		// Set MOTION_SENSOR_PIN as input
  pinMode(LED_PIN, OUTPUT);          		// Set LED_PIN as output
  attachInterrupt(0, pin_ISR, CHANGE);      // Call attachInterrupt method with args pin, method, mode
}

void loop() {
  
}
void pin_ISR() {								// Method to run on interrupt
  motionState = digitalRead(MOTION_SENSOR_PIN); // Read current state
  digitalWrite(LED_PIN, motionState);    		// Set pin state for led pin
  Serial.println("Motion detected");            // Print to serial monitor		
}
