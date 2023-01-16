
int led = 13;
int threshold = 20; //Change this value if you want change the sensitivity of sensor
int sound;
int led_value;
int minSecsBetweenEmails = 60; // 1 min
long lastSend = -minSecsBetweenEmails * 1000l;

 
void setup() {                
    pinMode(led, OUTPUT); 
    digitalWrite(led,LOW);  
    led_value=0;
    Serial.begin(9600);

    }

void loop() {
  long now = millis();

    sound = analogRead(A0); // Reads the value from the Analog PIN A0
    Serial.print("value of Sound heard is = ");
    Serial.println(sound);
    if(sound>=threshold){
        led_value=!led_value;
        
    if (now > (lastSend + minSecsBetweenEmails * 100l))  {
      Serial.println("MOVEMENT  ");
      lastSend = now;
    }
    else
    {
      Serial.println("Too soon");
    }    
    }

    digitalWrite(led, led_value);
    delay(1000);
    //led_value=0;
    
    }
