//Faça um programa que calcule e mostre a area de um trapézio. Sabe-se que: A = ((basemaior+basemenor)*altura)/2. Lembre-se a base maior e a base menor devem ser números maiores que zero. 

#include <stdio.h>
int main (){
  float bmaior, bmenor, altura, area;

  printf ("Informe o valor da base maior do trapézio: ");
  scanf ("%f", &bmaior);
  printf ("Informe o valor da base menor do trapézio: ");
  scanf ("%f", &bmenor);
  printf ("Inform a altura do trapézio: ");
  scanf ("%f", &altura);

  if (bmaior>0 && bmenor>0){
    area=((bmaior+bmenor)*altura)/2;
    printf ("\nÁrea do trapézio: %f", area);
  }
  else {
    printf ("Valores inválidos!");
  }

  return 0;
}