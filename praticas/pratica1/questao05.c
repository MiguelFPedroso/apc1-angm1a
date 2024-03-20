/*
 Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).
*/

#include <stdio.h>

 int main(){
   long int gigabytes;
   printf("digite o valor em gigabytes: ");
   int deu_certo = scanf("%li" , &gigabytes);
   long int bytes = gigabytes * 1024 * 1024 * 1024;
   printf("valor em bytes: %li\n", bytes);

   return 0;
 }