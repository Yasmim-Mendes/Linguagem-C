//Faça um programa que leia uma temperatura em Celsius e imprime esta temperatura em Fahrenheit. A fórmula para a conversão é: far = (celsius * 9/5) + 32.

#include <stdio.h>
int main (){
  float celsius, fahrenheit;

  printf ("Informe uma temperatura em graus Celsius: ");
  scanf ("%f", &celsius);

  fahrenheit=(celsius*9/5)+32;

  printf ("%f graus Celsius equivalem a %f graus Fahrenheit", celsius, fahrenheit);

  return 0;
}