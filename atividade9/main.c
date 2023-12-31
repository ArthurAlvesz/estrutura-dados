#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(int argc, char* argv[]) {
    int ordenar_lista;  

    printf("Deseja criar a lista ordenada (1) ou nao ordenada (0)? ");
    scanf("%d", &ordenar_lista);

    
    Lista* lista = lista_criar();

    FILE* file = fopen("1kk_rand_float.csv", "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    float valor;
    int num_elementos = 0;

    while (fscanf(file, "%f", &valor) == 1) {
        No* novo_no = no(valor, NULL);

        
        lista_inserir_no(lista, novo_no, ordenar_lista);

        num_elementos++;
    }

    fclose(file);

   
    printf("Lista: ");
    lista_imprimir(lista);
    printf("\n");


    lista_liberar(lista);


    

    return 0;
}
