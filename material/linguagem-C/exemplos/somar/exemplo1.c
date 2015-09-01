/* Exemplo de programa que pede dois números ao usuário e soma eles */

/* Incluindo a biblioteca padrão de funções de I/O */
#include <stdio.h>

/* Função principal */
int main()
{

  /* Declarando variáveis do tipo int para serem os operandos e o resultado*/
  int num1, num2, resultado;
  /* Declarando uma variável do tipo char para ser a resposta do usuário
  quando questionado se deseja realizar outra soma */
  char resposta;

  /* Laço ("infinito") que performa a operação de soma enquanto o usuário desejar  */
  while (1) {
    /* Pede dois números */
    printf("Digite dois valores inteiros: \n");
    /* Recebe os números */
    scanf("%d%d", &num1, &num2);
    getchar();

    /* Soma os resultados */
    resultado = num1 + num2;

    /* Imrime a resposta */
    printf("Resposta: %d. \n", resultado);

    /* Pergunta se o usuário quer fazer outra operação */
    printf("Quer realizar outra soma? (s/n)\n");
    /* Lê a resposta do usário */
    scanf("%c", &resposta);

    /* Se o usuário tiver colocado sim, continua no loop (e passa pra próxima soma) */
    if (resposta == 's' || resposta == 'S')
       continue;
    /* Se não, para o loop */
    else
      break;
  }

  return 0;
}
