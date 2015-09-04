/* Exemplos de Manipulação de Ponteiros */

#include <stdio.h>

int main(){

  /* Declarando um int x */
  int x;
  /* Declarando dois ponteiros */
  int *px,*py;

  /* Atribuindo valor a x */
  x = 9;
  /* Atribuindo ao ponteiro px o endereço de x */
  px=&x;
  /* Atribuindo ao ponteiro py o valor de px */
  py=px;
  /* Imprimindo o valor de x (9) */
  printf("x= %d\n",x);
  /* Imprimindo o endereço de x */
  printf("&x= %d\n",&x);
  /* Imprimindo o valor de px (endereço de x) */
  printf("px= %d\n",px);
  /* Imprimindo o valor indicado por px (x) */
  printf("*px= %d\n",*px);
  /* Imprimindo o valor indicado por py (x) */
  printf("*py= %d\n",*py);

return 0;
}
