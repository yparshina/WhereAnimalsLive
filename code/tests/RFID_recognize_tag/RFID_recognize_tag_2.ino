char val;
char myTag = '4500F7229';

void setup() {
  Serial.begin(9600); 
  pinMode(3, OUTPUT);
}

void loop() {

  if(Serial.available() > 0) {
    val = Serial.read();
    Serial.write(val);
  } 

  if (val == myTag) {
    Serial.write("it's a match!");
    digitalWrite(3, HIGH);
    delay(250);
    digitalWrite(3, LOW);
  }

}

