//Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a soma de todos os seus algarismos. Por exemplo, ao número 2493 corresponderá o valor 18 (2 + 4 + 9 + 3). Se o número lido não for maior do que zero, o programa terminará com a mensagem “Número inválido”.

#include <stdio.h>
int main (){
  int num, alg, soma=0;

  printf ("Informe um número inteiro maior que 0: ");
  scanf ("%d", &num);

  if (num<0){
    printf ("Número inválido!");
  }
  else {
    while (num>0){
      alg=num%10;
      soma=soma+alg;
      num=num/10;
    }
  }

  printf ("A soma dos algarismos desse número equivale %d", soma);

  return 0;
}