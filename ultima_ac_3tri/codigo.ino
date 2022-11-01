#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Alterar o endereço conforme modulo I2C
LiquidCrystal_I2C lcd(0x27, 2,1,0,4,5,6,7,3, POSITIVE); 
#define BotA 2
#define BotB 3
#define BotC 4
#define BotD 5


int i = 0;

int nQuestao = 10;
int array[10];

  
void setup(){
  pinMode(BotA, INPUT);
  pinMode(BotB, INPUT);
  pinMode(BotC, INPUT);
  pinMode(BotD, INPUT);
    
  lcd.begin(20, 4);
  lcd.clear();
  lcd.setCursor(0,0);
  
  lcd.print("Seja Bem Vindo!");
  Serial.begin(9600);
  delay(2000);
  lcd.clear();
  
  geraSequencia();
}

void loop(){
  for (int i = 0; i < nQuestao; i++){

   selecionaQuestao(array[i]);
  }
  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Fim de Jogo!");
  
  delay(2000);
  lcd.setCursor(0,1);

}

void selecionaQuestao(int nQuestao){
  
  switch(nQuestao){
    case 0:
        lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Qual tipo de espelho e o retrovisor dos carros?");
          lcd.setCursor(0,2);
        lcd.print("A)Concavo");
        lcd.setCursor(0,3);
        lcd.print("B)Convexo");
        lcd.setCursor(10,2);
        lcd.print("C)Plano");
        lcd.setCursor(10,3);
        lcd.print("D)Esfericos");
        if(analisaBotao()=='A'){
          lcd.setCursor(0,1);
          lcd.print("Correto!");
        }else{
          lcd.setCursor(0,1);
          lcd.print("Errado!");

          for(int i=0; i<=20; i++){
            lcd.scrollDisplayRight();
          }
        }
    break;
    case 1:
        lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Qual nivel trofico uma planta ocupa em uma teia alimentar?");
          lcd.setCursor(0,2);
          lcd.print("A)Segundo nivel trofico");
        lcd.setCursor(0,3);
        lcd.print("B)Primeiro nivel trofico");
        lcd.setCursor(10,2);
        lcd.print("C)Terceiro nivel trofico");
        lcd.setCursor(10,3);
        lcd.print("D)Quarto nivel trofico");
        if(analisaBotao()=='B'){
          lcd.setCursor(0,1);
          lcd.print("Correto!");
        }else{
          lcd.setCursor(0,1);
          lcd.print("Errado!");

          for(int i=0; i<=20; i++){
            lcd.scrollDisplayRight();
        }
    break;
    case 2:
        lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Qual e o numero atomico do ferro?");
          lcd.setCursor(0,2);
          lcd.print("A)23");
        lcd.setCursor(0,3);
        lcd.print("B)21");
        lcd.setCursor(10,2);
        lcd.print("C)26");
        lcd.setCursor(10,3);
        lcd.print("D)28");
        if(analisaBotao()=='C'){
          lcd.setCursor(0,1);
          lcd.print("Correto!");
        }else{
          lcd.setCursor(0,1);
          lcd.print("Errado!");

          for(int i=0; i<=20; i++){
            lcd.scrollDisplayRight();
        }
    break;
    case 3:
        lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Em qual fase do romantismo tinha o indigena como um heroi?");
          lcd.setCursor(0,2);
          lcd.print("A)Segunda Geracao");
        lcd.setCursor(0,3);
        lcd.print("B)Primeira Geracao ");
        lcd.setCursor(10,2);
        lcd.print("C)Terceira Geracao ");
        lcd.setCursor(10,3);
        lcd.print("D)Todas Acima");
        if(analisaBotao()=='B'){
          lcd.setCursor(0,1);
          lcd.print("Correto!");
        }else{
          lcd.setCursor(0,1);
          lcd.print("Errado!");

          for(int i=0; i<=20; i++){
            lcd.scrollDisplayRight();
        }
    break;
    case 4:
        lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("A luta de classes foi um dos conceitos de qual dos filosofos abaixo?");
        lcd.setCursor(0,2);
        lcd.print("A)Aristoteles");
        lcd.setCursor(0,3);
        lcd.print("B)Socrates");
        lcd.setCursor(10,2);
        lcd.print("C)Max Weber");
        lcd.setCursor(10,3);
        lcd.print("D)Karl Marx");
        if(analisaBotao()=='D'){
          lcd.setCursor(0,1);
          lcd.print("Correto!");
        }else{
          lcd.setCursor(0,1);
          lcd.print("Errado!");

          for(int i=0; i<=20; i++){
            lcd.scrollDisplayRight();
        }
    break;
    case 5:
        lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("O teorema de Sarrus e usado para uma matriz:");
          lcd.setCursor(0,2);
        lcd.print("A)2x2");
        lcd.setCursor(0,3);
        lcd.print("B)3x3");
        lcd.setCursor(10,2);
        lcd.print("C)4x4");
        lcd.setCursor(10,3);
        lcd.print("D)Não existe este teorema");
        if(analisaBotao()=='B'){
          lcd.setCursor(0,1);
          lcd.print("Correto!");
        }else{
          lcd.setCursor(0,1);
          lcd.print("Errado!");

          for(int i=0; i<=20; i++){
            lcd.scrollDisplayRight();
        }
    break;
    case 6:
        lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Complete a frase: ' I ___ hungry! I couldn't even think clearly!'");
          lcd.setCursor(0,2);
        lcd.print("A)Where");
        lcd.setCursor(0,3);
        lcd.print("B)Am");
        lcd.setCursor(10,2);
        lcd.print("C)Have");
        lcd.setCursor(10,3);
        lcd.print("D)Was");
          if(analisaBotao()=='D'){
          lcd.setCursor(0,1);
          lcd.print("Correto!");
        }else{
          lcd.setCursor(0,1);
          lcd.print("Errado!");

          for(int i=0; i<=20; i++){
            lcd.scrollDisplayRight();
        }
    break;
    case 7:
        lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Em que ano a URSS encerrou sua alianca com a China?");
          lcd.setCursor(0,2);
        lcd.print("A)1960");
        lcd.setCursor(0,3);
        lcd.print("B)1970");
        lcd.setCursor(10,2);
        lcd.print("C)1950");
        lcd.setCursor(10,3);
        lcd.print("D)1980");
        if(analisaBotao()=='A'){
          lcd.setCursor(0,1);
          lcd.print("Correto!");
        }else{
          lcd.setCursor(0,1);
          lcd.print("Errado!");

          for(int i=0; i<=20; i++){
            lcd.scrollDisplayRight();
        }
    break;
    case 8:
        lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Quando uma vegetacao esta no seu estado mais desenvolvido?");
           lcd.setCursor(0,2);
        lcd.print("A)Climax");
        lcd.setCursor(0,3);
        lcd.print("B)Ecese");
        lcd.setCursor(10,2);
        lcd.print("C)sere");
        lcd.setCursor(10,3);
        lcd.print("D)Nenhuma das alternativas");
        if(analisaBotao()=='A'){
         lcd.print("Correto!");
        }else{
          lcd.setCursor(0,1);
          lcd.print("Errado!");
          
          for(int i=0; i<=20; i++){
            lcd.scrollDisplayRight();v
        }
    break;
    case 9:
        lcd.clear();
          lcd.setCursor(0,0);
          lcd.print("Quando se possue dois zeros em uma verical da matriz, essa propriedade e chamada de:");
           lcd.setCursor(0,2);
        lcd.print("A)Teorema de Chio");
        lcd.setCursor(0,3);
        lcd.print("B)triangular");
        lcd.setCursor(10,2);
        lcd.print("C)Filas nulas");
        lcd.setCursor(10,3);
        lcd.print("D)Teorema de Jacobi");
        if(analisaBotao()=='C'){
          lcd.setCursor(0,1);
          lcd.print("Correto!");
        }else{
          lcd.setCursor(0,1);
          lcd.print("Errado!");

          for(int i=0; i<=20; i++){
            lcd.scrollDisplayRight();
        }
    break;
  }
  
}

char analisaBotao(){
  bool BotaoPressionado = true;
  
  while(BotaoPressionado){
    if(digitalRead(BotA)){
      BotaoPressionado = false;
      return 'A';
    }/*else if(digitalRead(BotB)){
      BotaoPressionado = false;
      return 'B';
    }else if(digitalRead(BotC)){
      BotaoPressionado = false;
      return 'C';
    }else if(digitalRead(BotD)){
      BotaoPressionado = false;
      return 'D';
    }
    */
  }
}


void geraSequencia(){
  randomSeed(random(0, 1000));
  for (int i = 0; i < nQuestao; i++){     
    array[i] = i;
    int temp = array[i];
    int novoIndice = random(nQuestao);
    array[i] = array[novoIndice];
    array[novoIndice] = temp;
  }
}    
 
