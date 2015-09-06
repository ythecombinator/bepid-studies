# Linguagem C - Exercícios

> Exercícios do material sobre [Linguagem C](/material/linguagem-C).

## Questões

Questões presentes [aqui](https://pt.wikibooks.org/wiki/Programar_em_C/Exerc%C3%ADcios).

## Resoluções

### Questões

1.

  ```c
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
  ```

### Escrevendo programas

1.

  ```c
  #include <stdio.h>

  int main () {

    int x, y, maior;

    printf("Digite dois numeros: \n");
    scanf("%i%i", &x, &y);

    if (x > y)
      maior = x;
    else
      maior = y;

    printf("A soma e: %i \n O maior e %i ",  x + y , maior);

    return 0;
  }
  ```
2.

  ```c
  #include <stdio.h>

  int main () {

    double celsius, fahrenheit;

    printf("Digite um valor em graus Celsius: \n");

    scanf("%lf", &celsius);

    fahrenheit = celsius * 1.8 + 32;

    printf("%lf graus Celsius sao %lf graus Fahrenheit.", celsius, fahrenheit);

    return 0;
  }
  ```
