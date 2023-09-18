//Faça uma prova de matemática para crianças que estão aprendendo a somar números inteiros menores do que 100. Escolha números aleatórios entre 1 e 100, e mostre na tela a pergunta: qual é a soma de a + b, onde a e b são os números aleatórios. Peça a resposta. Faça cinco perguntas ao aluno, e mostre para ele as perguntas e as respostas corretas, além de quantas vezes o aluno acertou.

#include <stdio.h>
int main (){
  int respostas, acertos=0;

  printf ("Qual é a soma de 88 + 43?\n");
  scanf ("%d", &respostas);
  if (respostas==131){
    printf ("Correto!\n\n");
    acertos++;
  }
  else {
    printf ("Incorreto! 88 + 43 = 131\n\n");
  }

  printf ("Qual é a soma de 66 + 52?\n");
  scanf ("%d", &respostas);
  if (respostas==118){
    printf ("Correto!\n\n");
    acertos++;
  }
  else {
    printf ("Incorreto! 66 + 52 = 118\n\n");
  }

  printf ("Qual é a soma de 98 + 79?\n");
  scanf ("%d", &respostas);
  if (respostas==177){
    printf ("Correto!\n\n");
    acertos++;
  }
  else {
    printf ("Incorreto! 98 + 79 = 177\n\n");
  }

  printf ("Qual é a soma de 85 + 35?\n");
  scanf ("%d", &respostas);
  if (respostas==120){
    printf ("Correto!\n\n");
    acertos++;
  }
  else {
    printf ("Incorreto! 85 + 35 = 120\n\n");
  }

  printf ("Qual é a soma de 25 + 66?\n");
  scanf ("%d", &respostas);
  if (respostas==91){
    printf ("Correto!\n\n");
    acertos++;
  }
  else {
    printf ("Incorreto! 25 + 66 = 91\n\n");
  }

  printf ("Parabéns! Você acertou %d questões", acertos);

  return 0;
}