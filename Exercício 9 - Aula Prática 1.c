//Crie um programa que leia dois valores para as variáveis A e B, que efetue a troca dos valores deforma que a variável A passe a ter o valor da variável B e que a variável B passe a ter o valor da variável A. Apresente os valores trocados.

#include <stdio.h>
int main (){
  int a, b, c;

  printf ("Informe um valor a: ");
  scanf ("%d", &a);

  printf ("Informe um valor de b: ");
  scanf ("%d", &b);

  c=a;
  a=b;
  b=c;

  printf ("Valores invertidos:\na=%d\nb=%d", a, b);

  return 0;
}