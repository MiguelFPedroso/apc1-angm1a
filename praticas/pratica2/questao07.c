/* 


7. Faça um programa em C que leia o valor da hora de trabalho e o total de horas trabalhadas no mês e calcule o salário bruto, o salário líquido, e os impostos descontados. Considere IR igual a 25% e INSS igual a 11%


*/


#include  <stdio.h>


int main() {

  
  float valor_da_hora_de_trabalho ;
  printf("insira o valor da hora de trabalho: ");
  scanf("%f" ,&valor_da_hora_de_trabalho);
  float total_de_horas_trabalhadas_no_mes ;
  printf("insira o total de horas trabalhadas no mes: ");
  scanf("%f" ,&total_de_horas_trabalhadas_no_mes);


  const float IR = 0.25f;
  const float INSS = 0.11f;

  float valor_salario_bruto = valor_da_hora_de_trabalho * total_de_horas_trabalhadas_no_mes;

  
  float valor_imposto_renda = valor_salario_bruto * IR;
  float valor_imposto_previdencia = valor_salario_bruto * INSS;
  float salario_liquido = valor_salario_bruto - valor_imposto_renda - valor_imposto_previdencia;


  printf("---------------------------\n");
  printf("  C O N T R A C H E Q U E  \n");
  printf("---------------------------\n");
  printf("\x1b[34mSalario bruto............: R$ %7.2f\x1b[0m\n", valor_salario_bruto);  
  printf("\x1b[31mImposto de renda.........: R$ %8.2f\x1b[0m\n", valor_imposto_renda);
  printf("\x1b[31mImposto de previdencia...: R$ %8.2f\x1b[0m\n",valor_imposto_previdencia);
  printf("\x1b[34mSalario liquido..........: R$ %8.2f\x1b[0m\n", salario_liquido);


  
  return 0;

  
}