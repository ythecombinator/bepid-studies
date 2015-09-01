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

  /* É válido a leitura da seção sobre operadores bit-a-bit para entender o que ocorre aqui.
  (https://github.com/mabrasil/bepid-studies/blob/master/material/linguagem-C/sintaxe.md#de-bits)

  Temos que o operador & realiza a função lógica E em cada bit correspondende. Assim:
    = 1 Se ambos os bits correspondentes = 1.
    = 0 Se ambos os bits correspondentes ≠ 1.

  Nesse caso, o operador é usado para verificar se o número é par ou ímpar da seguinte forma:
    númeroÍmpar & 1 = 1
    númeroPar   & 1 = 0

  Isso ocorre porque o bit menos significativo de um número ímpar é sempre 1. Assim, se fizermos a função lógica E com o número 1 (que tem seu bit menos significativo = 1), ela retornará 1, pois esta o faz sempre que ambos os bits correspondentes = 1.

  Ex.:  9 & 1 = 00001001 & 00000001 = 0000001  */
  if (num & 1 == 1)
    printf("Impar \n");
  else
    printf("Par \n");

   return 0;
}
