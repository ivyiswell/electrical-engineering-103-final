void setup() {
    pinMode(A1, OUTPUT);
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    digitalWrite(A1, HIGH);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(5000);
    digitalWrite(A1, LOW);
    digitalWrite(LED_BUILTIN, LOW);
    delay(5000);
}
