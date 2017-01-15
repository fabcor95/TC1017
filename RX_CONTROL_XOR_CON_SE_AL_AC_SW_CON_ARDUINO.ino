void setup() {
  // put your setup code here, to run once:

pinMode(2,INPUT);
pinMode(3,INPUT);
pinMode(4,OUTPUT);
digitalWrite(4,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  
if(digitalRead(2)==LOW && digitalRead(3)==LOW)
{digitalWrite(4,LOW);}

if(digitalRead(2)==LOW && digitalRead(3)==HIGH)
{digitalWrite(4,HIGH);}

if(digitalRead(2)==HIGH && digitalRead(3)==LOW)
{digitalWrite(4,HIGH);}

if(digitalRead(2)==HIGH && digitalRead(3)==HIGH)
{digitalWrite(4,LOW);}

}
