
const int gasPin = A0;
const int pirPin = 2;
const int trigPin = 9;
const int echoPin = 10;
const int ledPin = 7;
const int buzzerPin = 8;

const int gasThreshold = 400;
const int distanceThreshold = 50;

void setup() {
  Serial.begin(9600);

  pinMode(pirPin, INPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  digitalWrite(trigPin, LOW);

  Serial.println("Gas and Motion Safety System Started");
  delay(1000);
}

void loop() {
  int gasValue = analogRead(gasPin);
  int motion = digitalRead(pirPin);

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  unsigned long duration = pulseIn(echoPin, HIGH, 30000UL);

  int distance = -1;

  if (duration > 0) {
    distance = duration * 0.0343 / 2;
  }

  bool gasDetected = gasValue >= gasThreshold;
  bool motionDetected = motion == HIGH;
  bool nearbyObject = distance >= 0 &&
                      distance <= distanceThreshold;

  bool alarm = gasDetected || motionDetected;

  digitalWrite(ledPin, alarm ? HIGH : LOW);
  digitalWrite(buzzerPin, alarm ? HIGH : LOW);

  Serial.print("Gas Value: ");
  Serial.print(gasValue);

  Serial.print(" | Motion: ");
  Serial.print(motion);

  Serial.print(" | Distance: ");

  if (distance < 0) {
    Serial.print("N");
  } else {
    Serial.print(distance);
    Serial.print(" cm");
  }

  Serial.println();

  if (gasDetected) {
    Serial.println("STATUS: GAS LEAKAGE ALERT");
  } else if (motionDetected) {
    Serial.println("STATUS: MOTION DETECTED");
  } else if (nearbyObject) {
    Serial.println("STATUS: OBJECT NEARBY");
  } else {
    Serial.println("STATUS: SAFE");
  }

  Serial.println("--------------------------");
  delay(1000);
}
