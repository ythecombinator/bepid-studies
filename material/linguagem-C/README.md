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
