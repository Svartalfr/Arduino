#define voice A0
int val;


#define role 8 


void setup() {
  Serial.begin(9600);
  pinMode(voice,INPUT);
  pinMode(role,OUTPUT);
  digitalWrite(role,0);
  

}

void loop() {
  val= analogRead(voice);
  Serial.println(val);
  if (val >=70){
    digitalWrite(role,1);
    delay(2000);
    
  }


else{digitalWrite (role,0);}
  
}
