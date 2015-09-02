/* Exemplo de programa que verifica se um caractere inserido é vogal */

/* Incluindo a biblioteca padrão de funções de I/O */
#include <stdio.h>

/* Função principal */
int main()
{
  char caractere;

  printf("Insira um caractere: \n");
  scanf("%c", &caractere);

  switch(caractere)
  {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
      printf("'%c' e uma vogal.\n", caractere);
      break;
    default:
      printf("'%c' nao e uma vogal.\n", caractere);
  }

  return 0;
}
