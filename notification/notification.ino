
int ledPin = 0;

void setup() {

  Serial.begin(9600);
  
}

void loop() {

  int val = analogRead(ledPin);
  Serial.println(val);
  
}

