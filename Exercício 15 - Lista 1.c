//Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana correspondente a este numero. Isto é, domingo se 1, segunda-feira se 2, e assim por diante.

#include <stdio.h>
int main (){
  int dia;

  printf ("Informe um número de 1 a 7: ");
  scanf ("%d", &dia);

  if (dia<1 || dia >7){
    do {
      printf ("Número inválido! Por favor, informe um número de 1 a 7: ");
      scanf ("%d", &dia);
    } while (dia<1 || dia>7);
  }
  else {
    switch (dia){
      case 1: 
        printf ("Domingo");
        break;
      case 2:
        printf ("Segunda-feira");
        break;
      case 3: 
        printf ("Terça-feira");
        break;
      case 4: 
        printf ("Quarta-feira");
        break;
      case 5:
        printf ("Quinta-feira");
        break;
      case 6:
        printf ("Sexta-feira");
        break;
      case 7:
        printf ("Sábado");
        break;
    }
  }

  return 0;
}