//Leia a distância em Km e a quantidade de litros de gasolina consumidos por um carro em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela abaixo:
//CONSUMO | (Km/l) | MENSAGEM
//menor que | 8 | Venda o carro!
//entre | 8 e 14 | Econômico!
//maior que | 12 | Super econômico!

#include <stdio.h>
int main (){
  float d, l, consumo;

  printf ("Informe a distância em Km: ");
  scanf ("%f", &d);
  printf ("Informe os litros de gasolina consumidos: ");
  scanf ("%f", &l);

  consumo=d/l;

  if (consumo<8){
    printf ("Venda o carro!");
  }
  else if (consumo>=8 &&consumo<=14){
    printf ("Economico!");
  }
  else if (consumo>12){
    printf ("Super econômico!");
  }

  return 0;
}