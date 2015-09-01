/* Exemplo de programa que pede dois número ao usuário e soma eles (separando a lógica da soma em outra função)*/

/* Incluindo a biblioteca padrão de funções de I/O */
#include<stdio.h>

long somar(long, long);

/* Função principal */
int main()
{
  long num1, num2, resultado;

  /* Pede dois números */
  printf("Digite dois valores inteiros: \n");

  /* Recebe os números */
  scanf("%ld%ld", &num1, &num2);

  /* Soma os resultados (por meio da função "somar") */
  resultado = somar(num1, num2);

  /* Imprime a resposta */
  printf("Resposta: %ld \n", resultado);

  return 0;
}

/* Função para realizar a soma */
long somar(long n1, long n2)
{
  long soma;

  soma = n1 + n2;

  return soma;
}
