/* Exemplo básico de filas
Retirado do livro "Programar em C"
Disponível em <https://pt.wikibooks.org/wiki/Programar_em_C> */

/* Incluindo as libs necessárias */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Prototipando funções */

/* Função para inserir */
void q_enter(void);
/* Função para listar */
void q_list(void);
/* Função para armazenar */
int q_store(char *ptr);
/* Função para apagar */
int q_delete(void);

/* Contador */
int count = 0;
/* Proxima posição na fila */
int store = 0;
/* Recupera a posição da fila */
int retrieve = 0;
/* Vetor da fila */
char *queue[100];

/* Função principal */
int main(){

  /* Contador */
  int i = 0;

  /* Laço que, enquanto o contador não chegar a zero, faz com que o elemento correspondente no vetor fila seja nulo*/
  for ( i = 0; i < 100; i++ ){
    queue[i] = NULL;
  }

  // Inseri os dados na fila
  q_enter();

  // Imprime os dados na fila
  printf("\n\nDados da fila:\n");
  q_list();

  // Apaga a primeira entrada da fila
  q_delete();

  /* Imprime os dados na fila (sem o primeiro elemento) */
  printf("\n\nA fila depois delete:\n");
  q_list();

  /* Imprime a quantidade de elementos restantes */
  printf("\n\nNumero de elementos restantes na fila: %i \n", count);

  // Aguarda usuário pressionar
  getchar();

  return 0;
}

/* Função para inserir elementos */
void q_enter(void){

  /* String que só pode ser acessada nessa função */
  static char str[100];
  /* Ponteiro pra essa string */
  static char *ptr;

  printf("Pressione a tecla ENTER sem nada para ver o reultado\n");

  /* Enquanto houver entrada */
  do {

    printf("Insira o elemento:");
    gets(str);
    /* Aloca um bloco de bytes consecutivos na memória do computador por meio da função malloc
      O argumento passado corresponde ao números de bytes - nesse caso, o tamanho da string digitada */
    ptr = (char *) malloc(strlen(str));
    /* Usa a função strcpy para copiar o conteúdo de str para o ponteiro ptr */
    strcpy(ptr,str);
    /*  */
    if (*str){
      /* Incrementa o contador */
      count++;
      /* Guarda o endereço da seqüência de caracteres */
      q_store(ptr);
    }
  /* Sair se não houver uma entrada */
  } while (*str);
}

// Função para guardar os itens na fila
int q_store(char *ptr){

  if (store == 100) {
    printf("\nA lista esta cheia!\n");
    return 0 ;
  }

  queue[store] = ptr;
  store++; // próximo índice da fila
}

/* Função para apagar um item da fila */
int q_delete(void){

/* Se a posição atual = próxima posição */
if (store == retrieve) {
  /* Mostra que a fila está vazia */
  printf("\nA fila esta vazia!");
  return 0 ;
}

/* Decrementa o contador */
count--;
/* Incrementa a posição na fila */
retrieve++;

}

/* Função para listar os elementos da fila */
void q_list(void){

  /* Declara inteiro */
  int k;

  /* Início: k = posição atual
  Condição: k < próxima posição
  Incremento: incrementa 1 em k */
  for (k = retrieve; k < store; k++){
    printf("Elemento %d : %s \n",k+1,queue[k]);
  }

}
