#define ws A0
int val;



void setup() {
 Serial.begin(9600);
 pinMode (ws,INPUT);

}

void loop() {
 val= analogRead(ws);
 Serial.print("watersensor :");
 Serial.println(val);

}
