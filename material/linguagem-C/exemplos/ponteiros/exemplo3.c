/* Exemplos de Ponteiros para Ponteiros */

#include <stdio.h>

int main(){

  /* Declarando um int x */
  int x;
  /* Declarando ponteiro e um ponteiro pra ponteiro */
  int *px, **qp;

  /* Atribuindo valor a x */
  x = 10;
  /* Atribuindo ao ponteiro px o endereço de x */
  px = &x;
  /* Atribuindo ao ponteiro qp o endereço de px */
  qp = &px;
  /* Imprimindo o valor indicado por qp (px) */
  printf("%d",**qp);

  return 0;
}
