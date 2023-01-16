int pump = 11;
int sensor = 8;
int val;

void setup(){
  pinMode(pump, OUTPUT);
  pinMode(relay, OUTPUT);
  pinMode(sensor, INPUT);
}
void loop() {
  val=digitalRead(sensor);
  if (val == LOW {
    digitalWrite(pump,LOW);
    digitalWrite(relay,LOW);
  }
  else {
    digitalWrite(pump,HIGH);
    digitalWrite(relay,HIGH);
  }
}
