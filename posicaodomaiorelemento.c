/*UNIDADE 2 - SLIDE 2*/
#include <stdio.h>

int posicaoMaior(int a, int b, int c) {
    if (a >= b && a >= c) {
        return 1; // a é o maior
    } else if (b >= a && b >= c) {
        return 2; // b é o maior
    } else {
        return 3; // c é o maior
    }
}

int main() {
    int num1, num2, num3;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    printf("Digite o terceiro valor: ");
    scanf("%d", &num3);

    int posicao_maior = posicaoMaior(num1, num2, num3);

    printf("O maior elemento está na posição: %d\n", posicao_maior);

    return 0;
}
