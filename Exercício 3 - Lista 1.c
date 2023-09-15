//Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrário, imprima o número ao quadrado.

#include <stdio.h>
#include <math.h>
int main (){
  int num;

  printf ("Informe um número real: ");
  scanf ("%d", &num);

  if (num>0){
    printf ("Raíz quadrada de %d = %f", num, sqrt(num));
  }
  else {
    printf ("Quadrado de %d = %d", num, num*num);
  }

  return 0;
}