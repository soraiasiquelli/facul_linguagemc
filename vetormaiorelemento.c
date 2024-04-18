#include <stdio.h>

int main(){


    int vetor[10];
    int maior = 0;
    int posicao;


    /*Leitura dos valores e inserção no vetor*/
    for(int i = 0; i < 10; i++){


        printf("Digite um numero para armazenar no valor: ");
        scanf("%d", &vetor[i]);

    }

    /*Impressão dos valores do vetor na tela*/
    for(int i = 0; i < 10; i++){
        printf("%d - ", vetor[i]);
    }

    /*Maior elemento*/

    for(int i=0; i < 10; i++){
        if (vetor[i] > maior){
            maior = vetor[i];
            posicao = i;
        }
        
    }

    printf("\n O maior valor do vetor e %d e ele esta na posicao %d", maior, posicao);




}