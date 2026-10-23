const int LM35_PIN = A0;
const int MOTOR_PIN = 9;

void setup() {
  pinMode(MOTOR_PIN, OUTPUT);

  Serial.begin(9600);

  Serial.println("LM35 Temperature Monitoring");
  Serial.println("---------------------------");
}

void loop() {

  int sensorValue = analogRead(LM35_PIN);

  float voltage = sensorValue * (5.0 / 1023.0);

  float temperature = voltage * 100.0;

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");

  // Motor ON when temperature reaches 30°C
  if (temperature >= 30.0) {
    digitalWrite(MOTOR_PIN, HIGH);
    Serial.println("Motor: ON");
  } 
  else {
    digitalWrite(MOTOR_PIN, LOW);
    Serial.println("Motor: OFF");
  }

  delay(1000);
}