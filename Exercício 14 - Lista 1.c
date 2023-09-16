//A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo de 0 até 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A média das três notas mencionadas anteriormente obedece aos pesos: Trabalho de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na tela se o aluno esta reprovado (média entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi aprovado. Faça todas as verificações necessárias.

#include <stdio.h>
int main (){
  float tl, as, ef, media;

  printf ("Informe respectivamente sua nota no trabalho de laboratório, na avaliação semestral e no exame final: \n");
  scanf ("%f %f %f", &tl, &as, &ef);

  media=(2*tl+3*as+5*ef)/10;

  if (media>=0 && media<=2.9){
    printf ("Você foi reprovado!");
  }
  else if (media>=3 && media<=4.9){
    printf ("Você está de recuperação!");
  }
  else {
    printf ("Parabéns! Você foi aprovado.");
  }

  return 0;
}