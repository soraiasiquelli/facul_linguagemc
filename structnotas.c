/*SLIDE STRUCT*/
#include <stdio.h>

// Definindo a estrutura Aluno
struct Aluno {
    int numero;
    float notas[3];
};

int main() {
    // Declarando um array de 10 alunos
    struct Aluno alunos[10];

    // Lendo os dados dos alunos
    for (int i = 0; i < 10; i++) {
        printf("Digite o número do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].numero);

        printf("Digite as três notas do aluno %d: ", i + 1);
        for (int j = 0; j < 3; j++) {
            scanf("%f", &alunos[i].notas[j]);
        }
    }

    // Exibindo os dados dos alunos
    printf("\nDados dos alunos:\n");
    for (int i = 0; i < 10; i++) {
        printf("Aluno %d - Número: %d, Notas: %.1f, %.1f, %.1f\n", i + 1, alunos[i].numero, alunos[i].notas[0], alunos[i].notas[1], alunos[i].notas[2]);
    }

    return 0;
}
