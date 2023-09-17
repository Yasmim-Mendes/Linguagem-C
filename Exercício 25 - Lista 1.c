//Calcule as raízes da equação de 2o grau. Lembrando que: x=(-b±√Δ)/2a, onde Δ=b^2-4ac. A variável a tem que ser diferente de zero, e ax^2 + bx + c = 0 representa uma equação de 2o grau. Caso seja igual, imprima a mensagem “Não é equação de segundo grau”. • Se ∆ < 0, não existe real. Imprima a mensagem Não existe raíz. • Se ∆ = 0, existe uma raíz real. Imprima a raíz e a mensagem Raíz unica. • Se ∆ ≥ 0, imprima as duas raízes reais.

#include <stdio.h>
#include <math.h>
int main (){
  int a, b, c, raiz1, raiz2, delta;

  printf ("Informe respectivamente a, b e c para ax^2 + bx + c = 0\n");
  scanf ("%d %d %d", &a, &b, &c);

  if (a!=0){
    delta=(b*b)-4*a*c;
    if (delta<0){
      printf ("\nNão existe raíz real");
    }
    else if (delta==0){
      raiz1=(-b+sqrt(delta))/(2*a);
      printf ("\nx = %d", raiz1);
    }
    else if (delta>0){
      raiz1=(-b+sqrt(delta))/(2*a);
      raiz2=(-b-sqrt(delta))/(2*a);

      printf ("\nx1 = %d\nx2 = %d", raiz1, raiz2);
    }
  }

  return 0;
}