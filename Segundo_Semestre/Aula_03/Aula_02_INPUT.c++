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
/*
Botão 1 (BT1):
LOW ---> desligado ---> ledW piscará em intervalos de 500ms
HIGH -->    ligado ---> ledR e ledB piscarão alternados em intervalos 350ms.
*/
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

void piscaRB(){
  digitalWrite(ledB, HIGH);
  digitalWrite(ledR, LOW);
  delay(350);
  digitalWrite(ledR, HIGH);
  digitalWrite(ledB, LOW);
  delay(350);
}

void piscaW(){
  digitalWrite(ledW, HIGH);
  delay(250);
  digitalWrite(ledW, LOW);
  delay(250);
}






