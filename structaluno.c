/*STRUCT SLIDE 2*/
#include <stdio.h>

// Definindo a estrutura Aluno
struct Aluno {
    char nome[50];
    float nota;
};

int main() {
    struct Aluno aluno1, aluno2;

    printf("Digite o nome do primeiro aluno: ");
    scanf("%s", aluno1.nome);
    printf("Digite a nota do primeiro aluno: ");
    scanf("%f", &aluno1.nota);

    printf("Digite o nome do segundo aluno: ");
    scanf("%s", aluno2.nome);
    printf("Digite a nota do segundo aluno: ");
    scanf("%f", &aluno2.nota);

    printf("%s - Nota: %.2f\n", aluno1.nome, aluno1.nota);
    printf("%s - Nota: %.2f\n", aluno2.nome, aluno2.nota);

    return 0;
}
