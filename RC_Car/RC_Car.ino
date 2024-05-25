#include <Servo.h>  // Include the Servo library

// Motor control pins
int motor1A = 2;  // Motor 1 terminal A
int motor1B = 3;  // Motor 1 terminal B
int motor2A = 4;  // Motor 2 terminal A
int motor2B = 5;  // Motor 2 terminal B
Servo servo1;     // Declare servo1
char data = 0;

void setup() {
  // Initialize motor control pins as outputs
  pinMode(motor1A, OUTPUT);
  pinMode(motor1B, OUTPUT);
  pinMode(motor2A, OUTPUT);
  pinMode(motor2B, OUTPUT);
  servo1.attach(9);        // Attach the servo to pin 9
  Serial.begin(9600);
  servo1.write(130);

  // Start by stopping the motors
  stopMotors();
}

void loop() {
  if (Serial.available() > 0) { // checks if any data is received
    data = Serial.read();
    Serial.print(data);  // displaying the data
    Serial.print("\n");  // adding space by giving a New line
    if (data == 'F') { // when the value is equal to 'F'
      moveForward();
      Serial.println("Forward");
    } else if (data == 'B') { // when the value is equal to 'B'
      moveBackward();
      Serial.println("Backward");
    } else if (data == 'R') { // when the value is equal to 'R'
      turnLeft();
      Serial.println("Left");
    } else if (data == 'L') { // when the value is equal to 'L'
      turnRight();
      Serial.println("Right");
    } else if (data == 'I') { // when the value is equal to 'I'
      moveForward();
      turnLeft();
      Serial.println("G");
    } else if (data == 'G') { // when the value is equal to 'G'
      moveForward();
      Serial.println("I");
      turnRight();
    } else if (data == 'H') { // when the value is equal to 'H'
      moveBackward();
      turnRight();
      Serial.println("H");
    } else if (data == 'J') { // when the value is equal to 'J'
      moveBackward();
      Serial.println("J");
      turnRight();
    } else {
      stopMotors();
    }
  }
}

void moveForward() {
  digitalWrite(motor1A, HIGH);
  digitalWrite(motor1B, LOW);
  digitalWrite(motor2A, HIGH);
  digitalWrite(motor2B, LOW);
}

void moveBackward() {
  digitalWrite(motor1A, LOW);
  digitalWrite(motor1B, HIGH);
  digitalWrite(motor2A, LOW);
  digitalWrite(motor2B, HIGH);
}

void turnLeft() {
  digitalWrite(motor1A, LOW);
  digitalWrite(motor1B, HIGH);
  digitalWrite(motor2A, HIGH);
  digitalWrite(motor2B, LOW);
}

void turnRight() {
  digitalWrite(motor1A, HIGH);
  digitalWrite(motor1B, LOW);
  digitalWrite(motor2A, LOW);
  digitalWrite(motor2B, HIGH);
}

void stopMotors() {
  digitalWrite(motor1A, LOW);
  digitalWrite(motor1B, LOW);
  digitalWrite(motor2A, LOW);
  digitalWrite(motor2B, LOW);
}
