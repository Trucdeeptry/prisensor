#define PIR_PIN 2
#define LED_PIN 8

void setup() {
  Serial.begin(9600);
  pinMode(PIR_PIN, INPUT);   // PIR Wokwi dùng INPUT
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int motion = digitalRead(PIR_PIN);
  Serial.println(motion);

  if (motion == HIGH) {
    digitalWrite(LED_PIN, HIGH); // có chuyển động → bật đèn
  } else {
    digitalWrite(LED_PIN, LOW);  // không có → tắt
  }
}
