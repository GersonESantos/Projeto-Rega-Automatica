
const int rele = 5;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(rele, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(rele, HIGH);
delay(1000);
digitalWrite(rele, LOW);
delay(1000);

}
