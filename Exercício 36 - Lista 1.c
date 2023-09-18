//Escreva um programa que, dado o valor da venda, imprima a comissão que deverá ser paga ao vendedor. Para calcular a comissão, considere a tabela abaixo:

#include <stdio.h>
int main (){
  float venda, comissao;

  printf ("Informe o valor da venda: ");
  scanf ("%f", &venda);

  if (venda>=100000.0){
    comissao=700.0+venda*(16.0/100.0);
  }
  else if (venda<100000.0 && venda>=80000){
    comissao=650.0+venda*(14.0/100.0);
  }
  else if (venda<80000.0 && venda>=60000){
    comissao=600.0+venda*(14.0/100.0);
  }
  else if (venda<60000.0 && venda>=40000){
    comissao=550.0+venda*(14.0/100.0);
  }
  else if (venda<40000.0 && venda>=20000){
    comissao=500.0+venda*(14.0/100.0);
  }
  else if (venda<20000){
    comissao=400.0+venda*(14.0/100.0);
  }

  printf ("O valor da comissão é de %f", comissao);

  return 0;
}