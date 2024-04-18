/*Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais
elementos. Escreva ao final a matriz obtida.*/

#include <stdio.h>


int main(){

int matriz[5][5] =
{
    {1,0,0,0,0},
    {0,1,0,0,0},
    {0,0,1,0,0},
    {0,0,0,1,0},
    {0,0,0,0,1}

};


for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
        printf("%3d", matriz[i][j]);
    }
    printf("\n");
}





}