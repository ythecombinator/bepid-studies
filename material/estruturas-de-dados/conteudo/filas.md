## Filas

> Em resumo, uma fila é uma estrutura de dados que admite remoção de elementos e inserção de novos elementos, onde adiciona-se itens no fim e remove-se do início.

Uma fila é uma estrutura de dados que admite remoção de elementos e inserção de novos elementos; sujeita à seguinte regra de operação:  sempre que houver uma remoção, o elemento removido é o que está na estrutura há mais tempo. Em outras palavras, *o primeiro elemento a ser inserido, será o primeiro a ser retirado*, ou seja, **adiciona-se itens no fim e remove-se do início**. Essa regra é conhecida pela sigla *FIFO* (*First-In-First-Out*).

### Analogias

> Pode-se estabelecer analogias com a maioria de filas de pessoas que temos hoje em dia: bancos, lojas, mercados etc. A diferença é que os elementos não se movem na fila, conforme o primeiro elemento é retirado. Isto seria muito custoso para o computador. O que se faz na realidade é indicar quem é o primeiro. Ex.:

- Fila de pessoas esperando por atendimento no caixa de um banco.

### Implementação

A implementação de filas pode ser realizada através de *vetores* ou *listas encadeadas*.

### Operações

#### Criação da fila

Consiste em informar a capacidade, no caso de implementação sequencial.

#### Enfileirar/Enqueue

Consiste em colocar, ou inserir um objeto na fila. Ex.:

*ENQUEUE(Q, x)*
```pascal
Q[fim[Q]] ← x // Insere x no final
if fim[Q] = comprimento[Q] // Se a fila tem só uma elemento,
  then fim[Q] ← 1 // // O fim passa para a posição 1
  else fim[Q] ← fim[Q] + 1 // Caso contrário, o fim será a próxima posição
```

#### Desenfileirar/Dequeue

Oposto a anterior, consiste em remover um objeto na fila. Ex.:

*DEQUEUE(Q)*
```pascal
x ← Q[inicio[Q]] // O ponteiro recebe o elemento do inicio
if inicio[Q] = comprimento[Q] // Se a fila tem só uma elemento,
  then inicio[Q] ← 1 // O inicio passa para a posição 1
  else inicio[Q] ← inicio[Q] + 1 // Caso contrário, o inicio será a próxima posição
```

#### isEmpty

Verificar se a fila está vazia. Ex.:

*isEmpty(Q)*
```pascal
if fim[Q] = 0
  then return true
  else return false
 ```

#### isFull

Verificar se a fila está cheia. Ex.:

*isFull(Q)*
```pascal
if fim[Q] = 0
  then return false
  else return true
 ```

#### Mostrar a fila

Exibir elementos presentes na fila.
