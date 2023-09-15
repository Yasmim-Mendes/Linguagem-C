//Ler um número inteiro. Se o número lido for negativo, escreva a mensagem “Número inválido”. Se o número for positivo, calcular o logaritmo deste número.

#include <stdio.h>
#include <math.h>
int main (){
  int num;
  float resultado;

  printf ("Informe um número inteiro: ");
  scanf ("%d", &num);

  if (num<0){
    printf ("Número inválido!");
  }
  else {
    resultado=log(num);
    printf ("O logaritmo do número %d é %f", num, resultado);
  }

  return 0;
}