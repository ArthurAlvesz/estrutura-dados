#include <stdio.h>
#include <stdlib.h>
#include "tabela_hash.h"

int main() {
    put("Egito", "Cairo");
    put("Inglaterra", "Londres");
    put("Espanha", "Madrid");
    put("Argentina", "Buenos Aires");

    char* capital = get("Egito");
    if (capital != NULL) {
        printf("A capital do Egito e: %s\n", capital);
    } else {
        printf("Egito nao encontrado na tabela.\n");
    }
    capital = get ("Inglaterra");
    if (capital!=NULL){
            printf ("A capital da Inglaterra e: %s\n", capital);
    }else{
            printf ("Inglaterra nao encontrado na tabela.\n");
    }
 capital = get ("Espanha");
    if (capital!=NULL){
            printf ("A capital da Espanha e: %s\n", capital);
    }else{
            printf ("Espanha nao encontrado na tabela.\n");
    }

    capital = get("Argentina");
    if (capital != NULL) {
        printf("A capital da Argentina e: %s\n", capital);
    } else {
        printf("Argentina nao encontrado na tabela.\n");
    }

    return 0;
}