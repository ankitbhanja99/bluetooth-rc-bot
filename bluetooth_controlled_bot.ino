#define lm1 10 
#define lm2 11 
#define rm1 9 
#define rm2 5
char x=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(lm1,OUTPUT);
  pinMode(lm2,OUTPUT);
  pinMode(rm1,OUTPUT);
  pinMode(rm2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0)
  {
    x=Serial.read();
    Serial.print(x);
    Serial.print("\n");
  }
    if(x=='w' || x=='W') //forward
    {
      digitalWrite(rm1,HIGH);
      digitalWrite(rm2,LOW);
      digitalWrite(lm1,HIGH);
      digitalWrite(lm2,LOW);
    }
    if(x=='S' || x=='s') //backward
    {
      digitalWrite(rm2,HIGH);
      digitalWrite(rm1,LOW);
      digitalWrite(lm2,HIGH);
      digitalWrite(lm1,LOW);
    }
    if(x=='A' || x=='a') //left
    {
      digitalWrite(lm1,LOW);
      digitalWrite(lm2,HIGH);
      digitalWrite(rm1,HIGH);
      digitalWrite(rm2,LOW);
    }
    if(x=='D' || x=='d') //right
    {
      digitalWrite(lm1,HIGH);
      digitalWrite(lm2,LOW);
      digitalWrite(rm1,LOW);
      digitalWrite(rm2,HIGH);
    }
    if(x==' ') //stop
    {
      digitalWrite(lm1,LOW);
      digitalWrite(lm2,LOW);
      digitalWrite(rm1,LOW);
      digitalWrite(rm2,LOW);
    }
}
