## Bibliotecas

> Uma biblioteca é um arquivo contendo um conjunto de funções (trechos de código) já implementados e que podem ser reutilizados.

No C, o comando `#include` é utilizado para declarar as bibliotecas que serão utilizadas pelo programa. Este permite duas sintaxes:

- `#include <nome_da_biblioteca>`: A biblioteca será procurada nos caminhos de procura pré-especificados do compilador.

  > Usa-se essa sintaxe quando estamos incluindo uma biblioteca que é própria do sistema, como as bibliotecas `stdio.h` e `stdlib.h`

- `#include "nome_da_biblioteca"`: Procurará pela biblioteca no mesmo diretório onde se encontra o programa.

  > Pode-se ainda optar por informar o nome do arquivo com o caminho completo - ou seja, em qual diretório ele se encontra.

Ex.:

  ```c
     #include <stdio.h>
     #include <stdlib.h>
     #include "D:\caminho\pra\minha_biblioteca.h"
  ```
