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

// Piscar o LED branco 10x na inicialização
  for(int i=0; i<10; i++){
    Serial.println(i);
    digitalWrite(ledW, HIGH);
    delay(300);
    digitalWrite(ledB, LOW);
    delay(300);
  }
}

void loop() {
  digitalWrite(ledB, HIGH);
  digitalWrite(ledR, LOW);
  delay(300);
  digitalWrite(ledB, LOW);
  digitalWrite(ledR, HIGH);
  delay(300);
}











