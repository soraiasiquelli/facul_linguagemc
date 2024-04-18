/*Leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a coluna) do
maior valor.*/


#include <stdio.h>

int main(){

int matriz[4][4] = {

    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16}
};

/*Definindo a maior como o valor na posição matriz[0][0]*/

int maior = matriz[0][0];
  int linha_maior = 0;
    int coluna_maior = 0;


for(int i = 0; i <4; i++){
    for(int j=0; j<4; j++){
        if (matriz[i][j] > maior)
        {
            maior = matriz[i][j];
            linha_maior = i;
            coluna_maior = j;
        }
        
    }
}

printf("O maior valor na matriz e %d e esta na posicao matriz[%d][%d] ", maior, linha_maior, coluna_maior);







}