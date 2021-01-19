//Piscaled simples
//Criado por: José Anastácio (josegamestest)
 
void setup() {
  pinMode(13, OUTPUT); // define a porta 13 como saida
}

void loop() {
  digitalWrite(13, HIGH); // energiza a porta 13 acendendo o led
  delay(1000); //atraso de 1000

  digitalWrite(13,LOW); //desati a porta 13
  delay(1000);
}  //termino do programa
