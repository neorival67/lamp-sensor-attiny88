const int ldrPin = 3;      // Hubungkan LDR ke pin digital 3
const int relayPin = 2;    // Hubungkan relay ke pin digital 2

const int LIGHT_THRESHOLD = 25; // Nilai ambang ketika dianggap terang

void setup() {
  Serial.begin(115200);
  pinMode(relayPin, OUTPUT);
}

void loop() {
  int ldrValue = digitalRead(ldrPin);

  if (ldrValue == LOW) {
    // Cahaya terang, aktifkan relay (hidupkan lampu)
    digitalWrite(relayPin, HIGH);
  } else {
    // Cahaya gelap, matikan relay (matikan lampu)
    digitalWrite(relayPin, LOW);
  }

  delay(9000); // Delay 9000 milidetik (9 detik)
}
