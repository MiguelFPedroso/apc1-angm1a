/*
Faça um programa em C que leia a largura e o comprimento de um terreno em metros e calcule a sua área em hectares (1 hectare = 10.000 m²)
*/
#include <stdio.h>

int main(){

  float largura, comprimento;
  printf("insira a largura do terreno em m: ");
  scanf( "%f" ,&largura);
  printf("insira o comprimento do terreno em m: ");
  scanf(" %f" , &comprimento);
  
  float area = largura * comprimento / 10000;
  printf("area do terreno em hectares: %.2f\n", area);

  return 0;
}