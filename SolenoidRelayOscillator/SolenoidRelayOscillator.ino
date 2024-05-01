void setup() {
    pinMode(A7, OUTPUT);
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    digitalWrite(A7, HIGH);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(5000);
    digitalWrite(A7, LOW);
    digitalWrite(LED_BUILTIN, LOW);
    delay(5000);
}
