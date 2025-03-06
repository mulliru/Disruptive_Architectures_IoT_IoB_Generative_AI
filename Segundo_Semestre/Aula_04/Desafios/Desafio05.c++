/*
Questão 05 
Os LEDs acendem em sequência, em intervalos de 1 segundo, da esquerda para a direita 
(LEDs anteriores devem apagar) 
Após 3 segundos, a sequência se reinicia
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
  if(digitalRead(BT1) == HIGH){
    contador = 0;
  }
  if(digitalRead(BT2) == HIGH){
    contador = 0;
  }
  if(contador == 0){
    digitalWrite(ledR, HIGH);
    digitalWrite(ledW, LOW);
    digitalWrite(ledB, LOW);
    delay(1000);
    digitalWrite(ledR, LOW);
    digitalWrite(ledW, HIGH);
    digitalWrite(ledB, LOW);
    delay(1000);
    digitalWrite(ledR, LOW);
    digitalWrite(ledW, LOW);
    digitalWrite(ledB, HIGH);
    delay(1000);
    contador++;
  }
}

