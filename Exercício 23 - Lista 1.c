//Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto se for divisível por 400 ou se for divisível por 4 e nao for divisível por 100. 

#include <stdio.h>
int main (){
  int ano;

  printf ("Informe um ano: ");
  scanf ("%d", &ano);

  if (ano%4==0 || ano%400==0 && ano%100!=0){
    printf ("%d é bissexto", ano);
  }
  else {
    printf ("%d não é bissexto", ano);
  }

  return 0;
}