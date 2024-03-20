/*
Faça um programa em C que leia dois números inteiros e imprima o quociente e o resto da divisão entre eles.
*/

#include <stdio.h>

int main(){
  int n1 , n2;
  printf("insira o primeiro numero: ");
  int deu_certo = scanf("%i" ,&n1);
  printf("insira o segundo numero: ");
  deu_certo = scanf("%i", &n2);

  int quociente = n1 / n2;
  printf("quociente: %f\n", quociente);
  int resto = n1 % n2;
  printf("resto: %i\n", resto);
  
  



  return 0;
}



