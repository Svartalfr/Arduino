#define r 9
#define g 10
#define b 11
void setup() {
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);

}

void loop() {
  analogWrite(r, random (0, 255));
  analogWrite(g, random(0, 255));
  analogWrite(b, random(0, 255));
  delay(500);








}
