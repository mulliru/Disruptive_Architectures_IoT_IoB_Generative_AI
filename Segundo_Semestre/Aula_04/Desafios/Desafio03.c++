/*
Questão 03 
Todos os LEDs devem acender na inicialização e, após 3 segundos, devem apagar.
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
  digitalWrite(ledW, HIGH);
  digitalWrite(ledR, HIGH);
  delay(3000);
  digitalWrite(ledB, LOW);
  digitalWrite(ledW, LOW);
  digitalWrite(ledR, LOW);
}