void setup() 
{
  Serial.begin(9600);
  Serial1.begin(9600);
  pinMode(8, OUTPUT);
}

void loop() 
{
  if (Serial.available()) {
    while (Serial.available()) {
      char get_data = Serial.read();
      digitalWrite(8, HIGH);
      Serial1.print(get_data);
      delay(50);
      digitalWrite(8, LOW);
    }
    delay(100);
  }
}