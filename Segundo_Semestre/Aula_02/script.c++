

//Atribuir nomes aos pinos dos LEDs
#define ledVerm 5
#define ledAmar 6
#define ledVer 7


void setup() {
  //Configura os pinos dos LEDs como saída
  //Out put
  pinMode(ledVerm, OUTPUT)
  pinMode(ledAmar, OUTPUT)
  pinMode(ledVer, OUTPUT)

}

void loop() {
  ex1();
  //ex2();
  //ex3();
}

void ex1(){
/* Exemplo 1:
Os 3 LEDs deverão piscar simultaneamente 
em itervalo de 300ms */

digitalWrite(ledVerm, HIGH);
digitalWrite(ledAmar, HIGH);
digitalWrite(ledVer, HIGH);
delay(300); 
digitalWrite(ledVerm, LOW);
digitalWrite(ledAmar, LOW);
digitalWrite(ledVer, LOW);
delay(300);
}


void ex2(){
/* Exemplo 2:
OS LEDs verde e vermelho deverão piscar alternadamente 
em intervalo de 450ms. */

digitalWrite(ledVerm, HIGH);
delay(450); 
digitalWrite(ledVerm, LOW);
delay(450); 
digitalWrite(ledVer, HIGH);
delay(450);
digitalWrite(ledVer, LOW);

}

void ex3(){
/* Exemplo 3:
Crie um codigo para simular um semaforo;
verde: 4 segundos
amarelo 1 segundo.
vermelho: 6 segundos.
*/

digitalWrite(ledVerm, HIGH);
delay(4000); 
digitalWrite(ledVerm, LOW);
delay(1000); 


digitalWrite(ledAmar, HIGH);
delay(1000);
digitalWrite(ledAmar, LOW);
delay(1000);


digitalWrite(ledVer, HIGH);
delay(6000);
digitalWrite(ledVer, LOW);
delay(1000);


}
