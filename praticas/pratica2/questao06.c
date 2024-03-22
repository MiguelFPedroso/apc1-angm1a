/*
Faça um programa em C que leia o valor de compra, o ano de fabricação e o ano de depreciação e calcule o valor depreciado de um veículo (depreciação = (ano de depreciação - ano de fabricação) x 0,01 x valor de compra).
*/
#include <stdio.h>

int main(){

  float valor_de_compra;
  printf("insira o valor de compra: ");
  scanf("%f" ,&valor_de_compra);
  
  int ano_de_fabricacao;
  printf("insira o ano de fabricação: ");
  scanf("%i" ,&ano_de_fabricacao);
  
  int ano_de_depreciacao;
  printf("insira o ano de depreciação: ");
  scanf(" %i", &ano_de_depreciacao);
  
  int ano_de_depreciacao_subtracao = ano_de_depreciacao - ano_de_fabricacao;
  float valor_depreciado = ano_de_depreciacao_subtracao * 0.1 * valor_de_compra;
  printf("este eh o valor depreciado: %.2f\n", valor_depreciado);


  return 0;
}