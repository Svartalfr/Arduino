int trig= 11;
int echo= 12;

int uzaklik;
int sure;


void setup() {
  Serial.begin(9600);
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
  

}

void loop() {
  digitalWrite(trig,LOW);
  delay(1);
  digitalWrite (trig,HIGH);
  delay(5);
  digitalWrite(trig,LOW);

  sure = pulseIn(echo,HIGH);
  uzaklik=sure /29.1 /2;
  Serial.print("mesafe=");
  Serial.print(uzaklik);
  Serial.println("cm");
  delay(200);
}
