#include <stdio.h>

int main() {
    int vetor[10];
    int i, j;
    int temRepetido = 0;

    // Lendo os valores do vetor
    printf("Digite 10 números:\n");
    for (i = 0; i < 10; i++) {
        printf("Posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Verificando valores iguais
    printf("\nValores iguais:\n");
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                printf("%d\n", vetor[i]);
                temRepetido = 1;
            }
        }
    }

    if (!temRepetido) {
        printf("Não há valores iguais.\n");
    }

    return 0;
}
