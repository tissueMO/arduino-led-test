const int PIN_LED = 2;
const int PIN_BUTTON = 9;

void setup() {
    Serial.println("L-CHIKA!!");
    pinMode(PIN_LED, OUTPUT);
    pinMode(PIN_BUTTON, INPUT);
}

void loop() {
    if (digitalRead(PIN_BUTTON) == LOW) {
        Serial.println("L-CHIKA!!");
        digitalWrite(PIN_LED, LOW);
    } else {
        digitalWrite(PIN_LED, HIGH);
    }
}
