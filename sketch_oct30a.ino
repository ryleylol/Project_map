#define BUTTON_PIN 4     // GPIO connected to button
#define LED_PIN 2        // GPIO connected to LED
#define BUTTON_PIN_1 22  // Second button
#define LED_PIN_1 0      // Second LED
#define LED_PIN_2 25
#define BUTTON_PIN_2 27

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
  
  pinMode(BUTTON_PIN_1, INPUT_PULLUP);
  pinMode(LED_PIN_1, OUTPUT);

  pinMode(BUTTON_PIN_2, INPUT_PULLUP);
  pinMode(LED_PIN_2, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(BUTTON_PIN);
  int buttonState_1 = digitalRead(BUTTON_PIN_1);
  int buttonState_2 = digitalRead(BUTTON_PIN_2);

  // Control first LED
  if (buttonState == LOW) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }

  // Control second LED
  if (buttonState_1 == LOW) {
    digitalWrite(LED_PIN_1, HIGH);
  } else {
    digitalWrite(LED_PIN_1, LOW);
  }
  // Control third LED
  if(buttonState_2 == LOW) {
    digitalWrite(LED_PIN_2, HIGH);
  } else {
    digitalWrite(LED_PIN_2, LOW);
  }
}
