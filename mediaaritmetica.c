/*UNIDADE 2*/

#include <stdio.h>

float calcularMedia(float valor1, float valor2) {
    float media;
    media = (valor1 + valor2) / 2;
    return media;
}

int main() {
    float num1, num2;

    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);

    printf("Digite o segundo valor: ");
    scanf("%f", &num2);

    float media = calcularMedia(num1, num2);

    printf("A média aritmética é: %.2f\n", media);

    return 0;
}
