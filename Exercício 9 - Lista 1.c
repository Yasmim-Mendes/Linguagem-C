//Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for maior que 20% do salário imprima: Empréstimo não concedido, caso contrário imprima: Empréstimo concedido.

#include <stdio.h>
int main (){
  float salario, prestacao;

  printf ("Informe o salário do trabalhador: ");
  scanf ("%f", &salario);
  printf ("Informe o valor da prestação do empréstimo: ");
  scanf ("%f", &prestacao);

  if (prestacao>(20/100)*salario){
    printf ("Empréstimo não concedido!");
  }
  else {
    printf ("Empréstimo concedido!");
  }

  return 0;
}