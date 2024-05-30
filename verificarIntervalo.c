/*UNIDADE 2 -SLIDE 2*/

#include <stdio.h>
#include <stdbool.h>

bool verificaIntervalo(int x, int min, int max) {
    if (x >= min && x <= max) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int valor, limite_inferior, limite_superior;

    printf("Digite o valor: ");
    scanf("%d", &valor);

    printf("Digite o limite inferior: ");
    scanf("%d", &limite_inferior);

    printf("Digite o limite superior: ");
    scanf("%d", &limite_superior);

    if (verificaIntervalo(valor, limite_inferior, limite_superior)) {
        printf("O valor %d está dentro do intervalo [%d, %d]\n", valor, limite_inferior, limite_superior);
    } else {
        printf("O valor %d está fora do intervalo [%d, %d]\n", valor, limite_inferior, limite_superior);
    }

    return 0;
}
