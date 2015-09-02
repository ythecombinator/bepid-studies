/* Exemplo de programa para encontrar o MMC e o MDC de um número (com recursividade) */

/* Incluindo a biblioteca padrão de funções de I/O */
#include <stdio.h>

/* Função para caclular o MDC */
long maximo(long x, long y) {

  if (y == 0)
    return x;
  else
    return maximo(y, x % y);
}

int main() {

  /* Declarando as variáveis pra ambos os números e para os reultados */
  long x, y, mdc, mmc;

  /* Pede e recebe dois valores */
  printf("Digite dois numeros inteiros: \n");
  scanf("%ld%ld", &x, &y);

  /* Performa a função "maximo" pra encontrar o MDC e atribui a variável "mdc" */
  mdc = maximo(x, y);
  /* Calcula o mmc com base no mdc */
  mmc = (x*y)/mdc;

  printf("MDC: %ld\n", mdc);
  printf("MMC: %ld\n", mmc);

  return 0;
}
