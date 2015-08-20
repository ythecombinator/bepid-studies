# Linguagem C

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


### Comentários

Comentários e Blocos de Comentários devem são colocados entre `/*` e `*/`. Ex.:

```c
main(){} /* Meu comentário */
```

### Instruções

Cada comando com uma instrução deve ser encerrada com `;`.

```c
{
  printf("Hello World");
}
```
