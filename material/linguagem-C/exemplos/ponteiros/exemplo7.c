/* Exemplo de matrizes de Ponteiros */

#include <stdio.h>

int main(){

  /* Criando um array de ponteiros  */
  char *erro[2];
  /* Primeiro elemento */
  erro[0]="Erro 1\n";
  /* Segundo elemento */
  erro[1]="Erro 2\n";
  /*  */
  for(; *erro[0]; )
    printf("%c",*erro[0]++);

  return 0;
}
