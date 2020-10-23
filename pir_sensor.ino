int pir = 3;
int hareket;

int led = 9;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(pir , INPUT);



}

void loop() {
  hareket = digitalRead(pir);
  Serial.println(hareket);
  if (hareket == HIGH) {
    for (int i = 0; i < 3; i++) {
      digitalWrite(led, 1);
      delay(200);
      digitalWrite(led, 0);
      delay(200);
    }
  }
  else {
   
    digitalWrite (led, 0);
  }
  delay(200);
}
