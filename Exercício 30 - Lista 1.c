//Faça um programa que receba três números e mostre-os em ordem crescente.  

#include <stdio.h>
int main (){
  int n1, n2, n3, maior, menor, meio;

  printf ("Informe trê números: \n");
  scanf ("%d %d %d", &n1, &n2, &n3);

  maior=n1;
  menor=n3;

  if (n2>maior){
    maior=n2;
  }
  if (n3>maior){
    maior=n3;
  }

  if (n1<menor){
    menor=n1;
  }
  if (n2<menor){
    menor=n2;
  }

  if (n1==maior && n3==menor){
    meio=n2;
  }
  else if (n2==maior && n3==menor){
    meio=n1;
  }
  else if (n3==maior && n1==menor){
    meio=n2;
  }
  else if (n3==maior && n2==menor){
    meio=n1;
  }
  else if (n1==maior && n2==menor){
    meio=n3;
  }
  else if (n2==maior && n1==menor){
    meio=n3;
  }

  printf ("%d %d %d", menor, meio, maior);

  return 0;
}
