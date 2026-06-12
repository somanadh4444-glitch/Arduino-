byte pin[] = {2, 3, 4, 5, 6, 7, 8, 9}; // a, b, c, d, e, f, g, dp

int number[10][8] = {
  {0, 0, 0, 0, 0, 0, 0, 1}, // 0
  {1, 1, 0, 0, 0, 1, 1, 1}, // 1
  {0, 0, 1, 0, 0, 0, 1, 0}, // 2
  {1, 0, 0, 0, 0, 0, 1, 0}, // 3
  {1, 1, 0, 0, 0, 1, 0, 0}, // 4
  {1, 0, 0, 0, 1, 0, 0, 0}, // 5
  {0, 0, 0, 0, 1, 0, 0, 0}, // 6
  {1, 1, 0, 0, 0, 0, 1, 1}, // 1
  {0, 0, 0, 0, 0, 0, 0, 0}, // 8
  {1, 0, 0, 0, 0, 0, 0, 0}, // 8
};

void setup() {
  for (byte a = 0; a < 8; a++) {
    pinMode(pin[a], OUTPUT); // define output pins
  }
}

void loop() {
  for (int a = 0; a < 10; a++) {
    for (int b = 0; b < 8; b++) {
      digitalWrite(pin[b], number[a][b]); // display numbers
    }
    delay(1000); // delay
  }
}