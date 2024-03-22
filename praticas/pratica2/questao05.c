/* 
Faça um programa em C que leia o peso e a altura de uma pessoa e calcule o índice de massa corporal (imc = peso / altura²)
*/
#include <stdio.h>

int main(){

  float peso, altura;
  printf("insira o peso: ");
  scanf("%f" ,&peso);
  printf("insira sua altura em metros: ");
  scanf("%f" ,&altura);

  float imc = peso / (altura * altura);
  printf("seu imc é: %.2f\n", imc);


  return 0;
}