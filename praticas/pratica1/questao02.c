/*
2. Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.
*/

#include <stdio.h>

int main() {
   int base ;
   printf("insira o tamanho da base: ");
   scanf("%i" ,&base);
   int altura ;
   printf("insira o tamanho da altura: ");
   scanf( "%i" ,&altura);


   int area = base * altura / 2; 

   printf("area do triangulo eh: %i\n", area);

   return 0;
}