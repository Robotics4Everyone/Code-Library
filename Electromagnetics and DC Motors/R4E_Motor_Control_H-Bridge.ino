
int ENA=10;
int IN3=11;
int IN4=12;
void setup()
{
 pinMode(IN3,OUTPUT);
 pinMode(IN4,OUTPUT);  
}
void loop()
{  
 analogWrite(ENA, 200);// motor speed  
 digitalWrite(IN3,LOW);// rotate forward
 digitalWrite(IN4,HIGH);
 delay(2000);  
 digitalWrite(IN3,HIGH);// rotate reverse
 digitalWrite(IN4,LOW);
 delay(2000);
}
