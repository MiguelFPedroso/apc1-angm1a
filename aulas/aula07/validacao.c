#include <stdio.h>

int main() {
  int numero;
  int numero_valido = 0;

  while (numero_valido == 0) {
    printf("Entre com um número de 1 a 10: ");
    int deu_certo = scanf("%i", &numero);
    int numero_valido = numero >= 1 && numero <= 10;

    if (deu_certo && numero_valido) {
      printf("Segue o jogo!\n");
      break;
    } else {
      getchar(); // limpar \n
      printf("Numero invalido. Tente de novo!\n");
    }
  }

   do {
    printf("Entre com um número de 1 a 10: ");
    int deu_certo = scanf("%i", &numero);
    int numero_valido = numero >= 1 && numero <= 10;

    if (deu_certo && numero_valido) {
      printf("Segue o jogo!\n");
      break;
    } else {
       getchar(); // limpar \n
      printf("Numero invalido. Tente de novo!\n");
    }
  }  while (numero_valido == 0);
  return 0;
}