#include <stdio.h>
#include <string.h>

/* Contar a quantidade de ocorrências de um elemento no array. Escreva uma função que recebe um array de números inteiros e um número inteiro de busca, e retorna a quantidade de vezes que o número de busca aparece no array.*/

int countOccurrences(int arr[], int size, int target) {
    int count = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int array[] = {2, 4, 6, 4, 8, 4, 10, 4};
    int size = sizeof(array) / sizeof(array[0]);
    int searchNumber = 4;
    
    int occurrences = countOccurrences(array, size, searchNumber);
    
    printf("Number of occurrences of %d: %d\n", searchNumber, occurrences);
    
    return 0;
}
