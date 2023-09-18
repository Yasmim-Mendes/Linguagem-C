//Leia uma data e determine se ela e válida. Ou seja, verifique se o mês está entre 1 e 12, e se o dia existe naquele mês. Note que Fevereiro tem 29 dias em anos bissextos, e 28 dias em anos não bissextos.

#include <stdio.h>
int main (){
  int dia, mes, ano;

  printf ("Informe a data (dia, mês, ano) separadamente:\n");
  scanf ("%d %d %d", &dia, &mes, &ano);

  if (ano%4==0 && ano%100==00){
    if (mes==2){
      if (dia>=1 && dia<=29){
        printf ("Data válida!");
      }
      else {
        printf ("Data inválida!");
      }
    }
  }
  else {
    if (mes==1){
      if (dia>=1 && dia<=31){
        printf ("Data válida!");
      }
      else {
        printf ("Data inválida!");
      }
    }
    else if (mes==2){
      if (dia>=1 && dia<=28){
        printf ("Data válida!");
      }
      else {
        printf ("Data inválida!");
      }
    }
    else if (mes==3){
      if (dia>=1 && dia<=31){
        printf ("Data válida!");
      }
      else {
        printf ("Data inválida!");
      }
    }
    else if (mes==4){
      if (dia>=1 && dia<=30){
        printf ("Data válida!");
      }
      else {
        printf ("Data inválida!");
      }
    }
    else if (mes==5){
      if (dia>=1 && dia<=31){
        printf ("Data válida!");
      }
      else {
        printf ("Data inválida!");
      }
    }
    else if (mes==6){
      if (dia>=1 && dia<=30){
        printf ("Data válida!");
      }
      else {
        printf ("Data inválida!");
      }
    }
    else if (mes==7){
      if (dia>=1 && dia<=30){
        printf ("Data válida!");
      }
      else {
        printf ("Data inválida!");
      }
    }
    else if (mes==8){
      if (dia>=1 && dia<=31){
        printf ("Data válida!");
      }
      else {
        printf ("Data inválida!");
      }
    }
    else if (mes==9){
      if (dia>=1 && dia<=30){
        printf ("Data válida!");
      }
      else {
        printf ("Data inválida!");
      }
    }
    else if (mes==10){
      if (dia>=1 && dia<=31){
        printf ("Data válida!");
      }
      else {
        printf ("Data inválida!");
      }
    }
    else if (mes==11){
      if (dia>=1 && dia<=30){
        printf ("Data válida!");
      }
      else {
        printf ("Data inválida!");
      }
    }
    else if (mes==12){
      if (dia>=1 && dia<=31){
        printf ("Data válida!");
      }
      else {
        printf ("Data inválida!");
      }
    }

    return 0;
  }
}