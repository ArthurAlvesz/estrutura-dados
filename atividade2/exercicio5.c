#include <stdio.h>
#include <stdlib.h>

/*Multiplicar elementos de dois arrays. Escreva uma função que recebe dois arrays de números inteiros com o mesmo tamanho e retorna um novo array com os elementos resultantes da multiplicação dos elementos dos dois arrays.*/

int* multiplyArrays(int arr1[], int arr2[], int size) {
    int* result = (int*)malloc(size * sizeof(int));
    
    if (result == NULL) {
        printf("XXXXX.\n");
        exit(1);
    }
    
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] * arr2[i];
    }
    
    return result;
}

int main() {
    int array1[] = {2, 4, 6, 8, 10};
    int array2[] = {1, 3, 5, 7, 9};
    int size = sizeof(array1) / sizeof(array1[0]);
    
    int* multipliedArray = multiplyArrays(array1, array2, size);
    
    printf("Array multiplicada: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", multipliedArray[i]);
    }
    printf("\n");
    
    return 0;
}
