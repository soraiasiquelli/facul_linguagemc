#include <stdio.h>

int main() {
    
    int vetor[8];
    int X, Y, soma;

    printf("Digite um valor para X: \n");
    scanf("%d", &X);

    printf("Digite um valor para Y: \n");
    scanf("%d", &Y);

    // Preenchendo o vetor com valores
    for(int i = 0; i < 8; i++) {
        vetor[i] = i;
    }

    // Imprimindo os elementos do vetor
    printf("Elementos do vetor:\n");
    for(int i = 0; i < 8; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n"); // Nova linha após imprimir todos os elementos

    // Calculando e imprimindo a soma dos elementos X e Y
    soma = vetor[X] + vetor[Y];
    printf("Soma de vetor[%d] e vetor[%d]: %d\n", X, Y, soma);

    return 0;
}
