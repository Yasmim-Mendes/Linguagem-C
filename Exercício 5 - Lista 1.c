//Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar.

#include <stdio.h>
int main (){
  int num;

  printf ("Informe um número inteiro: ");
  scanf ("%d", &num);

  if (num%2==0){
    printf ("O número %d é par!", num);
  }
  else {
    printf ("O número %d é ímpar!", num);
  }

  return 0;
}