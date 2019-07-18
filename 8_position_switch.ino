#define I1 13
#define I2 3
#define I3 4
#define I4 5
#define I5 6
#define I6 7
#define I7 8
#define I8 9
 
int I1Reading;
int I2Reading;
int I3Reading;
int I4Reading;
int I5Reading;
int I6Reading;
int I7Reading;
int I8Reading;

#define O1 10
#define O2 11
#define O3 12
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(I1, INPUT);
pinMode(I2, INPUT);
pinMode(I3, INPUT);
pinMode(I4, INPUT);
pinMode(I5, INPUT);
pinMode(I6, INPUT);
pinMode(I7, INPUT);
pinMode(I8, INPUT);

pinMode(O1, OUTPUT);
pinMode(O2, OUTPUT);
pinMode(O3, OUTPUT);
}

void readinputs()
{
  I1Reading=digitalRead(I1);
  I2Reading=digitalRead(I2);
  I3Reading=digitalRead(I3);
  I4Reading=digitalRead(I4);
  I5Reading=digitalRead(I5);
  I6Reading=digitalRead(I6);
  I7Reading=digitalRead(I7);
  I8Reading=digitalRead(I8);
}


void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(O1,LOW);
  digitalWrite(O2,LOW);
  digitalWrite(O3,LOW);
  
  readinputs();
  if(I1Reading==HIGH)
  {
    digitalWrite(O1,HIGH);
    digitalWrite(O2,HIGH);
    digitalWrite(O3,HIGH);
  }
  else if(I2Reading==HIGH)
  {
    digitalWrite(O1,LOW);
    digitalWrite(O2,HIGH);
    digitalWrite(O3,HIGH);
  }
  else if(I3Reading==HIGH)
  {
    digitalWrite(O1,LOW);
    digitalWrite(O2,HIGH);
    digitalWrite(O3,LOW);
  }
   else if(I4Reading==HIGH)
  {
    digitalWrite(O1,HIGH);
    digitalWrite(O2,HIGH);
    digitalWrite(O3,LOW);
  }
   else if(I5Reading==HIGH)
  {
    digitalWrite(O1,HIGH);
    digitalWrite(O2,LOW);
    digitalWrite(O3,LOW);
  }
    else if(I7Reading==HIGH)
  {
    digitalWrite(O1,LOW);
    digitalWrite(O2,LOW);
    digitalWrite(O3,HIGH);
  }
    else if(I8Reading==HIGH)
  {
    digitalWrite(O1,HIGH);
    digitalWrite(O2,LOW);
    digitalWrite(O3,HIGH);
  }
   else
  {
    digitalWrite(O1,LOW);
    digitalWrite(O2,LOW);
    digitalWrite(O3,LOW);
  }
  Serial.println("000");
}
