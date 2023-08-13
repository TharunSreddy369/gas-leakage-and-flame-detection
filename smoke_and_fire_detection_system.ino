int firepin = 6;
int buzzer = 7;
int smokepin=8;
int relaypin =9;

void setup() {
pinMode(firepin,INPUT);
pinMode(buzzer,OUTPUT);
pinMode(smokepin,INPUT);
pinMode(relaypin,OUTPUT);
Serial.begin(9600);  

}

void loop() {
  
int fireval = digitalRead(firepin);
Serial.println(fireval);
int smokeval = digitalRead(smokepin);
Serial.println(smokeval);

if(fireval==1)
{
  digitalWrite(buzzer,LOW);
  delay(1000);
}

else
{
  digitalWrite(buzzer,HIGH);
  delay(1000);
}

if (smokeval==0)
{
  digitalWrite(relaypin,HIGH);
  delay(1000);
}
else
{
  digitalWrite(relaypin,LOW);
  delay(1000);
}
}
