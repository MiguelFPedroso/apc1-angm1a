/*
1. Faça um programa em C que determine se um número inteiro lido é par ou ímpar.
*/

#include <stdio.h>

int main() {

  int numero;
  printf("ponha um numero: ");
  int leu_certo = scanf("%i", &numero);

  if (leu_certo){
    int numero_eh_divisivel_por_2 = numero % 2 == 0;

    if (numero_eh_divisivel_por_2) {
     printf("número %i é par!\n", numero);
   } else {
     printf("número %i é impar!\n", numero);
   } 
  }else{
    printf("número inválido!. Tente novamente.\n");
   }
  return 0;
}
