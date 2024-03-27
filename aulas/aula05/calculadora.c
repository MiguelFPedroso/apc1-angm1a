#include <stdio.h>
#include <math.h>

int main(){

   int numero1;
   int numero2;
  
  printf("forneça o número 1: ");
  int deu_certo = scanf("%i", &numero1);
  
  printf("forneça o número 2: ");
  int deu_certo2 = scanf("%i", &numero2);

  int soma = numero1 + numero2;
  printf("a soma  é %i\n", soma);

  int subtracao = numero1 - numero2;
  printf("a subtracao é %i\n", subtracao);

  int multiplicacao = numero1 * numero2;
  printf("a multiplicacao é %i\n", multiplicacao);

  float divisao = 1.0 * numero1 / numero2;
  printf("a divisao é %.1f\n", divisao);

  int resto = numero1 % numero2;
  printf("o resto é %i\n", resto);

  // numero1 = numero1 + 1;
  //incremento;
  printf("O incremeto do primeiro é %i\n", numero1++);
  printf("O incremeto do primeiro é %i\n", ++numero1);

  // numero1 = numero1 - 1;
  //decremento;
  printf("O decresmeto do primeiro é %i\n", numero1--);
  printf("O decresmeto do primeiro é %i\n", --numero1);

  double raiz = sqrt(numero1);
  printf("A raiz quadrada do primeiro é %.2f\n", raiz);

  double potencia = pow(numero1, 2);// número^2
  printf("A segunda potencia do primeiro é %.2f\n", potencia);

  double logaritmo2 = log2(numero1);
  printf("O logaritmo na base 2 do primeiro é %.2f\n", logaritmo2);

  double logaritmo10 = log10(numero1);
  printf("O logaritmo na base 10 do primeiro é %.2f\n", logaritmo10);

  const double PI = 3.1415;
  double seno = sin(numero1 * (PI / 180));// ângulo em radiano * PI/180
  printf("O seno do primeiro é %.4f\n", seno);

  double cosseno = cos(numero1 * (PI / 180));
  printf("O cosseno do primeiro é %.4f\n", cosseno);

  double tangente = tan(numero1 * (PI / 180));
  printf("A tangente do primeiro é %.4f\n", tangente);
  
  return 0;
}