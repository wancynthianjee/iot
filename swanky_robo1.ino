int potPin = A5;
int value1;
int value2;
int led1Pin = 2;
int led2Pin = 3;
int led3Pin = 4;
int led4Pin = 5;

void setup(){
  myservo1.attach(9);
  myservo2.attach(10);
  pinMode(potPin,INPUT);
   pinMode(led1Pin,OUTPUT);
   pinMode(led2Pin,OUTPUT);
   pinMode(led3Pin,OUTPUT);
   pinMode(led3Pin,OUTPUT);
  Serial.begin(9600);
  
}

void loop(){
 vaue1 =analogRead(A5);
  valiue1 =map(value1,0,1023,0180);
  myservo1.write(value1);
  Serial.println(potMeasure);
  if(potMeasure =254);
  
  
}Servo myservo1;
Servo myservo2;
int value1;
int value2;
int  led1=6;
int led2=5;
void setup()
{
  myservo1.attach(9);
  myservo2.attach(10);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}
void loop()
{
  value1 = analogRead(A0);
  value1 =map(value1,0,1023,0,180);
  myservo1.write(value1);
  value2 = analogRead(A1);
  value2 = map(value2,0,1023,0,180);
  myservo2.write(value2);
  digitalWrite(led1,HIGH);
  delay(value1);
  digitalWrite(led1,LOW);
  delay(value2);
  digitalWrite(led2,HIGH);
    delay(value2);
  digitalWrite(led2,LOW);
  delay(value1)
};
  
  