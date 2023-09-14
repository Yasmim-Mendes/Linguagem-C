//Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius. A fórmula de conversão é: C = 5.0 ∗ (F − 32.0)/9.0, sendo C a temperatura em Celsius e F a temperatura em Fahrenheit.

#include <stdio.h>
int main (){
  float celsius, fahrenheit;

  printf ("Informe uma temperatura em graus Fahrenheit: ");
  scanf ("%f", &fahrenheit);

  celsius=5.0*(fahrenheit-32.0)/9.0;
  printf ("%f graus em Fahrenheit equivalem a %f graus em Celsius", fahrenheit, celsius);

  return 0;
}