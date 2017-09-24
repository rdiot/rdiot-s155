/* 5V Relay Low Level Trigger [S155] : http://rdiot.tistory.com/102 [RDIoT Demo] */

int Relay = 2;

void setup()
{
  pinMode(Relay,OUTPUT);
}

void loop()
{
  for(int i=0;i<=1;i++) 
  {
    digitalWrite(Relay,i);
    delay(2000);
  }
}
