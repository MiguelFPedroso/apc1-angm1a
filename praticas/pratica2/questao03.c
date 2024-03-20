/*
Faça um programa em C que leia uma temperatura em graus Celsius e calcule o valor correspondente em graus Fahrenheit (°F = 9/5°C + 32).
*/
#include <stdio.h>

int main(){
  float temperatura_celcius;
  printf("ponha uma temperatura em celcius: ");
  scanf("%f" , &temperatura_celcius);
  float temperatura_fahrenheit = (temperatura_celcius * 9/5) + 32;
  printf("resultado em fahrenheit: %.2f\n", temperatura_fahrenheit);

  return 0;
}