byte pin[] = {2, 3, 4, 5, 6, 7, 8, 9};//arduino pin array
 
int number[10][8] = {//number array
  {1, 0, 0, 0, 1, 0, 0, 0},// S
  {0, 1, 0, 0, 0, 0, 0, 0},// A
  {1, 1, 0, 0, 0, 1, 1, 1},// I
  {0, 1, 0, 0, 0, 1, 0, 0},// K
  {0, 1, 0, 0, 0, 0, 0, 0},// A
  {0, 1, 0, 1, 0, 0, 0, 0},// R
  {1, 1, 0, 0, 0, 0, 1, 1},// T
  {0, 1, 0, 0, 0, 1, 0, 0},// H
  {1, 1, 0, 0, 0, 1, 1, 1},// I
  {0, 1, 0, 0, 0, 1, 0, 0},// K
};
 
void setup() {
  for (byte a = 0; a < 8; a++) {
    pinMode(pin[a], OUTPUT);//define output pins
  }
}
 
void loop() {
  for (int a = 0; a < 10; a++) {
    for (int b = 0; b < 8; b++) {
      digitalWrite(pin[b], number[a][b]);//display numbers
    }
    delay(1000);//delay
  }
}