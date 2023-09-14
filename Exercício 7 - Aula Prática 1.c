//Receba o salário base de um funcionário. Calcule e imprima o salário a receber, sabendo-se que esse funcionário tem uma gratificação de 5% sobre o salário base. Além disso, ele paga 7% de imposto sobre o salário base.

#include <stdio.h>
int main (){
  float salario_base, salario_receber;

  printf ("Informe o salário base do funcionário: ");
  scanf ("%f", &salario_base);

  salario_receber=salario_base+salario_base*(5/100);
  salario_receber=salario_receber-salario_base*(7/100);
  printf ("O salário que o funcionário deverá receber é de %f reais", salario_receber);

  return 0;
}