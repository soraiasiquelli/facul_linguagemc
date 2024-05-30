/*SLIDE REVISÃO MATRIZES*/

#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário para digitar um número
    printf("Digite um número: ");
    scanf("%d", &numero);

    // Calcula e exibe a tabuada do número digitado pelo usuário
    printf("Tabuada do %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
