/*
Questão 02 
Utilizando a função pinMode(), configure o sentido dos pinos de I/O referentes aos 
botões e aos LEDs. 
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
  if(digitalRead(BT1) == HIGH){ // botão ligado
    contador++;
    Serial.print("Valor do contador = ");
    Serial.println(contador);
    piscaW();
  }
  else{
    piscaRB();
  }
}