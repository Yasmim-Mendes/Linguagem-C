//Faça um programa que leia dois valores a e b e imprima o resultado de (b^3 + ab) – 2b + a mod b. Em notação matemática, mod representa o resto da divisão de dois inteiros. Note que não se calcula resto da divisão de números reais.

#include <stdio.h>
int main (){
  int a, b, resultado;

  printf ("Informe um valor a: ");
  scanf ("%d", &a);

  printf ("Informe um valor b: ");
  scanf ("%d", &b);

  resultado=((b*b*b)+a*b)-2*b+a%b;
  printf ("f(x) = %d", resultado);

  return 0;
}