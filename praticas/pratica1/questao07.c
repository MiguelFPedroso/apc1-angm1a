/*
Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°
*/
#include <stdio.h>
#include <math.h>


int main(){
  
   float distancia, angulo;
   const double PI = 3.14;
  
  printf("digite a distancia: ");
  int deu_certo = scanf("%f", &distancia);
  printf("digite o angulo: ");
  int deu_certo2 = scanf("%f", &angulo);
  if(angulo > 45){
    printf("o angulo deve ser menor ou igual a 45°\n");
  }
  else if (angulo <= 45){
    double altura = distancia * sin(angulo * (PI/180));
    printf("A altura eh igual a: %f\n", altura);
  }
  
   return 0;
}