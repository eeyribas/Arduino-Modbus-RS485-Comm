void setup() 
{
  Serial.begin(9600);
  Serial1.begin(9600);
  pinMode(8, OUTPUT);
}

void loop() 
{
  char get_data_1 = '1';
  digitalWrite(8, HIGH);
  Serial1.print(get_data_1);
  delay(50);
  digitalWrite(8, LOW);
  delay(5000);

  char get_data_2 = '2';
  digitalWrite(8, HIGH);
  Serial1.print(get_data_2);
  delay(50);
  digitalWrite(8, LOW);
  delay(5000);
}