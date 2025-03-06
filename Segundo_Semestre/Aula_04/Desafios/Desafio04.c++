/*
Questão 04 
Os LEDs acendem em sequência, em intervalos de 1 segundo, da direita para a esquerda 
(LEDs anteriores permanecem acesos) 
Após 3 segundos, todos apagam
*/

// Atribuir nomes aos pinos de I/O
#define BT1 8
#define BT2 9
#define ledR 2
#define ledW 3
#define ledB 4

int contador;

void setup() {
// Habilitar porta de comunicação serial (Baud Rate 9600 bits/s)
  Serial.begin(9600);
// Configurar pinos de I/O
  pinMode(BT1, INPUT);
  pinMode(BT2, INPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledW, OUTPUT);
  pinMode(ledR, OUTPUT);
}

void loop() {
  digitalWrite(ledB, HIGH);
  delay(1000);
  digitalWrite(ledW, HIGH);
  delay(1000);
  digitalWrite(ledR, HIGH);
  delay(3000);
  digitalWrite(ledB, LOW);
  delay(1000);
  digitalWrite(ledW, LOW);
  delay(1000);
  digitalWrite(ledR, LOW);
  delay(1000);
}
