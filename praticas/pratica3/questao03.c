/*
3. Faça um programa em C que imprima um qualitativo associado a uma nota lida conforme a tabela: 1 = Ruim; 2 = Insuficiente; 3 = Suficiente, 4 = Bom, 5 = Ótimo, e imprima Nota inválida nos demais casos
*/

#include <stdio.h>

int main(){
   int nota;

  printf("Entre com uma nota de 1 a 5: ");
  int leu_certo = scanf("%i", &nota);

  switch(nota){
    case 1: printf("Nota é ruim "); break;
    case 2: printf("Nota é insuficiente "); break;
    case 3: printf("Nota é suficiente "); break;
    case 4: printf("Nota é bom "); break;
    case 5: printf("Nota é ótima "); break;
    default:printf("Nota inválida, tente novamente "); break;
  }
  return 0;
}