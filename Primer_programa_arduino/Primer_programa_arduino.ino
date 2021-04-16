//int puerto = 13;

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  
  //pinMode(puerto, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  //digitalWrite(puerto, HIGH);
  
  Serial.print("Hola Mundo");
  delay(1000);
}
