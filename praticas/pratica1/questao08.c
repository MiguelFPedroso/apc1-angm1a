/*
Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).
*/

#include <stdio.h>

#include <math.h>

 int main(){
 float segundos;
  printf("Digite um tempo em segundos: ");
  int deu_certo = scanf("%f", &segundos);

  float horas = segundos/3600;
  float minutos = segundos % 3600.0);
  float segundo = (int)minutos % 60);
  printf("Esse eh o valor em horas, minutos e segundos: %f\n", &horas , &minutos, &segundo);
   
  
 








   return 0;
 }