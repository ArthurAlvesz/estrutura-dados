<<<<<<< HEAD
#ifndef FILA_H
#define FILA_H

#define MAX_IMPRESSAO 100

typedef struct TarefaImpressao {
    int numeroPaginas;
    char nomeDocumento[50];
} TarefaImpressao;

typedef struct FilaImpressao {
    TarefaImpressao tarefas[MAX_IMPRESSAO];
    int frente, tras;
} FilaImpressao;

void enfileirar(FilaImpressao *fila, TarefaImpressao tarefa);
void desenfileirar(FilaImpressao *fila);

#endif
=======
#ifndef FILA_H
#define FILA_H

#define MAX_IMPRESSAO 100

typedef struct TarefaImpressao {
    int numeroPaginas;
    char nomeDocumento[50];
} TarefaImpressao;

typedef struct FilaImpressao {
    TarefaImpressao tarefas[MAX_IMPRESSAO];
    int frente, tras;
} FilaImpressao;

void enfileirar(FilaImpressao *fila, TarefaImpressao tarefa);
void desenfileirar(FilaImpressao *fila);

#endif
>>>>>>> e6430b2d503f719ab1417a63554e1a30832f30fe
