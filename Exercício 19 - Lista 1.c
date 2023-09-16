//Faça um programa para verificar se um determinado número inteiro e divisível por 3 ou 5, mas não simultaneamente pelos dois.

#include <stdio.h>
int main (){
  int num;

  printf ("Informe um numero inteiro: ");
  scanf ("%d", &num);

  if (num%3==0 && num%5!=0){
    printf ("%d é divisível por 3, mas não por 5", num);
  }
  else if (num%5==0 && num%3!=0){
    printf ("%d é divisível por 5, mas não por 3", num);
  }

  return 0;
}