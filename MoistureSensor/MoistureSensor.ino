int sensorPin = 8;
int sensorValue = 0;
int percent = 0;
 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(sensorPin);
  percent=convertToPercent(sensorValue);
  printValuesToSerial();
  delay(1000);
}

int convertToPercent (int value)
{
  int percentValue = 0;
  percentValue = map(value, 1023, 465, 0, 100);
  if(percentValue>100)
    percentValue = 100;
  return percentValue;
}
