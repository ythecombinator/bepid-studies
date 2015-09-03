## Variáveis

> São nomes que se referem a lugares na memória onde são guardados valores.

### Declaração

> Para utilizar uma variável, devemos antes declarar ela, ou seja, requisitar o espaço necessário para essa variável.

Ao declararmos uma variável, não apenas estamos reservando um espaço de memória, como também estamos associando um nome a ele, o [identificador](#identificadores). Ao invés de utilizarmos o endereço da variável na memória, que seria geralmente notado na forma hexadecimal/binária, referimo-nos ao endereço apenas pelo seu nome.

Genericamente, para declarar uma variável, usamos a seguinte instrução:

`tipo_da_variável nome_da_variável;`

Ex.:

`int x;`

> É possível declarar mais de uma variável de um mesmo tipo em uma única instrução, separando os nomes por vírgulas.
  Ex.:
  ```c
  int x, y, z;
  ```

### Atribuição

Para atribuirmos um valor a uma variável, usamos o operador [`=`](#de-atribuição). Genericamente, para atribuir um valor a uma variável, usamos a seguinte instrução:

`nome_da_variável = valor_da_variavél;`

Ex.:

`x = 5;`

> É possível atribuir valores a mais de uma variável de um mesmo tipo em uma única instrução, separando os nomes por vírgulas.
  Ex.:
  ```c
  x = 5, y = 6, z = 7;
  ```

### Inicialização

Ocorre quando atribuimos um valor a uma variável ao mesmo tempo que ela é declarada. Genericamente, a atribuição tem o seguinte formato:

`tipo_da_variável nome_da_variável = valor_da_variavél;`

Ex.:

`int x = 5;`

> É possível inicializar mais de uma variável de um mesmo tipo em uma única instrução, separando os nomes por vírgulas.
  Ex.:
  ```c
  int x = 5, y = 6, z = 7;
  ```
