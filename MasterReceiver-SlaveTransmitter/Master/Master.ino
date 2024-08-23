void setup() 
{
  Serial.begin(9600);
  Serial1.begin(9600);

  pinMode(8, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() 
{
  char get_data = 9;
  if (Serial1.available()) {
    while (Serial1.available()) {
      get_data = Serial1.read();
      Serial.println(get_data);
      if (get_data == 'a') {
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
      } else if (get_data = 'b') {
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
      } else if (get_data = 'c') {
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
        digitalWrite(6, LOW);
      } else if (get_data = 'd') {
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, HIGH);
      } else {
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
      }
    }
  }
}