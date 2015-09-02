/* Exemplo de programa para encontrar fatorial de um número (sem recursividade) */

/* Incluindo a biblioteca padrão de funções de I/O */
#include <stdio.h>

/* Função para calcular fatorial */
long calcFatorial(int n){

  /* Aqui nos usamos da recursividade para, ao final de cada execução, até que n seja 0, chamar a função passando n-1 como parametro*/
  if (n == 0)
    return 1;
  else
    return(n * calcFatorial(n-1));
}

/* Função principal */
int main(){

  int num;
  long fatorial = 1;

  /* Pede um valor */
  printf("Digite um valor inteiro \n");
  /* Lê o valor */
  scanf("%d", &num);
  /* Imprime resultado */
  printf("%d! = %ld\n", num, calcFatorial(num));

  return 0;
}
