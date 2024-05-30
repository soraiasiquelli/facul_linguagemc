/*UNIDADE 2*/

#include <stdio.h>

float encontrarMenor(float valor1, float valor2) {
    if (valor1 < valor2) {
        return valor1;
    } else {
        return valor2;
    }
}

int main() {
    float num1, num2;

    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);

    printf("Digite o segundo valor: ");
    scanf("%f", &num2);

    float menor = encontrarMenor(num1, num2);

    printf("O menor valor é: %.2f\n", menor);

    return 0;
}
