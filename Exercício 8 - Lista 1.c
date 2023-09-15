//Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e exiba na tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e 10.0, onde caso a nota não possua um valor válido, este fato deve ser informado ao usuário e o programa termina.

#include <stdio.h>
int main (){
  float nota1, nota2, media;

  printf ("Informe a primeira nota: ");
  scanf ("%f", &nota1);
  printf ("Informe a segunda nota: ");
  scanf ("%f", &nota2);

  if ((nota1>=0.0 && nota1<=10.0) && (nota2>=0.0 && nota2<=10.0)){
    media=(nota1+nota2)/2;
    printf ("A média das notas é igual a %f", media);
  }
  else {
    printf ("Nota(s) inválida(s)!");
  }

  return 0;
}