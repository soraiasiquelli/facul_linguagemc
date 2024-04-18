#include <stdio.h>

int main (){

    int vetor[10];
    int quantpar;

    quantpar = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite um valor: \n");
        scanf("%d", &vetor[i]);
    }


    for(int i = 0; i<10; i++){
        printf("%d - ", vetor[i]);
    }

    for(int i = 0; i< 10; i++){
        if(vetor[i] % 2 == 0){
            quantpar = quantpar + i;
        }else{
            printf("Nao existe numero par no vetor");
        }
    }

    printf("A quantidade de numeros pares e: %d", quantpar);

}


