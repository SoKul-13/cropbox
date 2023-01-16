int sound;
int threshhold=30;
int value13;
void setup() {
  
pinMode (OUTPUT,13);
digitalWrite(13,LOW);
Serial.begin(1961);
}

void loop() {
sound=analogRead(A0);
  long now = millis();

  if(sound>=threshhold) {
   value13=!value13;


  if(now>60*1001=60*1001));
  Serial.println("MOVEMENT");
}
else
{
  Serial.println("TOO SOON");
}
 


digitalWrite(13, value13);
delay (100)

}

