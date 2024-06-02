/*ATIVIDADE DE ALGORITMO - JOGO DA VELHA*/
#include <stdio.h>

int verificaVencedor(int matriz[3][3]){
    // Verifica linhas
    for (int i = 0; i < 3; i++) {
        if (matriz[i][0] == matriz[i][1] && matriz[i][1] == matriz[i][2] && matriz[i][0] != 0) {
            return matriz[i][0];
        }
    }
    // Verifica colunas
    for (int i = 0; i < 3; i++) {
        if (matriz[0][i] == matriz[1][i] && matriz[1][i] == matriz[2][i] && matriz[0][i] != 0) {
            return matriz[0][i];
        }
    }
    // Verifica diagonais
    if (matriz[0][0] == matriz[1][1] && matriz[1][1] == matriz[2][2] && matriz[0][0] != 0) {
        return matriz[0][0];
    }
    if (matriz[0][2] == matriz[1][1] && matriz[1][1] == matriz[2][0] && matriz[0][2] != 0) {
        return matriz[0][2];
    }
    // Sem vencedor
    return 0;
}

int main() {
    int valor1 = 1;
    int valor2 = 2;
    int valor;
    int posicao;
    char jogador1[50];
    char jogador2[50];
    int jogadorAtual = 1; // 1 para jogador 1, 2 para jogador 2

    printf("-------- Seja Bem Vindo(a) ao jogo da velha --------\n");
    printf("Desenvolvido por Soraia Goncalves Siquelli - Ciencia da Computacao 2AN \n");

    printf("Por favor digite o nome do jogador um: \n");
    scanf("%s", jogador1);

    printf("Agora, o nome do jogador dois: \n");
    scanf("%s", jogador2);

    /*CRIAÇÃO DA MATRIZ*/
    int matriz[3][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };

    int vencedor = 0;
    /*O LOOP FOR SERVE PARA A REPETIÇÃO DO QUE ESTÁ DENTRO DO COMANDO, AQUI ELE REPETE O COMANDO PARA O JOGADOR DIGITAR A POSIÇÃO ATÉ 9 VEZES*/
    for (int jogadas = 0; jogadas < 9 && vencedor == 0; jogadas++) {
        printf("Jogador %s, digite a posicao (1 a 9) que gostaria de jogar: ", jogadorAtual == 1 ? jogador1 : jogador2);
        scanf("%d", &posicao);

        // Mapeia a posição para os índices da matriz
        int linha = (posicao - 1) / 3;
        int coluna = (posicao - 1) % 3;

        /*CASO A POSIÇÃO ESTEJA OCUPADA IRÁ APARECER UMA MENSAGEM E O JOGADOR TERÁ A OPORTUNIDADE DE ESCOLHER OUTRA POSIÇÃO*/
        if (posicao < 1 || posicao > 9 || matriz[linha][coluna] != 0) {
            printf("Posição inválida ou já ocupada! Tente novamente.\n");
            jogadas--;
            continue;
        }

        matriz[linha][coluna] = jogadorAtual == 1 ? valor1 : valor2;

        // Imprime a matriz atualizada
        printf("Estado atual da matriz:\n");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }

        vencedor = verificaVencedor(matriz);

        // Alterna o jogador atual
        if (vencedor == 0) {
            jogadorAtual = (jogadorAtual == 1) ? 2 : 1;
        }
    }

    if (vencedor != 0) {
        printf("Parabéns, %s! Você venceu!\n", vencedor == 1 ? jogador1 : jogador2);
    } else {
        printf("O jogo terminou em empate!\n");
    }

    return 0;
}
