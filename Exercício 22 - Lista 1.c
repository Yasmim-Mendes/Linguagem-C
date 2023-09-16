//Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se aposentar. As condições para aposentadoria são: • Ter pelo menos 65 anos. • Ou ter trabalhado pelo menos 30 anos. • Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.

#include <stdio.h>
int main (){
  int idade, tempo;

  printf ("Informe a idade do trabalhador: ");
  scanf ("%d", &idade);
  printf ("Informe o tempo de serviço do trabalhador: ");
  scanf ("%d", &tempo);

  if (idade>=65){
    printf ("Parabéns! Esse trabalhador pode se aposentar");
  }
  else if (tempo>=30){
    printf ("Parabéns! Esse trabalhador pode se aposentar");
  }
  else if (idade>=60 && tempo>=25){
    printf ("Parabéns! Esse trabalhador pode se aposentar");
  }
  else {
    printf ("Esse trabalhador ainda não pode se aposentar");
  }

  return 0;
}