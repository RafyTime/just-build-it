// Motor control pins
const int motor1Pin1 = 9;  // Connects to L293D Pin 2
const int motor1Pin2 = 10; // Connects to L293D Pin 7

void setup() {
  // Set motor pins as outputs
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
}

void loop() {
  // Spin the motor in one direction
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  delay(2000); // Wait for 2 seconds

  // Stop the motor
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, LOW);
  delay(1000); // Wait for 1 second

  // Spin the motor in the opposite direction
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH);
  delay(2000); // Wait for 2 seconds

  // Stop the motor
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, LOW);
  delay(1000); // Wait for 1 second
}
