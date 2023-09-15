//Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim como a diferença existente entre ambos.

#include <stdio.h>
int main (){
  int n1, n2, maior, dif;

  printf ("Informe dois números inteiros: ");
  scanf ("%d %d", &n1, &n2);

  dif=n1-n2;
  maior=n1;
  if (n2>maior){
    maior=n2;
  }

  printf ("Maior número digitado = %d\nDiferença entre os números digitados = %d", maior, dif);

  return 0;
}