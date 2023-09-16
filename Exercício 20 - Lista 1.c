//Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triângulo e, se forem, se é um triângulo escaleno, equilátero ou isósceles.

#include <stdio.h>
int main (){
  float a, b, c;

  printf ("Informe três valores: \n");
  scanf ("%f %f %f", &a, &b, &c);

  if (a+b>c || a+c>b || b+c>a){
    printf ("Podem ser valores dos lados de um triângulo");

    if (a==b && a==c && c==b){
      printf ("\nSeria um triângulo equilátero");
    }
    else if ((a==b && a!=c) || (a==c && a!=b) || (c==b && c!=a)){
      printf ("\nSeria um triângulo isósceles");
    }
    else if (a!=b && b!=c && c!=a){
      printf ("\nSeria um triângulo escaleno");
    }
  }
  else {
    printf ("Não podem ser valores de lados de um triângulo");
  }

  return 0;
}
