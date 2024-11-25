[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/foAntB3b)
[![Work in MakeCode](https://classroom.github.com/assets/work-in-make-code-8824cc13a1a3f34ffcd245c82f0ae96fdae6b7d554b6539aec3a03a70825519c.svg)](https://classroom.github.com/online_ide?assignment_repo_id=17320905&assignment_repo_type=AssignmentRepo)

# Exercício: Criando e Manipulando a Struct `Livro`

## Objetivo
Praticar a definição e manipulação de structs em um programa simples, utilizando uma estrutura que representa informações de um livro. 

---

## Enunciado

Implemente uma struct chamada `Livro` que deve armazenar as seguintes informações sobre um livro:

- **nome**: o título do livro (string);
- **isbn**: número identificador do livro (string);
- **preco**: preço do livro (float);
- **score**: avaliação do livro, de 0 a 10 (inteiro);
- **editora**: nome da editora (string).

A partir dessa struct, implemente as seguintes funções no programa:

### 1. **Alocar Memória**
- `pLivro livro_aloc(int qtde);`
  - Essa função deve alocar dinamicamente um vetor de structs `Livro` para armazenar `qtde` livros e retornar o ponteiro para o vetor alocado.

### 2. **Ler Dados**
- `void livro_ler(pLivro livros, int qtde);`
  - Essa função deve permitir que o usuário insira os dados de `qtde` livros, preenchendo os campos de cada livro no vetor.

### 3. **Exibir Dados**
- `void livro_exibe(pLivro livros, int qtde);`
  - Essa função deve exibir as informações de todos os livros armazenados no vetor, formatadas adequadamente.

### 4. **Liberar Memória**
- `void livro_desaloca(pLivro livros);`
  - Essa função deve liberar a memória alocada para o vetor de livros.

---

## Exemplos de Uso

### Entrada de dados:
```
2
Estruturas de Dados em Ação
978-1234567890
89.90
9
TechBooks
Algoritmos Descomplicados
978-0987654321
59.90
8
CodePress
```

### Saída formatada:
```
Livro 1:
Nome: Estruturas de Dados em Ação
ISBN: 978-1234567890
Preço: R$ 89.90
Score: 9
Editora: TechBooks

Livro 2:
Nome: Algoritmos Descomplicados
ISBN: 978-0987654321
Preço: R$ 59.90
Score: 8
Editora: CodePress
```

---