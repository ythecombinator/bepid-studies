/* Exemplo de programa para encontrar fatorial de um número (sem recursividade) */

/* Incluindo a biblioteca padrão de funções de I/O */
#include <stdio.h>

/* Função para calcular fatorial */
long calcFatorial(int n){

  /* Contador */
  int i;
  /* Varíavel do tipo long que guardará o resultado */
  long resultado = 1;
  /* Laço que multiplica o resultado pelo valor do contador
  (incrementado enquanto este for menor que o número que o parametro da função) */
  for (i = 1; i <= n; i++)
    resultado = resultado * i;

  return resultado;
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

