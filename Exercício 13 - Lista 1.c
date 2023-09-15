//Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser igual ou superior a 60 pontos.

#include <stdio.h>
int main (){
  float nota1, nota2, nota3, media;

  printf ("Informe as notas das três provas: \n");
  scanf ("%f %f %f", &nota1, &nota2, &nota3);

  media=(nota1+nota2+(nota3*2))/4;

  if (media>=60){
    printf ("Parabéns! Você foi aprovado com uma média de %f pontos.", media);
  }
  else {
    printf ("Você não foi aprovado\nMédia de %f pontos.", media);
  }

  return 0;
}