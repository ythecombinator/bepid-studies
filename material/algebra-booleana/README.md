# Álgebra Booleana

> Em síntese, é um conjunto de estruturas algébricas, operadores e axiomas que são assumidos verdadeiros sem necessidade de prova. Em nosso caso, seu estudo objetiva a manipulação algébrica de preposições lógicas.

## Postulados

São princípios que podem ser provados de forma imediata, baseados nas funções lógicas básicas (*AND*, *OR* e *NOT*). São eles:

- Se `A = 0` então `/A = 1`
- Se `A = 1` então `/A = 0`


- `//A = A`


- Baseados nas funções **OU** e **NÃO**:

  - `0 + 0 = 0`
  - `0 + 1 = 1`
  - `1 + 0 = 1`
  - `1 + 1 = 1`
  - `A + A = A`
  - `A + 0 = A`
  - `A + 1 = 1`
  - `A + /A = 1`


- Baseados nas funções **E** e **NÃO**:

  - `0 . 0 = 0`
  - `0 . 1 = 0`
  - `1 . 0 = 0`
  - `1 . 1 = 1`
  - `A . A = A`
  - `A . 0 = 0`
  - `A . 1 = A`
  - `A . /A = 0`

## Propriedades

- Comutativa

  - `A + B = B + A`
  - `A . B = B . A`

- Associativa

  - `A + (B + C) = (A + B) + C`
  - `A . (B . C) = (A . B) . C `

- Distributiva

  - `A + (B . C) = (A + B) . (A + C)`
  - `A . (B + C) = A . B + A . C`

## Teoremas

- Morgan

  - `/(A + B) = /A . /B`
  - `/(A . B) = /A + /B`

- Absorção

  - `A + A . B = A`
  - `A + B . A = A + B`

## Simbologia usada

- `/`: Função **NÃO**
- `+`: Função **OU**
- `.`: Função **E**

## Execícios

Após o entendimento, resolver [execícios](execicios.md).
