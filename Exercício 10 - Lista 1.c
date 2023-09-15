//Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
//Homens: (72,7 * h) - 58
//Mulheres: (62, 1 * h) – 44, 7

#include <stdio.h>
int main (){
  float altura, sexo, ideal;

  printf ("Informe sua altura: ");
  scanf ("%f", &altura);

  printf ("Digite 1 para homem e 2 para mulher: ");
  scanf ("%f", &sexo);

  if (sexo==1.0){
    ideal=(72.7*altura)-58;
  }
  else if (sexo==2.0){
    ideal=(62.1*altura)-44.7;
  }
  else {
    printf ("Valor inválido!");
  }

  printf ("Seu peso ideal equivale a %f", ideal);

  return 0;
}