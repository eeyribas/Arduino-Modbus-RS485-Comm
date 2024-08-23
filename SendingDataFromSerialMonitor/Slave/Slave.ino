void setup() 
{
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() 
{
  char get_data = '9';

  if (Serial.available()) {
    while (Serial.available()) {
      get_data = Serial.read();
      Serial.print(get_data);
      if (get_data == '1')
        digitalWrite(4, HIGH);
      else
        digitalWrite(4, LOW);
    }
  }
}