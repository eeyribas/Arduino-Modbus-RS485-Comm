void setup() 
{
  Serial.begin(9600);
  pinMode(8, OUTPUT);

  pinMode(4, OUTPUT);
  pinMode(A0, INPUT);
}

void loop() 
{
  char value_1 = 'a';
  char value_2 = 'b';
  int analog_input = analogRead(A0);

  if (analog_input > 512) {
    digitalWrite(4, HIGH);
    digitalWrite(8, HIGH);
    Serial.print(value_1);
    delay(50);
    digitalWrite(8, LOW);
  } else {
    digitalWrite(4, LOW);
    digitalWrite(8, HIGH);
    Serial.print(value_2);
    delay(50);
    digitalWrite(8, LOW);
  }

  delay(1000);
}