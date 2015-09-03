/* Escreva uma função que peça dois números inteiros ao usuário e exibe o valor soma seguido pelo maior deles. */

#include <stdio.h>

int main () {

  int x, y, maior;

  printf("Digite dois numeros: \n");
  scanf("%i%i", &x, &y);

  if (x > y)
    maior = x;
  else
    maior = y;

  printf("A soma e: %i \n O maior e %i ",  x + y , maior);

  return 0;
}
