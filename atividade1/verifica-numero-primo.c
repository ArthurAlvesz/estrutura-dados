#include <stdio.h>


int p(int num) {
    if (num <= 1) {
        return 0; 
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }

    return 1; 
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <numero>\n", argv[0]);
        return 1;
    }

    int num = atoi(argv[1]); 

    if (p(num)) {
        printf("1 - O numero %d eh primo.\n", num);
    } else {
        printf("0 - O numero %d nao eh primo.\n", num);
    }

    return 0;
}