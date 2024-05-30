/*Exercício do Slide Introdução Revisão Parte 02*/


#include <stdio.h>

int main() {
    float nota1, nota2;
    int faltas;

    printf("Digite a nota da primeira prova: ");
    scanf("%f", &nota1);

    printf("Digite a nota da segunda prova: ");
    scanf("%f", &nota2);

    printf("Digite o número de faltas: ");
    scanf("%d", &faltas);

    // Calculando a média aritmética das notas
    float media = (nota1 + nota2) / 2;

    // Verificando se a média é maior ou igual a 6 e se as faltas são menores ou iguais a 12
    if (media >= 6 && faltas <= 12) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}
