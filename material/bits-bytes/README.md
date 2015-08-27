# Bits

> A palavra *Bit* indica Binary Digit - ou **dígito binário** -, e é a menor unidade de informação que pode ser armazenada ou transmitida. Essa informação pode ser `0` ou `1`, que indicam se em cada frame da mamória do computador tem voltagem ou não tem voltagem.

# Bytes

Podemos fazer diversas combinações de `0`s e `1`s. Por exemplo:

| Bits | N° Combinações |                      Combinações                       |
|------|----------------|--------------------------------------------------------|
|    1 |              1 | `0` e `1`                                              |
|    2 |             4  | `00`, `01`, `10`e `11`                                 |
|    3 |            8   | `000`, `001`, `010`, `011`, `100`, `101`, `110`e `111` |

A partir daí podemos observar um padrão onde, ao adicionarmos um bit, dobramos o número de combinações possíveis. Matematicamente, podemos concluir que `n` bits resultam em `2 ** n` combinações.

Seguindo o raciocínio, se usássemos 8 bits, teríamos:

- `00000000` 1ª Combinação
- `00000001` 2ª Combinação
- `00000010` 3ª Combinação
- `00000011` 4ª Combinação
- `00000100` 5ª Combinação
- `00000101` 6ª Combinação
- `00000110` 7ª Combinação
- `00000111` 8ª Combinação
- ...

E isso são bytes: **agrupamentos de 8 bits**.

> Mas por que 8?

  Os primeiros computadores só podiam enviar 8 bits por vez; logo, era natural que o código passasse a ser escrito em conjuntos de 8 bits

> Mas o que um byte representa na prática?

  - Com 256 combinações, podemos guardar números de `0 a 255` - ou `-128 a 127`.

  - Os números relacionados às cores Vermelho/Verde/Azul (`RGB`) são armazenados cada um em um byte.

  - Letras e outros caracteres, sendo cada um indicado por um número de `0` a `255`, por meio de padrões como o [ASCII](http://www.ascii-code.com/).

    Ex.: Na frase *"O mundo é um lugar ruim."*, teríamos:

    | O  | m   | u   | n   | d   | o   | ... |
    | 79 | 109 | 117 | 110 | 100 | 111 | ... |

# Representação

> Um bit é representado com um *b* minúsculo enquanto um byte é representado com um *B* maiúsculo.

Ex.: *Kb* representa **kilobits**, e *KB* indica **kilobytes**.

# Equivalência

| `1` bit           | `0` ou `1`        |
| `8` bits          | `1` byte          |
| `1024` bytes      | `1` Kilobyte (KB) |
| `1024` Kilobytes  | `1` Megabyte (MB) |
| `1024` Megabytes  | `1` Gigabyte (GB) |
| `1024`  Gigabytes | `1` Terabyte (TB) |
