//Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação escolhida. Escreva uma mensagem de erro se a opção for inválida. Escolha a opção: 1-Soma de 2 números. 2-Diferença entre 2 números (maior pelo menor). 3-Produto entre 2 números. 4-Divisão entre 2 números (o denominador não pode ser zero).

#include <stdio.h>
int main (){
  int op, n1, n2;

  printf ("Escolha a opção:\n1-Soma de 2 números\n2-Diferença entre 2 números (maior pelo menor)\n3-Produto entre 2 números\n4-Divisão entre 2 números (o denominador não pode ser 0)\nOpção: ");
  scanf ("%d", &op);

  printf ("\n\nInforme os dois números:\n");
  scanf ("%d %d", &n1, &n2);

  if (op==1){
    printf ("%d + %d = %d", n1, n2, n1+n2);
  }
  else if (op==2){
    if (n1>n2){
      printf ("%d - %d = %d", n1, n2, n1-n2);
    }
    else if (n2>n1){
      printf ("%d - %d = %d", n2, n1, n2-n1);
    }
  }
  else if (op==3){
    printf ("%d x %d = %d", n1, n2, n1*n2);
  }
  else if (op==4){
    if (n2!=0){
      printf ("%d / %d = %d", n1, n2, n1/n2);
    }
    else {
      printf ("Denominador=0; divisão impossível");
    }
  }

  return 0;
}