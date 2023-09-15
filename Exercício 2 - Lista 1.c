//Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido.

#include <stdio.h>
#include <math.h>
int main (){
  int num;

  printf ("Informe um número: ");
  scanf ("%d", &num);

  if (num>0){
    printf ("%f", sqrt(num));
  }
  else {
    printf ("Número inválido!");
  }

  return 0;
}