## Pilhas (Stacks)

> Em resumo, uma pilha é uma estrutura de dados que admite remoção de elementos e inserção de novos elementos, onde adiciona-se itens no fim e remove-se do fim.

Uma pilha é uma estrutura de dados que admite remoção de elementos e inserção de novos elementos; sujeita à seguinte regra de operação:  sempre que houver uma remoção, o elemento removido é o mais recentemente inserido. Em outras palavras, *o primeiro elemento a ser inserido, será o último a ser retirado*, ou seja, **adiciona-se itens no fim e remove-se do fim**. Essa regra é conhecida pela sigla *LIFO* (*Last-In-First-Out*).

### Analogias

> Pode-se estabelecer analogias com a maioria de pilhas de objetos que temos hoje em dia: pratos, CDs, livros etc. Ex.:

- Pilha de pratos usados num restaurante.

### Implementação

A implementação de pilhas pode ser realizada através de *vetores* ou *listas encadeadas*.

### Operações

#### Criação da pilha

Consiste em informar a capacidade, no caso de implementação sequencial.

#### Inserir/Push

Consiste em colocar, ou inserir um objeto na pilha. Ex.:

*PUSH(S, x)*
```pascal
topo[S] ← topo[S] + 1
S[topo[S]] ← x
```

#### Remover/Pop

Oposto a anterior, consiste em remover um objeto na pilha. Ex.:

*POP(S)*
```pascal
if isEmpty(S)
  then error "Fila vazia: underflow."
  else topo[S] ← topo[S] - 1
    return S[topo[S] ]
 ```

#### isEmpty

Verificar se a pilha está vazia. Ex.:

*isEmpty(S)*
```pascal
if topo[S] = 0
  then return true
  else return false
 ```

#### isFull

Verificar se a pilha está cheia. Ex.:

*isFull(S)*
```pascal
if topo[S] = 0
  then return false
  else return true
 ```

#### Mostrar a pilha

Exibir elementos presentes na pilha. Ex.:
