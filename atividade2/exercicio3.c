#include <stdio.h>
#include <string.h>

/* Verificar se um elemento existe no array Escreva uma função que recebe um array de strings e uma string de busca, e retorna "1" se a string de busca existe no array, ou "0" caso não exista.*/

int main() {
    char nomes[6][16]; 
    char busca[16];
    int i;

    for (i = 0; i < 6; i++) {
        printf("Digite um nome:\n");
        scanf("%s", nomes[i]);
    }

    printf("Digite um nome de busca:\n");
    scanf("%s", busca);

    int encontrado = 0; 

    for (i = 0; i < 6; i++) {
        if (strcmp(busca, nomes[i]) == 0) { 
            encontrado = 1;
            break; 
        }
    }

    if (encontrado) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
