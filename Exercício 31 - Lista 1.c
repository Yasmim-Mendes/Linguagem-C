//Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela a seguir, verifique e mostra qual a classificação dessa pessoa. 

#include <stdio.h>
int main (){
  float altura, peso;

  printf ("Informe sua altura: ");
  scanf ("%f", &altura);
  printf ("Informe seu peso: ");
  scanf ("%f", &peso);

  if (altura<1.20){
    if (peso<60.0){
      printf ("Classificação: A");
    }
    else if (peso>=60.0 && peso<=90.0){
      printf ("Classificação: D");
    }
    else if (peso>90.0){
      printf ("Classificação: G");
    }
  }
  else if (altura>=1.20 && altura<=1.70){
    if (peso<60.0){
      printf ("Classificação: B");
    }
    else if (peso>=60.0 && peso<=90.0){
      printf ("Classificação: E");
    }
    else if (peso>90.0){
      printf ("Classificação: H");
    }
  }
  else {
    if (peso<60.0){
      printf ("Classificação: C");
    }
    else if (peso>=60.0 && peso<=90.0){
      printf ("Classificação: F");
    }
    else if (peso>90.0){
      printf ("Classificação: F");
    }
  }

  return 0;
}