# Álgebra Booleana - Exercícios

> Exercícios do material sobre [Linguagem C](/material/linguagem-C).

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

> Após a resolução, conferir [respostas](respostas.md).
