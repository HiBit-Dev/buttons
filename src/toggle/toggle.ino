// -------------------------------------------------
// Copyright (c) 2021 HiBit <https://www.hibit.dev>
// -------------------------------------------------

#define TOGGLE_PIN 4

struct toggle {
  byte on = 0;
};

toggle toggle;

void setup()
{
  pinMode(TOGGLE_PIN, INPUT_PULLUP);

  Serial.begin(115200);
}

void loop()
{
  toggle.on = isToggleOn(TOGGLE_PIN);

  if (toggle.on) {
    Serial.println("Toggle ON");
  } else {
    Serial.println("Toggle OFF");
  }
}

bool isToggleOn(int pin)
{
  return digitalRead(pin) == 0;
}
