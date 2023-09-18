//Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o preço antigo, calcule e escreva o preço novo, e escreva uma mensagem em função do preço novo (de acordo com a segunda tabela).

#include <stdio.h>
int main (){
  float pantigo, pnovo;

  printf ("Informe o preço antigo: ");
  scanf ("%f", &pantigo);

  if (pantigo<50.0){
    pnovo=pantigo+pantigo*(5.0/100.0);
  }
  else if (pantigo>=50.0 && pantigo<=100.0){
    pnovo=pantigo+pantigo*(10.0/100.0);
  }
  else {
    pnovo=pantigo+pantigo*(15.0/100.0);
  }

  printf ("Novo preço: R$%f", pnovo);

  return 0;
}