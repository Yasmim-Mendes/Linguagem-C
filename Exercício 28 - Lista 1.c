//Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das seguintes médias de acordo com um valor numérico digitado pelo usuério: (a) Geométrica (b) Ponderada (c) Harmônica (d) Aritmetica.

#include <stdio.h>
#include <math.h>
int main (){
  int n1, n2, n3, op;
  float media;

  printf ("Informe três números inteiros positivos: \n");
  scanf ("%d %d %d", &n1, &n2, &n3);

  printf ("\nInforme a média a ser calculada:\n1-Geométrica\n2-Ponderada\n3-Hamônica\n4-Aritmética\nMédia: ");
  scanf ("%d", &op);

  if (op==1){
    media=cbrt(n1*n2*n3);
  }
  else if (op==2){
    media=(n1+2.0*n2+3.0*n3)/6.0;
  }
  else if (op==3){
    media=1.0/(1.0/n1)+(1.0/n2)+(1.0/n3);
  }
  else if (op==4){
    media=(n1+n2+n3)/3.0;
  }

  printf ("\nMédia = %f", media);

  return 0;
}