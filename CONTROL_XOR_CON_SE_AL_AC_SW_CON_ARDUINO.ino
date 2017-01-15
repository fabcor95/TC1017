
void setup() {
  // put your setup code here, to run once:
  //DECLARACIÓN Y CONFIGURACIONES DE PUERTOS DE ENTRADAS Y SALIDAS O VARIABLES O COMUNICACIÓN SERIAL 
pinMode(2,INPUT);
pinMode(3,OUTPUT);
Serial.begin(9600);
digitalWrite(3,LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
  
char dato=Serial.read();

if(digitalRead(2)==LOW && dato=='a')
{digitalWrite(3,LOW);}

if(digitalRead(2)==LOW && dato=='b')
{digitalWrite(3,HIGH);}

if(digitalRead(2)==HIGH && dato=='a')
{digitalWrite(3,HIGH);}

if(digitalRead(2)==HIGH && dato=='b')
{digitalWrite(3,LOW);}







}
