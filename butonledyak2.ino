int buton = 9;
int buton2 = 8;



int butonDurum2;
int butonDurum;
int led = 11;
int led2 = 10;
void setup()
{
  pinMode (buton, INPUT);
  pinMode (buton2, INPUT);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  Serial.begin(9600);


}

void loop() {
  butonDurum = digitalRead(buton);
  butonDurum2 = digitalRead(buton2);
  Serial.println(butonDurum);
  Serial.println(butonDurum2);


  if (butonDurum ) {
    digitalWrite (led, HIGH);

  } else {
    digitalWrite(led, LOW);
  }
  delay(10);


  if (butonDurum2) {
    digitalWrite (led, HIGH);

  } else {
    digitalWrite(led, LOW);
  }
  delay(10);
}
