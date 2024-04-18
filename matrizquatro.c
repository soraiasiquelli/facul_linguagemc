/* Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.*/
#include <stdio.h>

int main() {
    int matriz[4][4];
    int soma = 0;

    /* Leitura dos valores */
    printf("Matriz \n");
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            printf("Digite um valor para a matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    /* Impressão da matriz */
    printf("Matriz:\n");
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n"); // Mova este printf para fora do segundo loop
    }



     for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++){

            if (matriz[i][j] > 10)
            {
                soma ++;
            }
            
        }

     }

    printf("Ha %d numeros maiores que dez na matriz", soma);






}
