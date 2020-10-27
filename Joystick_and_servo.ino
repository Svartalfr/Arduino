#define x A0
#define y A1

int deger1;
int deger2;


#include <Servo.h>

Servo serv;

void setup() {
  serv.attach(9);
  Serial.begin(9600);
  pinMode(x,INPUT);
  pinMode(y,INPUT);
  serv.write(0);
  
  
}

void loop() {
 

  deger1= analogRead (x);
  deger2= analogRead (y);


deger1= map(deger1,0,1023,0,180);
serv.write(deger1);

   
  Serial.print("X durumu: ");
  Serial.print(deger1);


  Serial.print("\t Y durumu:");
  Serial.println(deger2);
  delay(200);
  /* 
  if(deger1 > 0  && deger1 <100){
  serv.write(45);
  

}

else if (deger1> 199 && deger1 <200){
  serv.write(120);

}*/

}
