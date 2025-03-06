/*
Questão 06 
Utilizando  um  laço  for(),  faça  dois  LEDs  piscarem  simultaneamente  6  vezes,  na 
inicialização. 
https://www.arduino.cc/reference/en/language/structure/control-structure/for/ 
As questões 07, 08 e 09 devem funcionar em uma mesma rotina.  
Se nenhum botão estiver pressionado, os LEDs devem permanecer apagados.
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
  for (contador = 0; contador < 6; contador++) {
    digitalWrite(ledB, HIGH);
    digitalWrite(ledW, HIGH);
    delay(500);
    digitalWrite(ledB, LOW);
    digitalWrite(ledW, LOW);
    delay(500);
  }
  digitalWrite(ledB, LOW);
  digitalWrite(ledW, LOW);
  digitalWrite(ledR, LOW);
  if (digitalRead(BT1) == HIGH) {
    digitalWrite(ledR, HIGH);
  }
  if (digitalRead(BT2) == HIGH) {
    digitalWrite(ledW, HIGH);
  }
  delay(500);
}