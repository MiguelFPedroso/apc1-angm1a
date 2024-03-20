#include <stdio.h>

int main(){
  
   char nome[31];
   int quantidade;
   float valor;
  
   printf("entre com o nome do produto: ");
   int deu_certo = scanf("%[^\n]s", nome);
   

   printf("entre com a quantidade do produto: ");
   deu_certo = scanf("%i", &quantidade);

   printf("entre com o valor do produto: ");
   scanf("%f" , &valor);

  printf("\x1b[31m--------------------------\n");
  printf("    N O T A  L E G A L     \n");
  printf("---------------------------\x1b[0m\n");
  printf("\x1b[35mITEM             QTD  VALOR\x1b[0m\n");
  printf("\x1b[36m%-16s %03i %6.2f\x1b[0m\n" , nome , quantidade , valor);





  
  return 0;
}