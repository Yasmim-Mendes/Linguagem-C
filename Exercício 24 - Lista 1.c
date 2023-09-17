//Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%). Faça um programa em que o usuário entre com o valor e o estado destino do produto e o programa retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o estado digitado não for válido, mostrar uma mensagem de erro.

#include <stdio.h>
int main (){
  float vinicial, vfinal;
  int estado;

  printf ("Informe o valor do produto: ");
  scanf ("%f", &vinicial);
  printf ("Informe o estado de destino do produto:\n1-MG\n2-SP\n3-RJ\n4-MS\nEstado: ");
  scanf ("%d", &estado);

  if (estado==1){
    vfinal=vinicial+vinicial*(7.0/100.0);
    printf ("\nO preço final do produto é de R$%f", vfinal);
  }
  else if (estado==2){
    vfinal=vinicial+vinicial*(12.0/100.0);
    printf ("\nO preço final do produto é de R$%f", vfinal);
  }
  else if (estado==3){
    vfinal=vinicial+vinicial*(15.0/100.0);
    printf ("\nO preço final do produto é de R$%f", vfinal);
  }
  else if (estado==4){
    vfinal=vinicial+vinicial*(8.0/100.0);
    printf ("\nO preço final do produto é de R$%f", vfinal);
  }
  else {
    printf ("\nERRO! Estado inválido");
  }

  return 0;
}