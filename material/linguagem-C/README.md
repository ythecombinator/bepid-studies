# Linguagem C

> O C é uma linguagem de programação multi-paradigma (*estruturada*, *imperativa*, *procedural*), estática e fracamente tipada, nascida na década de 70. Seu inventor, Dennis Ritchie, implementou-o pela primeira vez rodando o sistema operacional UNIX. O C È derivado de uma outra linguagem: o B, criado por Ken Thompson. O B, por sua vez, veio da linguagem BCPL, inventada por Martin Richards.

> O C È uma linguagem de programação genérica, que pode ser utilizada para a criação de programas diversos.

## Tabela de Conteúdos

- [Sintaxe](#sintaxe)
  - [Identificadores](#identificadores)
  - [Tipos](#tipos)
  - [Operadores](#operadores)
  - [Comentários](#comentários)
  - [Instruções](#instruções)
- [Referências]()

## Sintaxe

Consiste de regras detalhadas para cada construção válida. Para que o programa criado seja executado de maneira correta, é necessário seguir a sintaxe própria da linguagem, relacionadas com os tipos, as declarações, as funções e as expressões.

### Identificadores

São nomes usados para se fazer referência a variáveis, funções, rótulos e vários outros objetos definidos pelo usuário. Estes:

- Devem iniciar por uma letra ou por um `_` (underscore);
- A partir do segundo caracter, podem conter letras, números e underscore;
- Devem usar nomes significativos dentro do contexto do programa;
- Devem ser diferentes dos comandos da linguagem;
- Devem ter no máximo 31 caracteres;

> Obs. 1: C é uma linguagem case-sensitive, ou seja, faz diferença entre nomes com letras maiúsculas e nomes com letras minúsculas. Ex.: `Pessoa` e `pessoa` são diferentes.

> Obs. 2: É válido o uso de *CamelCase*; uma prática de escrever palavras compostas ou frases, onde cada palavra é iniciada com Maiúsculas e unidas sem espaços. Ex.: `nomeDaMinhaVariável`.

### Tipos

O C tem os seguintes tipos fundamentais:

#### `char`

O valor armazenado é um caractere. Caracateres geralmente são armazenados em códigos (em geral o código *ASCII*).

#### `int`

Número inteiro é o tipo padrão e o tamanho do conjunto que pode ser representado normalmente depende da máquina em que o programa está rodando.

#### `float`

Número em ponto flutuante de precisão simples (Números reais).

#### `double`

Número em ponto flutuante de precisão dupla.

#### `void`

Este tipo serve para indicar que um resultado não tem um tipo definido.

> Uma das aplicações deste tipo em C é criar um tipo vazio que pode posteriormente ser modificado para um dos tipos anteriores.

#### `bool`

Serve para indicar true (verdadeiro) ou false (falso), utiliza 1 byte.

#### Modificadores

Modificadores podem ser aplicados a estes tipos. Estes modificadores são palavras que alteram o tamanho do conjunto de valores que o tipo pode representar. Podem ser:

##### de Tamanho

- `short`: Diminui o espaço necessário para guardar a variável (diminuindo também a gama de valores que esta pode assumir).

  > Só pode ser usado com `int`.

- `long`: Aumenta o espaço tomado pela variável, e portanto aumenta seu valor máximo e/ou sua precisão.

  > Pode ser usado com `int` e `double`.

##### de Sinal

- `signed`: Indica que o número deve ser guardado com sinal; ou seja, serão permitidos valores positivos e negativos.

  > Esse é o padrão, portanto esse modificador não é muito usado.

- `unsigned`: Diz que o número deve ser guardado sem sinal. Com isso, o valor máximo da variável aumenta, já que não teremos mais valores negativos. Ex.: Com uma variável `char` podemos guardar valores de -128 a 127, mas com uma variável `unsigned char`temos valores de 0 a 255.

> Obs. 1: Para usar esses modificadores, devemos colocá-los antes do nome do tipo da variável, sendo que o modificador de sinal deve vir antes do modificador de tamanho caso ambos sejam usados. Por exemplo:
```c
unsigned char c;
short int valor;
unsigned long int resultado;
```

> Obs. 2: Você pode abreviar `short int` e `long int` para simplesmente `short` e `long`, respectivamente.

#### Em resumo:

|        Tipo        | Num de bits | Formato (`scanf`) |           Intervalo            |
|--------------------|-------------|-------------------|--------------------------------|
| char               | 8           | %c                | -128 a 127                     |
| unsigned char      | 8           | %c                | 0 a 255                        |
| signed char        | 8           | %c                | -128 a 127                     |
| int                | 16          | %i                | -32.768 a 32.767               |
| unsigned int       | 16          | %u                | 0 a 65.535                     |
| signed int         | 16          | %i                | -32.768 a 32.767               |
| short int          | 16          | %hi               | -32.768 a 32.767               |
| unsigned short int | 16          | %hu               | 0 a 65.535                     |
| signed short int   | 16          | %hi               | -32.768 a 32.767               |
| long int           | 32          | %li               | -2.147.483.648 a 2.147.483.647 |
| signed long int    | 32          | %li               | -2.147.483.648 a 2.147.483.647 |
| unsigned long int  | 32          | %lu               | 0 a 4.294.967.295              |
| float              | 32          | %f                | 3,4E-38 a 3.4E+38              |
| double             | 64          | %lf               | 1,7E-308 a 1,7E+308            |
| long double        | 80/128      | %Lf               | 3,4E-4932 a 3,4E+4932          |

### Operadores

#### de Atribuição

Comum à maioria das linguagens, este operador (`=`) faz a variável da esquerda assumir o valor da variável, constante ou expressão da direita. Exemplo:

```c
var = var + 2;
```

#### Aritméticos

| Operador  |   Descrição   |
|-----------|---------------|
| *         | Multiplicação |
| /         | Divisão       |
| %         | Resto         |
| +         | Adição        |
| -         | Subtração     |

Ex.:

```c
main(){
  int x,y; /* Declarando as variáveis x e y */
  x=10; y=3; /* Atribuindo valores a ambas */
  printf("%d\n",x/y); /* Imprimindo o quociente de x/y
  printf("%d\n",x%y); /* Imprimindo o resto de x/y
}
```

#### Relacionais

Avaliam o relacionamento entre duas expressões e dão o resultado `1` se verdadeiro ou `0` se falso.

| Operador  |   Descrição    |
|-----------|----------------|
| <         | Menor que      |
| <=        | Menor ou igual |
| >         | Maior que      |
| >=        | Maior ou igual |
| ==        | Igual          |
| !=        | Diferente      |

Ex.:

```c
main(){
  int x,y,produto; /* Declarando as variáveis x, y e produto */
  x = 2; y = 3; produto = x * y /* Atribuindo valores a ambas */
  if (produto > 0) /* Se o produto for > 0, imprima "É maior" */
    printf("É maior");
}
```

> Deve ser lembrado que, mesmo sem operadores, a linguagem C considera verdadeiro qualquer valor não nulo. Ex.:
```c
main(){
  var = 2;
  if(-50)
    var = 3; /* O valor de var será 3. */
}
```

#### Compostos

O operador de igualdade (`=`) pode ser combinado com outros para simplificar expressões.

| Operador  | Equivalência  |    Descrição    |
|-----------|---------------|-----------------|
| a *= b    | a = a * b     | Multiplicação   |
| a /= b    | a = a / b     | Divisão         |
| a %= b    | a = a % b     | Resto           |
| a += b    | a = a + b     | Adição          |
| a -= b    | a = a - b     | Subtração       |
| a <<= b   | a = a << b    | Desloc esquerda |
| a >>= b   | a = a >> b    | Desloc direita  |
| a &= b    | a = a & b     | E               |
| a ^= b    | a = a ^ b     | OU exclusivo    |
| a |= b    | a = a | b     | OU inclusivo    |

> Obs.: O outro operador deve sempre ser colocado à esquerda do sinal `=`.

#### de Incremento e Decremento

> Se inseridos antes, modificam o valor antes da expressão ser usada e, se inseridos depois, modificam depois do uso.

| Operador  | Descrição       |
|-----------|-----------------|
| ++        | Incremento de 1 |
| --        | Decremento de 1 |

Ex. 1:

```c
x = 2;
var = ++x; /* O valor de var será 3 e o de x será 3 */
```

Ex. 2:

```c
x = 2;
var = x++; /* O valor de var será 3 e o de x será 2 */
```

#### de Bits

- `~` (complemento): Atuando em apenas um valor, muda os bits de valor 1 para 0 e vice-versa. Ex.: Se a variável `x` tem o valor 170 (10101010), após `~var`, ela terá 85 (01010101).

- `<<` (deslocamento à esquerda): Desloca, para a esquerda, os bits do operando esquerdo no valor dado pelo operando direito.
  > Equivale à multiplicação pela potência de 2 dada por este último.

  Ex.: Se a variável `x` tem o valor 3 (00000011), após `x << 2`, ela será 12 (00001100) - ou 3 * 2^2.

- `>>` (deslocamento à direita): Desloca, para a direita, os bits do operando esquerdo no valor dado pelo operando direito.
  > Equivale à divisão pela potência de 2 dada por este último.

  Ex.: Se a variável `x` tem o valor 12 (00001100), após `x >> 2`, terá 3 (00000011) - 12 / 2^2.

- `&` (E): Realiza a função lógica *E* em cada bit correspondende. Assim
  - `= 1` Se ambos os bits correspondentes = 1.
  - `= 0` Se ambos os bits correspondentes ≠ 1.

  Ex.: Se a variável `x` tem o valor 12 (00001100) e fazendo a operação com 6 (00000110), o resultado, de `x & 6`, será 4 (00000100).

- `^` (OU exclusivo): Realiza a função lógica *XOU* em cada bit correspondende. Assim
  - `= 1` Se os bits correspondentes forem diferentes.
  - `= 0` Se ambos os bits correspondentes forem iguais.

  Ex.: Se a variável `x` tem o valor 12 (00001100), fazendo a operação com 6 (00000110), o resultado, `x ^ 6`, será 10 (00001010).

- `|` (OU inclusivo): Realiza a função lógica *OU* em cada bit correspondende. Assim
  - `= 1` Se um ou ambos os bits correspondentes nos operandos = 1.
  - `= 0` Se os bits correspondentes forem 0.

  Ex.: Se a variável `x` tem o valor 12 (00001100), fazendo a operação com 6 (00000110), o resultado, `x | 6`, será 14 (00001110).

#### Lógicos

> São usados normalmente com [expressões booleanas](material/algebra-booleana), isto é, expressões que retornam verdadeiro ou falso (1 ou 0), para fins de testes em declarações condicionais.

- `&&` (E lógico): Realiza a função lógica *E* entre os operandos. Assim
  - `= 1` Se ambos os operandos são verdadeiros.
  - `= 0` Se pelo menos um for falso.

  Ex.:
  ```c
  main(){
    a = 2; b = 3; var
    if(a < b && b > 1)
      var = 3; /* O valor de var será 3. */
  }
  ```

- `||` (OU lógico): Realiza a função lógica *OU* entre os operandos. Assim
  - `= 1` Se um ou ambos os operandos são verdadeiros.
  - `= 0` Se ambos os operandos são falsos.

  Ex.:
  ```c
  main(){
    a = 2; b = 3; var;
    if(a > b || b > 4)
      var = 3; /* O valor de var será 3. */
  }
  ```

- `!` (NÃO lógico): Realiza a função lógica *NÃO* em um operando. Assim
  - `= 1` Se ele é falso.
  - `= 0` Se ele é verdadeiro.

  Ex.:
  ```c
  main(){
    a = 0; b;
    if( !a )
      b = 3; /* O valor de var será 3. */
  }
  ```

#### Condicional/Ternário

Este operador (`?`) substitui declarações tipo `if-then-else`. Tem a forma genérica `var = (condição) ? (verdadeiro) : (falso)`. Ex.:

```c
main(){
  x = (var==0) ? 2 : 3;
}
```

Equivale a:

```c
main(){
  if(var==0)
    x = 2;
  else
    x = 3;
}
```

#### de Endereço

> São usados basicamente com ponteiros. Leia mais sobre eles na seção de [Ponteiros]().

- `& (endereço do operando)`
- `* (valor no endereço do operando)`

#### Vírgula

A vírgula (`,`) pode ser um operador onde as expressões são executadas da esquerda para a direita. Ex.:
```c
main(){
  var = a, a = b; /* Primeiro var assume o valor de a e, depois, a assume o valor de b. */
}
```

#### `cast`

É usado para forçar uma expressão a ser de um determinado tipo. Tem a forma genérica `(tipo)expressão`. Ex.:

```c
main(){
  int i=1;
  printf("%d/3 é: %f",i,(float) i/3);
}
```

#### `sizeof`

Retorna o número de bytes ocupados pelo operando, que pode ser uma variável ou um tipo genérico de dado. Tem a forma genérica `sizeof(variável/tipo)`. Ex.:

```c
main(){
  sizeof(float); /* Retorna 4, que é o número de bytes de dados tipo float. (= 32 bits) */
  char str[] = "valor";
  sizeof (str); /* Retorna 6 (5 caracteres mais o nulo do final da string). */
}
```

### Comentários

Comentários na linha podem ser iniciados por `//` e blocos de comentários devem são colocados entre `/*` e `*/`. Ex.:

```c
main(){} // Minha função main
/* Meu
comentário
de
várias
linhas */
```

> Muitos compiladores aceitam `//` como marca de início de comentários, mas essa convenção não está de acordo com a norma ANSI (American National Standards Institute) para a linguagem C. Logo, recomenda-se o uso de `/*` e `*/` para comentários em linha única e blocos.

### Instruções

Cada comando com uma instrução deve ser encerrada com `;`.

```c
{
  printf("Hello World");
}
```
