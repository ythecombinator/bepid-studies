/* Exemplo de programa que pede um número ao usuário e verifica se ele é impar ou par */

/* Incluindo a biblioteca padrão de funções de I/O */
#include <stdio.h>

/* Função principal */
int main()
{
  /* Declaramos uma variável para guardar o número digitado */
  int num;

  printf("Qual o valor? \n");
  scanf("%i", &num);

  /* Se um número é par, ele é divisível por 2; caso contrário, ele é ímpar
  (Usando o operador ternário) */

  num % 2 == 0 ? printf("Par \n") : printf ("Impar \n");

  return 0;
}
