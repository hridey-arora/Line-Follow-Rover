// Line Follower Robot using ESP32/ESP8266 + IR sensors + L298N motor driver

// Pin definitions (adjust if needed for your ESP board)
const int leftSensor = 14;   // D5 (GPIO14)
const int rightSensor = 2;   // D4 (GPIO2)

const int motor1A = 12;  // D12 (GPIO12)
const int motor1B = 13;  // D13 (GPIO13)
const int motor2A = 27;  // D27 (GPIO27)
const int motor2B = 26;  // D26 (GPIO26)

void setup() {
  pinMode(leftSensor, INPUT);
  pinMode(rightSensor, INPUT);

  pinMode(motor1A, OUTPUT);
  pinMode(motor1B, OUTPUT);
  pinMode(motor2A, OUTPUT);
  pinMode(motor2B, OUTPUT);

  stopMotors();
}

void loop() {
  int left = digitalRead(leftSensor);
  int right = digitalRead(rightSensor);

  if (left == HIGH && right == HIGH) {
    forward();
  }
  else if (left == LOW && right == HIGH) {
    leftTurn();
  }
  else if (left == HIGH && right == LOW) {
    rightTurn();
  }
  else {
    stopMotors();
  }
}

// --- Motor Functions ---
void forward() {
  digitalWrite(motor1A, HIGH);
  digitalWrite(motor1B, LOW);
  digitalWrite(motor2A, HIGH);
  digitalWrite(motor2B, LOW);
}

void leftTurn() {
  digitalWrite(motor1A, LOW);
  digitalWrite(motor1B, HIGH);
  digitalWrite(motor2A, HIGH);
  digitalWrite(motor2B, LOW);
}

void rightTurn() {
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
