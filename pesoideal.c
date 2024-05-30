/*Exercício do Slide IntroduçÃO Revisão Parte 02*/

/*Escreva um programa para calcular o peso ideal de uma pessoa, utilizando as seguintes

fórmulas:

homens: (72.7 * altura) – 58

mulheres: (62.1 * altura) – 44.7*/



#include <stdio.h>
#include <string.h>

int main() {
    char sexo;
    float altura;
    
    printf("Digite 'M' para Masculino ou 'F' para feminino: ");
    scanf(" %c", &sexo); // Adicionei um espaço antes do %c para ignorar espaços em branco e quebras de linha

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    float pesohomem = (72.7 * altura) - 58;
    float pesomulher = (62.1 * altura) - 44.7;

    if (sexo == 'M') {
        printf("O seu peso ideal é: %.2f\n", pesohomem);
    } 
    else if (sexo == 'F') {
        printf("O seu peso ideal é: %.2f\n", pesomulher);
    }
    else {
        printf("Sexo inválido.\n");
    }

    return 0;
}

    




