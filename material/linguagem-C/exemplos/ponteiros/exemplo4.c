/* Exemplos de Matrizes e Ponteiros */

/* Como seria com matrizes (descomente para testar)

#include <stdio.h>

int main(){

  // Declarando variável pra ser contador
  int i=0;
  // Declarando uma char
  char t[10];
  // Iniciando uma char
  static char s[]="abobora";

  // Enquanto a posição no array t = posição no aray s
  while(t[i]=s[i])
    // Incrementa o contador
    i++;
  // Imprime t
  printf("%s \n",t);

  return 0;
}

*/

#include <stdio.h>
#include <string.h>

int main(){

  /* Delcarando duas strings: s e t */
  char t[10], s[10];
  /* Declarando ponteiros pras strings s e t */
  char *ps,*pt;
  /* Utilizando a função strcpy para inserir "abobora" na string s
  1° parametro: destino
  2° parametro: origem */
  strcpy(s,"abobora");
  /*  */
  ps=s;
  pt=&t[0];
  while(*ps){
    *pt++ = *ps++;
  }
  printf("%s",t);
  return 0;
}
