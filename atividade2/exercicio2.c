#include <stdio.h>
#include <stdlib.h>

/*Maior e menor elemento do array. Escreva uma função que recebe um array de números inteiros e retorna o menor e o maior elemento do array.*/

int main()
{
    int i, maior=0, menor=0;
    float num[5];
    
    printf("digite 5 numeros:");
    printf("\n");
    for (i=0;i<5;i++)
    {
    printf("numero %d : \n", i+1);
    scanf("%f", &num[i]);
}

        
        for(i=0;i<5;i++){
            if(num[i]>maior){
                maior=num[i];
            }
        }
     printf("o maior numero e %d", maior);
     
         for(i=0;i<5;i++){
                if(num[i]<menor){
                menor=num[i];
            }
        }
     printf("\n e o menor numero e %d", menor);
   

return 0;
}