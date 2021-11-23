// -------------------------------------------------
// Copyright (c) 2021 HiBit <https://www.hibit.dev>
// -------------------------------------------------

#define BUTTON_PIN 4

struct button {
  byte pressed = 0;
};

button button;

void setup()
{
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  Serial.begin(115200);
}

void loop()
{
  button.pressed = isButtonPressed(BUTTON_PIN);

  if (button.pressed) {
    Serial.println("Button pressed");
  } else {
    Serial.println("Button not pressed");
  }
}

bool isButtonPressed(int pin)
{
  return digitalRead(pin) == 0;
}
