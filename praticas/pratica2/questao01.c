/*
Faça um programa em C que leia três números reais e imprima a média aritmética destes números.
*/
#include <stdio.h>

int main(){
  float n1 , n2 , n3;
  printf("insira o primeiro numero: ");
  scanf("%f" ,&n1);
  printf("insira o segundo numero: ");
  scanf("%f" ,&n2);
  printf("insira o terceiro numero: ");
  scanf("insira o terceiro numero: ");
  scanf("%f" ,&n3);
  float media_artimetica = ( n1 + n2 + n3)/3;
  printf("media aritmetica: %.2f\n", media_artimetica);

  return 0;
}