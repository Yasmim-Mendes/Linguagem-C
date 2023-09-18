//Leia a nota e o número de faltas de um aluno, e escreva seu conceito. De acordo com a tabela abaixo, quando o aluno tem mais de 20 faltas ocorre uma redução de conceito. 

#include <stdio.h>
int main (){
  float nota;
  int faltas;

  printf ("Informe sua nota: ");
  scanf ("%f", &nota);
  printf ("Informe o número de faltas: ");
  scanf ("%d", &faltas);

  if (nota>=9.0 && nota<=10.0){
    if (faltas<20){
      printf ("Conceito: A");
    }
    else {
      printf ("Conceito: B");
    }
  }
  else if (nota>=7.5 && nota<=8.9){
    if (faltas<20){
      printf ("Conceito: B");
    }
    else {
      printf ("Conceito: C");
    }
  }
  else if (nota>=5.0 && nota<=7.4){
    if (faltas<20){
      printf ("Conceito: C");
    }
    else {
      printf ("Conceito: D");
    }
  }
  else if (nota>=4.0 && nota<=4.9){
    if (faltas<20){
      printf ("COnceito: D");
    }
    else {
      printf ("Conceito: E");
    }
  }
  else if (nota>=0.0 && nota<=3.9){
    printf ("COnceito: E");
  }

  return 0;
}