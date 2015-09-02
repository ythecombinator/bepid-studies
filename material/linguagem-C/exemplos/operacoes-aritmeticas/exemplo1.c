/* Exemplo de programa que pede dois números ao usuário e faz as quatro operações aritméticas */

/* Incluindo a biblioteca padrão de funções de I/O */
#include <stdio.h>

/* Função principal */
int main()
{
  /* Declarando variáveis do tipo int para serem os operandos */
  int num1, num2;
  /* Declarando variáveis para serem os resultados das operações */
  int soma, diferenca, produto;
  /* Essa é do tipo float, pois o resultado da divisão não necessariamente é um número inteiro */
  float quociente;

  /* Pede dois números */
  printf("Digite dois valores inteiros: \n");
  /* Recebe os números */
  scanf("%d%d", &num1, &num2);

  /* Atribui a cada variável o resultado da respectiva operação*/
  soma = num1 + num2;
  diferenca = num1 - num2;
  produto = num1 * num2;
  /* É válido a leitura da seção sobre o operador cast para entender o que ocorre aqui.
  (https://github.com/mabrasil/bepid-studies/blob/master/material/linguagem-C/sintaxe.md#cast) */
  quociente = num1 / (float)num2;

  /* Imprime os resultados */
  printf("Soma: %d\n",soma);
  printf("Diferenca: %d\n",diferenca);
  printf("Produto = %d\n",produto);
  printf("Quociente = %.2f\n",quociente);

  return 0;
}
