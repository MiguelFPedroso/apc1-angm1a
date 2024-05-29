int main() {

  struct produto_t {
    char nome[21];
    float preco;
    int quantidade;
    float valor;
    int unidade; // 0 = un, 1 = cx, 2 = lt, 3 = ps
  };

  struct produto_t produto;

  printf("Entre com o nome do produto: ");
  int deu_certo = scanf("%s", produto.nome);

  printf("Entre com a quantidade do produto: ");
  deu_certo = scanf("%i", &produto.quantidade);

  printf("Entre com a unidade do produto\n");
  printf("0 - unidade, 1 = caixa, 2 = lata, 3 = peso: ");
  deu_certo = scanf("%i", &produto.unidade);

  printf("Entre com o preco do produto: ");
  deu_certo = scanf("%f", &produto.preco);

  produto.valor = produto.preco * produto.quantidade;

  printf("\n     N O T A  L E G A L\n");
  printf("Item         Qtd Und   Preco   Valor\n");
  printf("%-12s %03i ", produto.nome, produto.quantidade);

  switch(produto.unidade) {
    case 0: printf(" UN"); break;
    case 1: printf(" CX"); break;#include <stdio.h>
    case 2: printf(" LT"); break;
    case 3: printf(" KG"); break;
  }

  printf("%8.2f%8.2f\n", produto.preco, produto.valor);

  return 0;
}
