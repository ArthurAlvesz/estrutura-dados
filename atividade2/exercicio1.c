#include <stdio.h>
#include <stdlib.h>

/* Soma dos elementos de um array. Escreva uma função que recebe um array de números inteiros e retorna a soma de todos os elementos;*/

int calcularSoma(int array[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += array[i];
    }
    return soma;
}

int main() {
    int numeros[] = {5, 7, 6, 9}; 
    int tamanho = sizeof(numeros) / sizeof(numeros[0]); 
    
    int soma = calcularSoma(numeros, tamanho); 
    printf("A soma dos elementos do array e: %d\n", soma);
    
    return 0;
}