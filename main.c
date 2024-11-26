
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[100];
    char isbn[20];
    float preco;
    int score;
    char editora[100];
} Livro;

typedef Livro* pLivro;

pLivro alocarLivros(int qtde) {
    return (pLivro)malloc(qtde * sizeof(Livro));
}

void lerLivros(pLivro livros, int qtde) {
    for (int i = 0; i < qtde; i++) {
        printf("Título: ");
        getchar();
        fgets(livros[i].nome, sizeof(livros[i].nome), stdin);
        livros[i].nome[strcspn(livros[i].nome, "\n")] = '\0';

        printf("ISBN: ");
        fgets(livros[i].isbn, sizeof(livros[i].isbn), stdin);
        livros[i].isbn[strcspn(livros[i].isbn, "\n")] = '\0';

        while (1) {
            printf("Preço: ");
            if (scanf("%f", &livros[i].preco) == 1 && livros[i].preco > 0) break;
            while (getchar() != '\n');
        }

        while (1) {
            printf("Score: ");
            if (scanf("%d", &livros[i].score) == 1 && livros[i].score >= 0 && livros[i].score <= 10) break;
            while (getchar() != '\n');
        }

        printf("Editora: ");
        getchar();
        fgets(livros[i].editora, sizeof(livros[i].editora), stdin);
        livros[i].editora[strcspn(livros[i].editora, "\n")] = '\0';
    }
}

void exibirLivros(pLivro livros, int qtde) {
    for (int i = 0; i < qtde; i++) {
        printf("Livro %d:\n", i + 1);
        printf("Título: %s\n", livros[i].nome);
        printf("ISBN: %s\n", livros[i].isbn);
        printf("Preço: R$ %.2f\n", livros[i].preco);
        printf("Score: %d/10\n", livros[i].score);
        printf("Editora: %s\n", livros[i].editora);
    }
}

void liberarLivros(pLivro livros) {
    free(livros);
}

int main() {
    int qtde;
    printf("Quantos livros? ");
    while (scanf("%d", &qtde) != 1 || qtde <= 0) {
        while (getchar() != '\n');
    }

    pLivro livros = alocarLivros(qtde);

    if (livros == NULL) {
        return 1;
    }

    lerLivros(livros, qtde);
    exibirLivros(livros, qtde);
    liberarLivros(livros);

    return 0;
}


