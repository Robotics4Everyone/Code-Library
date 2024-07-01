/ Define the pin numbers for the stepper motor connections
const int motorPin1 = 8;
const int motorPin2 = 9;
const int motorPin3 = 10;
const int motorPin4 = 11;

// Define the number of steps per revolution for your motor
const int stepsPerRevolution = 200;  // Adjust per motor spec

// Define the delay time between steps (in milliseconds)
const int stepDelay = 10;  // Adjust this value for speed

void setup() {
  // Set the motor pins as outputs
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
}

void loop() {
  // Step one revolution in one direction
  for (int i = 0; i < stepsPerRevolution; i++) {
    stepMotor(i % 4);
    delay(stepDelay);
  }
  delay(1000);  // Wait for a second

  // Step one revolution in the other direction
  for (int i = 0; i < stepsPerRevolution; i++) {
    stepMotor((4 - (i % 4)) % 4);
    delay(stepDelay);
  }
  delay(1000);  // Wait for a second
}

void stepMotor(int step) {
  switch (step) {
    case 0:  // 1000
      digitalWrite(motorPin1, HIGH);
      digitalWrite(motorPin2, LOW);
      digitalWrite(motorPin3, LOW);
      digitalWrite(motorPin4, LOW);
      break;
    case 1:  // 0100
      digitalWrite(motorPin1, LOW);
      digitalWrite(motorPin2, HIGH);
      digitalWrite(motorPin3, LOW);
      digitalWrite(motorPin4, LOW);
      break;
    case 2:  // 0010
      digitalWrite(motorPin1, LOW);
      digitalWrite(motorPin2, LOW);
      digitalWrite(motorPin3, HIGH);
      digitalWrite(motorPin4, LOW);
      break;
    case 3:  // 0001
      digitalWrite(motorPin1, LOW);
      digitalWrite(motorPin2, LOW);
      digitalWrite(motorPin3, LOW);
      digitalWrite(motorPin4, HIGH);
      break;
  }
}
