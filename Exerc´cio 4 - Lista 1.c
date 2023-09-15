//4. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre número digitado ao quadrado e a raiz quadrada do número digitado.

#include <stdio.h>
#include <math.h>
int main (){
  int num;

  printf ("Informe um número: ");
  scanf ("%d", &num);

  if (num>0){
    printf ("Quadrado de %d = %d\nRaíz quadrada de %d = %f", num, num*num, num, sqrt(num));
  }
  else {
    printf ("Número inválido!");
  }

  return 0;
}