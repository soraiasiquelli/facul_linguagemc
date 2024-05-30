/*SLIDE RevisãoMatrizes*/

#include <stdio.h>

int main() {
    // Loop para controlar as linhas
    for (int linha = 1; linha <= 10; linha++) {
        // Loop para controlar as colunas
        for (int coluna = 1; coluna <= linha; coluna++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
