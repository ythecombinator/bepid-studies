/* Exemplos de Expressões com Ponteiros */

#include <stdio.h>

int main(){

  /* Declarando um int x */
  int x;
  /* Declarando ponteiro pra x */
  int *px;

  /* Atribuindo valor a x */
  x = 1;
  /* Atribuindo ao ponteiro px o endereço de x */
  px=&x;

  /* Imprimindo o valor de x (1) */
  printf("x= %d \n",x);
  /* Imprimindo o endereço de x */
  printf("&x= %d \n",&x);
  /* Imprimindo o valor de px (endereço de x) */
  printf("px= %d \n \n",px);

  /* Imprimindo o valor indicado por px (x) + 1 */
  printf("*px+1= %d \n",*px+1);
  /* Imprimindo o valor de px (endereço de x) */
  printf("px= %d \n",px);
  /* Imprimindo o valor indicado por px (x) */
  printf("*px= %d \n \n",*px);

  /* Imprimindo e atribuindo o valor indicado por px (x) + 1 (*px = *px + 1 ou x=x+1) */
  printf("*px+=1= %d \n",*px+=1);
  /* Imprimindo o valor de px (endereço de x) */
  printf("px= %d \n",px);
  /* Imprimindo o valor indicado por px (x) */
  printf("*px= %d \n \n",*px);

  /* Imprimindo o valor indicado por px (x) e incrementando */
  printf("(*px)++= %d \n",(*px)++);
  /* Imprimindo o valor de px (endereço de x) */
  printf("px= %d \n",px);
  /* Imprimindo o valor indicado por px (x) */
  printf("*px= %d \n \n",*px);

  /* Subindo uma posição na memória (= *px++ ) */
  printf("*(px++)= %d \n",*(px++));
  /* Imprimindo o valor de px (endereço de x) */
  printf("px= %u \n",px);
  /* Imprimindo o valor indicado por px (x) */
  printf("*px= %d \n \n",*px);

  /* Imprimindo o valor de px (endereço de x) e subindo uma posição na memória */
  printf("*px++-= %d \n",*px++);
  /* Imprimindo o valor de px (endereço de x) */
  printf("px= %u \n",px);
  /* Imprimindo o valor indicado por px (x) */
  printf("*px= %d \n \n",*px);

  return 0;
}
