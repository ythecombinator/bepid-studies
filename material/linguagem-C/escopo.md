## Escopo

> Escopo é o nível em que um dado pode ser acessado.

Em C há dois níveis:

- `local`: Uma variável neste escopo pode ser acessada apenas dentro do bloco onde foi declarada - ou nos seus *sub-blocos* -, mas não fora dele (ou nos blocos que o contêm).

- `global`: Uma variável neste escopo pode ser acessada por qualquer parte do programa.

Ex.:

```c
 int a; /* Global */
 {
   int a; /* Local */
   int b; /* Local */
 }
 {
   int b; /* Local */
 }
```
