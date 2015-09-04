/* Escreva um programa que começa pedindo um número N ao usuário e depois pede N números. O programa deverá mostrar na tela todos esses números ordenados do menor para o maior. Escreva sua própria função de ordenação. */

 #include <stdio.h>
 #include <stdlib.h>
 #include <conio.h>

 int main(){

  /* Qtd de números a serem comparados */
  int n;

  printf ("Digite um numero: \n");
  scanf("%i", &n);

  /* Vetor de números que o usuário vai colocar */
  int vetor[n];
  /*  */
  int x, i;

  printf ("Digite %i numeros: \n", n);

  /* Lê cada elemento do vetor */
  for (i = 0; i < n; i++)  {
     scanf("%d", &vetor[i]);
  }
  i = 1;
  x = vetor[0];

  /* Compara cada elemento do vetor*/
  while (i < n)  {
      if (vetor[i] > x)
         x = vetor[i];
      i++;
  }

  printf("O maior numero que voce digitou foi %d.\n",x);
  return 0;
 }
