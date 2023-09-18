//Escrever um programa que leia o código do produto escolhido do cardápio de uma lanchonete e a quantidade. O programa deve calcular o valor a ser pago por aquele lanche.

#include <stdio.h>
int main (){
  int cod, quant;
  float valor;

  printf ("Informe o código do produto: ");
  scanf ("%d", &cod);
  printf ("Informe a quantidade: ");
  scanf ("%d", &quant);

  if (cod==100){
    valor=1.20*quant;
  }
  else if (cod==101){
    valor=1.30*quant;
  }
  else if (cod==102){
    valor=1.50*quant;
  }
  else if (cod==103){
    valor=1.20*quant;
  }
  else if (cod==104){
    valor=1.70*quant;
  }
  else if (cod==105){
    valor=2.20*quant;
  }
  else if (cod==106){
    valor=quant;
  }

  printf ("O preço a ser pago é de R$%f", valor);

  return 0;
}