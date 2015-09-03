## Operadores

### de Atribuição

Comum à maioria das linguagens, este operador (`=`) faz a variável da esquerda assumir o valor da variável, constante ou expressão da direita. Exemplo:

```c
var = var + 2;
```

### Aritméticos

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

### Relacionais

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

### Compostos

O operador de igualdade (`=`) pode ser combinado com outros para simplificar expressões.

| Operador    | Equivalência    |    Descrição    |
|-------------|-----------------|-----------------|
| `a *= b`    | `a = a * b`     | Multiplicação   |
| `a /= b`    | `a = a / b`     | Divisão         |
| `a %= b`    | `a = a % b`     | Resto           |
| `a += b`    | `a = a + b`     | Adição          |
| `a -= b`    | `a = a - b`     | Subtração       |
| `a <<= b`   | `a = a << b`    | Desloc esquerda |
| `a >>= b`   | `a = a >> b`    | Desloc direita  |
| `a &= b`    | `a = a & b`     | E               |
| `a |= b`    | `a = a | b`     | OU              |
| `a ^= b`    | `a = a ^ b`     | OU exclusivo    |

> Obs.: O outro operador deve sempre ser colocado à esquerda do sinal `=`.

### de Incremento e Decremento

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

### de Bits

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

- `|` (OU): Realiza a função lógica *OU* em cada bit correspondende. Assim
  - `= 1` Se um ou ambos os bits correspondentes nos operandos = 1.
  - `= 0` Se os bits correspondentes forem 0.

  Ex.: Se a variável `x` tem o valor 12 (00001100), fazendo a operação com 6 (00000110), o resultado, `x | 6`, será 14 (00001110).

- `^` (OU exclusivo): Realiza a função lógica *XOR* em cada bit correspondende. Assim
  - `= 1` Se os bits correspondentes forem diferentes.
  - `= 0` Se ambos os bits correspondentes forem iguais.

  Ex.: Se a variável `x` tem o valor 12 (00001100), fazendo a operação com 6 (00000110), o resultado, `x ^ 6`, será 10 (00001010).

### Lógicos

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

### Condicional/Ternário

Este operador (`?`) substitui declarações tipo `if-then-else`. Tem a forma genérica `var = (condição) ? (expressão caso seja verdadeiro) : (expressão caso seja falso)`. Ex.:

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

### de Endereço

> São usados basicamente com ponteiros. Leia mais sobre eles na seção de [Ponteiros]().

- `& (endereço do operando)`
- `* (valor no endereço do operando)`

### Vírgula

A vírgula (`,`) pode ser um operador onde as expressões são executadas da esquerda para a direita. Ex.:
```c
main(){
  var = a, a = b; /* Primeiro var assume o valor de a e, depois, a assume o valor de b. */
}
```

### `cast`

É usado para forçar uma expressão a ser de um determinado tipo. Tem a forma genérica `(tipo)expressão`. Ex.:

```c
main(){
  int i=1;
  printf("%d/3 é: %f",i,(float) i/3);
}
```

### `sizeof`

Retorna o número de **bytes** (*!= bits*) ocupados pelo operando, que pode ser uma variável ou um tipo genérico de dado. Tem a forma genérica `sizeof(variável/tipo)`. Ex.:

```c
main(){
  sizeof(float); /* Retorna 4, que é o número de bytes de dados tipo float. (= 32 bits) */
  char str[] = "valor";
  sizeof (str); /* Retorna 6 (5 caracteres mais o nulo do final da string). */
}
```
