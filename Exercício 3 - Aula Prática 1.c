//Faça um programa que leia o raio de um círculo e imprima sua área e seu perímetro.

#include <stdio.h>
int main (){
  float raio, area, perimetro;

  printf ("Informe o raio de um circulo: ");
  scanf ("%f", &raio);

  area=(raio*raio)*3.14;
  perimetro=2*3.14*raio;

  printf ("Um circulo de raio %f possui area %f e perimetro %f", raio, area, perimetro);

  return 0;
}