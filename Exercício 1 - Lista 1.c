//Faça um programa que receba dois números e mostre qual deles é o maior.

#include <stdio.h>
int main (){
  int n1, n2, maior;

  printf ("Informe um número: ");
  scanf ("%d", &n1);

  printf ("Informe um número: ");
  scanf ("%d", &n2);

  maior=n1;
  if (n2>maior){
    maior=n2;
  }
  printf ("O maior número é %d", maior);

  return 0;
}