# Linguagem C - Exercícios

> Exercícios do material sobre [Linguagem C](/material/linguagem-C).

## Questões

1. (BEPiD IFCE - 2014) As afirmações abaixo são relativas à linguagem C.

  1. Se `p` é um ponteiro para `x`, o comando `(*p)++` incrementa `x`.
  2. O operador `&` retorna o endereço da variável que a ele sucede.
  3. `p[2]` equivale a `*(p+2)`.

  a) Somente a afirmação I está certa.

  b) Somente a afirmação II está certa.

  c) As afirmações I e II estão certas.

  d) As afirmações II e III estão certas.

  e) Todas as afirmações estão certas.

2. (BEPiD IFCE - 2014) Sabendo que o `^` (circunflexo) é o operador binário bit-a-bit XOR, assinale a alternativa correta com base no código em linguagem C apresentado a seguir.

  ```c
  int main(void){
    int a = 3;
    int b = 2;
    printf("%d %d \n", a, b);
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    printf("%d %d \n", a, b);
  }
  ```

  a) Após a execução do código acima tem-se a seguinte saída:

    ```c
    3 2
    6 4
    ```

  b) Após a execução do código acima tem-se a seguinte saída:

    ```c
    3 2
    3 3
    ```

  c) Após a execução do código acima tem-se a seguinte saída:

    ```c
    3 2
    2 3
    ```

  d) Após a execução do código acima tem-se a seguinte saída:

    ```c
    3 2
    9 6
    ```

  e) Após a execução do código acima tem-se a seguinte saída:

    ```c
    3 2
    3 2
    ```

3. (BEPiD IFCE - 2014) Assinale a alternativa que mostra a saída apresentada no console após a execução do código em linguagem C abaixo.

  ```c
    int func(){
      static int x = 2;
      x += 5;
      return x;
    }

    int main(){
      printf("%d ", func());
      printf("%d ", func());
      printf("%d ", func());
      return 0;
    }
  ```

  a) 2 2 2

  b) x x x.

  c) 5 5 5

  d) 7 7 7

  e) 7 12 17

4. (BEPiD IFCE - 2014) Após a execução do trecho de código abaixo, qual será o valor da variável `q`?

  ```c
    int n = 28, d = 8, q;
    for (q = 0; n >= d; n = n – d){ q++; }
  ```

  a) 5

  b) 4

  c) 3

  d) A execução desse código resulta num erro.

  e) Não é possível determinar o valor de q após o laço.

5. (BEPiD IFCE - 2014) Marque a alternativa que apresenta corretamente a saída do console após a execução do código C abaixo.

  ```c
    int main(int argc, const char * argv[])
    {
      int vet[5] = {10, 20, 30, 40, 50};
      int i = 1;
      do
      printf("%d - ", vet[++i]);
      while (i<4);
      return 0;
    }
  ```

  a) 20 - 30 - 40 - 50 -

  b) 10 - 20 - 30 - 40 -

  c) 10 - 20 - 30 -

  d) 20 - 30 - 40 -

  e) 30 - 40 - 50 -

## Resoluções

1. Temos as seguintes afirmações:

  1. Se `p` é um ponteiro para `x`, o comando `(*p)++` incrementa `x`.

    Considere o seguinte trecho de código:

    ```c
    /* Inicializando x como sendo um inteiro de valor 10 (poderia ser de qualquer outro tipo/valor) */
    int x = 10;
    /* Declarando um ponteiro (de tipo igual a x) */
    int *p;
    /* Dizendo para onde p deve apontar */
    p = &x;
    /* Imprimindo o valor indicado por p (x) */
    printf("*p %d \n",*p);
    /* Imprimindo o valor de p (endereço de x) */
    printf("p = %d \n",p);
    /* Realizando a operação em questão */
    (*p)++;
    /* Imprimindo o valor indicado por p (x) */
    printf("(*p)++ = %d \n",*p);
    /* Imprimindo o valor de p (endereço de x) */
    printf("p = %d \n",p);
    /* Pode-se perceber que o valor agora é 11, pois foi incrementado o valor indicado por p e não o endereço para onde este aponta. */
    ```

  2. O operador `&` retorna o endereço da variável que a ele sucede.

    Como visto na seção sobre [operadores de endereço](material/linguagem-C/conteudo/operadores.md#de-endereço), o operador unário `&` retorna o endereço de memória que está localizado o valor da variavel contida no ponteiro - enquanto o operador `*` retorna o valor da variável que está localizada no ponteiro.

  3. `p[2]` equivale a `*(p+2)`.

    Ao manipularmos matrizes através de ponteiros, considere o seguinte trecho de código:

    ```c
    /* Declarando uma matriz de inteiros com 10 posições */
    int a[10];
    /* Declarando um ponteiro para a */
    int *pa;
    /* Passa o endereço inicial do vetor a para o ponteiro pa - é a mesma coisa de pa=a */
    pa=&a[0];
    /* Se pa aponta para um elemento particular de um vetor a, então por definição pa+1 aponta para o próximo elemento, e, em geral, pa-i  aponta para i elementos antes de pa e pa+i para i elementos depois.
    Se pa aponta para a[0] então: *(pa+1) aponta para a[1] e *(a+2) aponta para a[2]. */
    ```

  Logo, nossa resposta seria: *Todas as afirmaçõe estão certas.* (**Item E**)
