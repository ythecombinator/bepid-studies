## Listas Ligadas/Encadeadas (Linked Lists)

> É uma sequência de células onde cada célula contém uma chave de algum tipo e os endereços das células anterior e seguinte.

### Arrays X Listas Encadeadas

Diferente de um arranjo, onde a ordem linear dos elementos é determinada por índices, nas listas ligadas, esta é determinada por um ponteiro em cada.

### Classificações

#### Quanto ao *número de ponteiros por objeto*

##### Simplesmente Ligada

Cada célula contém um objeto de algum tipo e o endereço **apenas** da célula seguinte.

##### Duplamente Ligada

Cada célula contém um objeto de algum tipo e os endereços **das células anterior e seguinte**.

#### Quanto a *ordenação*

##### Ordenadas

A ordem linear da lista corresponde a **ordem linear das chaves** armazenadas em elementos da lista.

##### Não Ordenadas

Os elementos podem aparecer em qualquer ordem.

#### Quanto a sua *circularidade*

##### Normal

O ponteiro `anterior` do início da lista `= NIL` e o ponteiro `próximo` do fim da lista `= NIL`, indicando assim, que se tratam, respectivamente, dos primeiro e último elementos.

##### Circular

O ponteiro `anterior` do início da lista aponta pro final e o ponteiro `próximo` do fim da lista aponta para o início. Assim, esta pode ser vista como um **anel de elementos**.

### Operações

#### Busca/Search

Consiste em encontrar o primeiro elemento com a chave `k` na lista `L` e retornar seu ponteiro `x`. Ex.:

*SEARCH(L, k)*
```pascal
x ← início[L] // x recebe a posição inicial
while x ≠ NIL e chave[x] ≠ k // Enquanto não atingir o final e nem o valor desejado
  do x ← próximo[x] // x recebe a próxima posição
return x // Retorna o ponteiro pra chave desejada
```

#### Inserção/Insert

Consiste em inserir no início da lista o elemento apontado por `x` - com seu valor de chave `k` já definido - na lista `L`. Ex.:

*INSERT(L, x)*
```pascal
proximo[x] ← início[L] // O elemento seguinte a x recebe a posição inicial
if inicio[L] ≠ NIL // Se for uma lista circular
  then anterior[inicio[L]] ← x // Então o fim recebe x
início[L] ← x // Início recebe x
anterior[x] ← NIL // Indica que x é início
```

#### Eliminação/Delete

Consiste em remover o elemento apontado por `x` - com seu valor de chave `k` já definido - na lista `L`. Ex.:

*DELETE(L, x)*
```pascal
if anterior[x] ≠ NIL // Se não for o primeiro,
  then próximo[anterior[x]] ← [próximo[x]] // O atual recebe o próximo
  else início[L] ← próximo[x] // Caso contrário, o início passa a ser o próximo.
if próximo[x] ≠ NIL // Se não for o último,
  then anterior[próximo[x]] ← [anterior[x]] // O atual recebe o anterior
```
