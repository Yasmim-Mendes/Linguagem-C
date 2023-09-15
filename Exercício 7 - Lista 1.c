//Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números forem iguais, imprima a mensagem Números iguais.

#include <stdio.h>
int main (){
  int n1, n2, maior;

  printf ("Informe dois números: ");
  scanf ("%d %d", &n1, &n2);

  if (n1!=n2){
    maior=n1;
    if (n2>maior){
      maior=n2;
    }
    printf ("O maior número digitado é %d", maior);
  }
  else {
    printf ("Números iguais");
  }

  return 0;
}