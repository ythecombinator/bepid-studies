/* Incluindo  a biblio padrão de IO */
#include <stdio.h>
/* Função principal*/
 int main()
 {
  /* Inicializando a variável x, do tipo int, com o valor 4 */
  int x = 4;
  /* Lendo o valor de x */
  scanf("%d", &x);
  /* Imprimindo o valor de 2 * x */
  printf("%d", 2*x);
  /* Uma função que faz o mesmo papel da scanf e é voltada para o uso com caracteres */
  getchar();
 }
