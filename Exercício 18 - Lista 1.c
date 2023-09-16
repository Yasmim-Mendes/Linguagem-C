//Faça um programa que mostre ao usuário um menu com 4 opções de operações matemáticas (as básicas, por exemplo). O usuário escolhe uma das opções e o seu programa então pede dois valores numéricos e realiza a operação, mostrando o resultado e saindo.

#include <stdio.h>
int main (){
  int op, n1, n2;

  printf ("Escolha a operação a ser realizada:\n1-Adição\n2-Subtração\n3-Multiplicação\n4-Divisão\n\n");
  scanf ("%d", &op);

  printf ("\n\nInforme dois valores numéricos: \n");
  scanf ("%d %d", &n1, &n2);

  if (op==1){
    printf ("%d + %d = %d", n1, n2, n1+n2);
  }
  else if (op==2){
    printf ("%d - %d = %d", n1, n2, n1-n2);
  }
  else if (op==3){
    printf ("%d x %d = %d", n1, n2, n1*n2);
  }
  else if (op==4){
    printf ("%d / %d = %d", n1, n2, n1/n2);
  }

  return 0;
}