// Define motor control pins (adjust to your wiring)
#define motor1_in1 26  // IN1 for motor 1
#define motor1_in2 27  // IN2 for motor 1
#define motor2_in1 14  // IN1 for motor 2
#define motor2_in2 12  // IN2 for motor 2
#define motor3_in1 25  // IN1 for motor 3
#define motor3_in2 33  // IN2 for motor 3
#define motor4_in1 32  // IN1 for motor 4
#define motor4_in2 35  // IN2 for motor 4
#define motor1_en 13   // EN for motor 1 (ENA on LN298N)
#define motor2_en 15   // EN for motor 2 (ENB on LN298N)
#define motor3_en 4    // EN for motor 3 (ENA on LN298N - you might need to use another enable pin if using only one LN298N)
#define motor4_en 16   // EN for motor 4 (ENB on LN298N - you might need to use another enable pin if using only one LN298N)

// Define sensor pins (adjust to your wiring)
#define sensorLeft A0   // Left TCRT5000 sensor analog pin
#define sensorRight A1  // Right TCRT5000 sensor analog pin

// Define motor speeds (adjust as needed)
#define baseSpeed 150   // Base speed for motors (0-255)
#define turnSpeed 200   // Speed for turning

void setup() {
  // Initialize serial communication
  Serial.begin(115200);

  // Set motor control pins as output
  pinMode(motor1_in1, OUTPUT);
  pinMode(motor1_in2, OUTPUT);
  pinMode(motor2_in1, OUTPUT);
  pinMode(motor2_in2, OUTPUT);
  pinMode(motor3_in1, OUTPUT);
  pinMode(motor3_in2, OUTPUT);
  pinMode(motor4_in1, OUTPUT);
  pinMode(motor4_in2, OUTPUT);
  pinMode(motor1_en, OUTPUT);
  pinMode(motor2_en, OUTPUT);
  pinMode(motor3_en, OUTPUT);
  pinMode(motor4_en, OUTPUT);

  // Set sensor pins as input
  pinMode(sensorLeft, INPUT);
  pinMode(sensorRight, INPUT);

  // Stop motors initially
  stopMotors();

  Serial.println("Line Tracer Setup Complete");
}

void loop() {
  // Read sensor values
  int leftSensorValue = analogRead(sensorLeft);
  int rightSensorValue = analogRead(sensorRight);

  // Print sensor values for debugging
  Serial.print("Left Sensor: ");
  Serial.print(leftSensorValue);
  Serial.print("  Right Sensor: ");
  Serial.println(rightSensorValue);

  // Line following logic (adjust threshold as needed based on sensor readings and line color)
  int threshold = 500; // Example threshold, you'll need to calibrate this

  if (leftSensorValue > threshold && rightSensorValue > threshold) {
    // Both sensors on the line, move forward
    moveForward();
  } else if (leftSensorValue > threshold && rightSensorValue <= threshold) {
    // Left sensor on line, right sensor off line, turn right
    turnRight();
  } else if (leftSensorValue <= threshold && rightSensorValue > threshold) {
    // Right sensor on line, left sensor off line, turn left
    turnLeft();
  } else {
    // Both sensors off line (or line lost), stop or adjust as needed
    stopMotors();
    // You might want to add logic to search for the line if lost
  }

  delay(10); // Small delay for stability
}

// Function to move forward
void moveForward() {
  setMotorSpeed(1, baseSpeed, baseSpeed);
  setMotorSpeed(2, baseSpeed, baseSpeed);
  setMotorSpeed(3, baseSpeed, baseSpeed);
  setMotorSpeed(4, baseSpeed, baseSpeed);
}

// Function to turn left
void turnLeft() {
  setMotorSpeed(1, turnSpeed, 0);    // Motor 1 forward
  setMotorSpeed(2, turnSpeed, 0);    // Motor 2 forward
  setMotorSpeed(3, 0, turnSpeed);    // Motor 3 backward
  setMotorSpeed(4, 0, turnSpeed);    // Motor 4 backward
}

// Function to turn right
void turnRight() {
  setMotorSpeed(1, 0, turnSpeed);    // Motor 1 backward
  setMotorSpeed(2, 0, turnSpeed);    // Motor 2 backward
  setMotorSpeed(3, turnSpeed, 0);    // Motor 3 forward
  setMotorSpeed(4, turnSpeed, 0);    // Motor 4 forward
}

// Function to stop motors
void stopMotors() {
  setMotorSpeed(1, 0, 0);
  setMotorSpeed(2, 0, 0);
  setMotorSpeed(3, 0, 0);
  setMotorSpeed(4, 0, 0);
}

// Function to set speed and direction for a motor
// motorNumber: 1, 2, 3, or 4
// speedForward: 0-255 speed for forward direction
// speedBackward: 0-255 speed for backward direction
void setMotorSpeed(int motorNumber, int speedForward, int speedBackward) {
  int in1Pin, in2Pin, enPin;

  switch (motorNumber) {
    case 1:
      in1Pin = motor1_in1;
      in2Pin = motor1_in2;
      enPin = motor1_en;
      break;
    case 2:
      in1Pin = motor2_in1;
      in2Pin = motor2_in2;
      enPin = motor2_en;
      break;
    case 3:
      in1Pin = motor3_in1;
      in2Pin = motor3_in2;
      enPin = motor3_en;
      break;
    case 4:
      in1Pin = motor4_in1;
      in2Pin = motor4_in2;
      enPin = motor4_en;
      break;
    default:
      return; // Invalid motor number
  }

  if (speedForward > 0) {
    digitalWrite(in1Pin, HIGH);
    digitalWrite(in2Pin, LOW);
    analogWrite(enPin, speedForward); // Use analogWrite for PWM speed control
  } else if (speedBackward > 0) {
    digitalWrite(in1Pin, LOW);
    digitalWrite(in2Pin, HIGH);
    analogWrite(enPin, speedBackward);
  } else {
    digitalWrite(in1Pin, LOW);
    digitalWrite(in2Pin, LOW);
    analogWrite(enPin, 0); // Stop motor
  }
}
