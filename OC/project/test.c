
void loop() {
    int reading = digitalRead(BUTTON_PIN);
    if (reading != lastButtonState) {
        lastDebounceTime = millis();
    }
    if ((millis() - lastDebounceTime) > debounceDelay) {
        if (reading != buttonState) {
            buttonState = reading;
            if (buttonState == HIGH) {
                long pressDuration = millis() - lastPressTime;
                if (pressDuration < 2000) {
                    displayTemperature();
                } else {
                    displayHumidity();
                }
            }
        }
    }
    lastButtonState = reading;
    if (buttonState == LOW) {
        lastPressTime = millis();
    }
}
