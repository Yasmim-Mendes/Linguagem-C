//Faça um programa que leia uma altura e um peso de uma pessoa e imprima seu Índice de Massa Corporal. A fórmula do IMC é: imc = peso / (altura2).

#include <stdio.h>
int main (){
  float altura, peso;
  float imc;

  printf ("Informe sua altura em metros: ");
  scanf ("%f", &altura);

  printf ("Informe seu peso em kg: ");
  scanf ("%f", &peso);

  imc=peso/(altura*altura);
  printf ("Seu Índice de Massa Corporal é %f", imc);

  return 0;
}