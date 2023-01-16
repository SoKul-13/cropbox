
int Led = 13 ;// define LED Interface 
int buttonpin = 3 ;// define D0 Sensor Interface 
int val = 0 ;   // define numeric variables val 



void setup (){ 
    pinMode (Led, OUTPUT) ;// define LED as output interface 
    pinMode (buttonpin, INPUT) ;// output interface D0 is defined sensor 
    Serial.begin(57600);
    //
} 




void loop () { 
  val=0; 
  val = digitalRead (buttonpin) ;// digital interface will be assigned a value of 3 to read val


  if (val == LOW){ // When the sound detection module detects a signal, LED flashes
      digitalWrite (Led, HIGH);
        //Serial.print(val) ;
        Serial.print(1);
        delay(1000);                       // wait for a second
        digitalWrite (Led, LOW);
                delay(1000);                       // wait for a second

      } 
  else {
      digitalWrite (Led, LOW) ;
     // Serial.print(2);
      }

}
