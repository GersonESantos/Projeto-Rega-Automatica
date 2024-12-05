// Define o pino onde o LED está conectado
const int ledPin = 2;  // Pino D2 corresponde ao GPIO 2 na ESP32

void setup() {
  // Configura o pino do LED como saída
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Liga o LED
  digitalWrite(ledPin, HIGH);
  // Aguarda 0,5 segundos
  delay(1500);
  
  // Desliga o LED
  digitalWrite(ledPin, LOW);
  // Aguarda mais 0,5 segundos
  delay(500);
}
