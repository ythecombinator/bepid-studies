## Conjuntos

### Introdução

> Conjuntos **(Matmática X Computação)**

O conceito de conjuntos é fundamental em ambas a Matematica e a Ciência da Computação. Contudo, enquanto que conjuntos matematicos não mudam, conjuntos manipulados por algoritmos computacionais podem crescer, diminuir e sofrer modificações com o passar do tempo. Aos conjuntos modificados por algoritmos nomeamos **Conjuntos Dinâmicos**.

### Operações

Sobre um **Conjunto Dinâmico**, podemos realizar operações de dois tipos:

#### Consultas

Simplesmente retornam informações sobre o conjunto. São elas:

##### Busca(S,k)

Retorna um ponteiro `x` de um elemento em `S`, tal que `chave[x]` = `k`, ou `NIL` se `x ∉ S`.

##### Mínimo(S)

Retorna um ponteiro do elemento em `S` - sendo S um conjunto totalmente ordenado - com a menor chave.

##### Máximo(S)

Retorna um ponteiro do elemento em `S` - sendo S um conjunto totalmente ordenado - com a maior chave.

##### Sucessor(S, x)

Dado um elemento `x` em `S` - sendo S um conjunto totalmente ordenado -, retorna um ponteiro para o maior elemento seguinte em `S` ou `NIL` se `Máximo(S) = x`

##### Predecessor(S, x)

Dado um elemento `x` em `S` - sendo S um conjunto totalmente ordenado -, retorna um ponteiro para o menor elemento seguinte em `S` ou `NIL` se `Mínimo(S) = x`

#### Modificação

##### Inserir (S, x)

Aumenta o conjunto `S` com o elemento apontado por `x`.

##### Remover (S, x)

Remove o elemento apontado por `x` do conjunto `S`.
