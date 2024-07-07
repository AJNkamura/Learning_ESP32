void setup() {
  pinMode(2, OUTPUT);
  Serial.begin(115200);
  Serial.println("Hello World");

}


void loop() {
  digitalWrite(2, HIGH);
  delay (400);
  digitalWrite(2, LOW);
  delay (400);

}
