/*
Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).
*/

#include <stdio.h>
#include <math.h>

int main(){

  float a, b, c , delta , x1 , x2;

  printf("digite o valor de a: ");
  int deu_certo = scanf("%f", &a);

  printf("digite o valor de b: ");
  int deu_certo2 = scanf("%f", &b);

  printf("digite o valor de c: ");
  int deu_certo3 = scanf("%f", &c);

  delta = pow(b, 2) - 4 * a * c ;
  printf("delta: %f\n", delta);
  if(delta < 0){
    printf("não existe raiz real\n");
  }
  x1 = (-b + sqrt(delta)) / (2 * a);
  printf("O valor da raiz um é: %f\n", x1);
  
  x2 = (-b - sqrt(delta)) / (2 * a);
  printf("O valor da raiz dois é: %f\n", x2);
  
  return 0;
}