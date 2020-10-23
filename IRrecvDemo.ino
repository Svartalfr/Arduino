





#include <IRremote.h>


int IR_RECEIVE_PIN = 12;

decode_results results;

IRrecv irrecv (IR_RECEIVE_PIN);

void setup() {
    pinMode(9, OUTPUT);

    Serial.begin(9600);

    
    irrecv.enableIRIn(); // Start the receiver

    Serial.print(F("Ready to receive IR signals at pin "));
   
}

void loop() {
    if (irrecv.decode(&results)) {
      if(results.value == 0x488F3CBB ){
        digitalWrite(9,1);
        
      }
      else if(results.value ==0x1BC0157B ){
        digitalWrite (9,0);
        
        
      }
        Serial.println(results.value, HEX);
        irrecv.resume(); // Receive the next value
    }
    delay(100);
}
