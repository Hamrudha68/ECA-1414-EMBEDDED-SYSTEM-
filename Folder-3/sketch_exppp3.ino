int green1 = 7;
int yellow1 = 6;
int red1 = 5;

int green2 = 4;
int yellow2 = 3;
int red2 = 2;

void setup() {
  pinMode(green1, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(red1, OUTPUT);

  pinMode(green2, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(red2, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // Green LEDs ON
  digitalWrite(green1, HIGH);
  digitalWrite(green2, HIGH);
  digitalWrite(yellow1, LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(red1, LOW);
  digitalWrite(red2, LOW);
  Serial.println("GREEN LED ON");
  delay(3000);

  // Yellow LEDs ON
  digitalWrite(green1, LOW);
  digitalWrite(green2, LOW);
  digitalWrite(yellow1, HIGH);
  digitalWrite(yellow2, HIGH);
  digitalWrite(red1, LOW);
  digitalWrite(red2, LOW);
  Serial.println("YELLOW LED ON");
  delay(2000);

  // Red LEDs ON
  digitalWrite(green1, LOW);
  digitalWrite(green2, LOW);
  digitalWrite(yellow1, LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(red1, HIGH);
  digitalWrite(red2, HIGH);
  Serial.println("RED LED ON");
  delay(3000);
}