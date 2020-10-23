int a=3;
int b=4;
int c=5;
int d=6;
int e=7;
int f=8;
int g=9;

void setup() {
 pinMode(a,OUTPUT);
 pinMode(b,OUTPUT);
 pinMode(c,OUTPUT);
 pinMode(d,OUTPUT);
 pinMode(e,OUTPUT);
 pinMode(f,OUTPUT);
 pinMode(g,OUTPUT);
 
}

void loop(){
 sifir();
 bir();
 iki();
 uc();
 dort();
} 
 void sifir(){
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  delay(1000);
   
}
void bir(){
 digitalWrite(a,HIGH);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,HIGH);
 digitalWrite(e,HIGH);
 digitalWrite(g,HIGH);
 digitalWrite(f,HIGH);
 delay(1000);
}
void iki(){
 digitalWrite(a,LOW);
 digitalWrite(b,LOW);
 digitalWrite(c,HIGH);
 digitalWrite(d,LOW);
 digitalWrite(e,LOW);
 digitalWrite(g,LOW);
 digitalWrite(f,HIGH);
 delay(1000);
}
void uc(){
digitalWrite(a,LOW);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,LOW);
 digitalWrite(e,HIGH);
 digitalWrite(g,LOW);
 digitalWrite(f,HIGH);
 delay(1000);
}
void dort(){
  digitalWrite(a,HIGH);
 digitalWrite(b,LOW);
 digitalWrite(c,LOW);
 digitalWrite(d,HIGH);
 digitalWrite(e,HIGH);
 digitalWrite(g,LOW);
 digitalWrite(f,LOW);
 delay(1000);
  
  
}
