#include <SevSeg.h>
SevSeg s;
byte digitalsayisi=4;
byte digitalpinleri[]={12,9,8,6};
byte segmentpinleri[]={11,7,4,2,1,10,5,3};


void setup() {
 s.begin(COMMON_CATHODE,digitalsayisi,digitalpinleri,segmentpinleri);
}

void loop() {
 s.setChars("AAAA");
 s.refreshDisplay();
 delay(1);
}
