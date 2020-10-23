#include <NewPing.h>
#define TRIGGER_PIN 11
#define ECHO_PIN 12
#define MAX_DISTANCE 200
NewPing sonar (TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
int x;
void setup() {
 Serial.begin(9600);

}

void loop() {
 x= sonar.ping_cm();
 Serial.print("mesafe=");
 Serial.print(x);
 Serial.println("cm");
 delay(200);

}
