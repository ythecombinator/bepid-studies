/* Exemplo de programa que pede dois número ao usuário e soma eles (separando a lógica da soma em outra função)*/

/* Incluindo a biblioteca padrão de funções de I/O */
#include<stdio.h>

/* Função para realizar a soma */
long somar(long n1, long n2)
{
  long resultadoSoma;

  resultadoSoma = n1 + n2;

  return resultadoSoma;
}

/* Função para realizar a subtração */
long subtrair(long n1, long n2)
{
  long resultadoDiferenca;

  resultadoDiferenca = n1 - n2;

  return resultadoDiferenca;
}

/* Função para realizar a multiplicação */
long multiplicar(long n1, long n2)
{
  long resultadoProduto;

  resultadoProduto = n1 * n2;

  return resultadoProduto;
}

/* Função para realizar a divisão */
float dividir(float n1, float n2)
{
  float resultadoDiferenca;

  resultadoDiferenca = n1 / n2;

  return resultadoDiferenca;
}

/* Função principal */
int main()
{
  long num1, num2, soma, diferenca, produto;
  float quociente;

  /* Pede dois números */
  printf("Digite dois valores inteiros: \n");

  /* Recebe os números */
  scanf("%ld%ld", &num1, &num2);

  /* Soma os resultados (por meio da função "somar") */
  soma = somar(num1, num2);
  diferenca = subtrair(num1, num2);
  produto = multiplicar(num1, num2);
  quociente = dividir(num1, num2);

  /* Imprime os resultados */
  printf("Soma: %d\n",soma);
  printf("Diferenca: %d\n",diferenca);
  printf("Produto = %d\n",produto);
  printf("Quociente = %.2f\n",quociente);

  return 0;
}
