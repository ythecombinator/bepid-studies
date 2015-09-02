/* Exemplo de programa para encontrar o MMC e o MDC de um número (sem recusrividade) */

/*  */
#include <stdio.h>

/* Função para caclular o MDC */
long maximo(long x, long y) {

  /* O MDC de um número e zero será sempre zero */
  if (x == 0)
    return y;

  /* Realiza subtrações sucessivas, seguindo o algoritmo
        enquanto a<>b faca
                    se a>b então
                           a<-a-b
                    senao
                            b<-b-a
                    fimse
        fimenquanto
        mdc<-a */
  while (x != y) {
    if (x > y)
      x = x - y;
    else
      y = y - x;
  }

  return x;
}

/* Função Principal*/
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
