int ledA = 8;
int ledB = 13;
int espere = 1000;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledB, LOW);
  digitalWrite(ledA, HIGH);
  delay(espere);
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, HIGH);
  delay(espere * 2);
}
