//Crie um programa que imprima a hipotenusa de um triângulo retângulo de acordo com a leitura de seus catetos.

#include <stdio.h>
#include <math.h>
int main (){
  int cat1, cat2;
  float hipotenusa;

  printf ("Informe o valor do cateto 1: ");
  scanf ("%d", &cat1);

  printf ("Informe o valor do cateto 2: ");
  scanf ("%d", &cat2);

  hipotenusa=sqrt((cat1*cat1)+(cat2*cat2));
  printf ("A hipotenusa desse triangulo é igual a: %f", hipotenusa);

  return 0;
}