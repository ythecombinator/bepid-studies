/* Exemplo de programa para verificar se um ano é bissexto */

/* Incluindo a biblioteca padrão de funções de I/O */
#include <stdio.h>

/* Função principal */
int main()
{
  int ano;

  printf("Descubra se nasceu em um ano bissexto. Insira o ano em que nasceu: \n");
  scanf("%i", &ano);

  /* Para entender o que é feito aqui, é recomendado o entedimento de anos bissextos:
  (https://pt.wikipedia.org/wiki/Ano_bissexto)

  Temos que:
  - De 4 em 4 anos é ano bissexto
  - De 100 em 100 anos não é ano bissexto
  - De 400 em 400 anos é ano bissexto */

  if (ano % 400 == 0)
    printf("%i e bissexto. \n", ano);
  else if ((ano % 4 == 0) && (ano % 100 != 0))
    printf("%i e bissexto. \n", ano);
  else
    printf("%i nao e bissexto. \n", ano);

  return 0;
}
