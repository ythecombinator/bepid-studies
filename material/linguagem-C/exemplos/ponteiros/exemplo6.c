/* Exemplo de matrizes de Ponteiros */

#include <stdio.h>

int main(){

  /* Declarando uma matriz de ponteiros com 10 posições */
  int *x[10];
  /* Inicializando uma variável inteira */
  int var = 5;
  /* Atribui o endereço de var ao terceiro elemento da matriz de ponteiros */
  x[2]= &var;
  /* Imprimindo o valor armazenado no terceiro elemento da matriz */
  printf("*x[2] = %d \n",*x[2]);

  return 0;
}
