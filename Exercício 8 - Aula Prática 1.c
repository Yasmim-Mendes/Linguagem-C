//Uma empresa contrata um encanador a R$ 30,00 por dia. Faça um programa que solicite o número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, sabendo-se que são descontados 8% para imposto de renda.

#include <stdio.h>
int main (){
  int dias;
  float salario;

  printf ("Informe o número de dias trabalhados pelo encanador: ");
  scanf ("%d", &dias);

  salario=(30*dias);
  salario=salario-(salario*(8/100));
  printf ("A quantia líquida a ser paga é de %f reais", salario);

  return 0;
}