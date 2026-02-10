
// Pin definitions
const int inputVoltage = A1;
int readVoltage;
int delaySeconds = 250;
float outputVoltage;

void setup() {
  Serial.begin(9600);
}

void loop() {
  readVoltage = analogRead(inputVoltage);

  outputVoltage = (5.0 / 1023.0 ) * readVoltage;
  Serial.println(outputVoltage);

  delay(delaySeconds);
}

