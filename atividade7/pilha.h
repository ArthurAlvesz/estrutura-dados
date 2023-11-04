<<<<<<< HEAD
#ifndef PILHA_H
#define PILHA_H

#define MAX_LIVROS 10

typedef struct Livro {
    char titulo[50];
    char autor[50];
    int anoPublicacao;
} Livro;

typedef struct Estante {
    Livro pilha[MAX_LIVROS];
    int topo;
} Estante;

void inicializarEstante(Estante *estante);
int estaVazia(Estante *estante);
int estaCheia(Estante *estante);
void empilharLivro(Estante *estante, Livro livro);
void desempilharLivro(Estante *estante);

#endif
=======
#ifndef PILHA_H
#define PILHA_H

#define MAX_LIVROS 10

typedef struct Livro {
    char titulo[50];
    char autor[50];
    int anoPublicacao;
} Livro;

typedef struct Estante {
    Livro pilha[MAX_LIVROS];
    int topo;
} Estante;

void inicializarEstante(Estante *estante);
int estaVazia(Estante *estante);
int estaCheia(Estante *estante);
void empilharLivro(Estante *estante, Livro livro);
void desempilharLivro(Estante *estante);

#endif
>>>>>>> e6430b2d503f719ab1417a63554e1a30832f30fe
