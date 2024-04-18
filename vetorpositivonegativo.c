/*Faça um programa que preencha um vetor com 10 números reais, calcule e mostre
a quantidade de números negativos e a soma dos números positivos desse vetor.*/


#include <stdio.h>

int main(){


float valores[10];
int quantnegativos = 0;
float somapositivos = 0;

for(int i  = 0; i < 10; i++){

    printf("Digite um valor positivo ou negativo para a sequencia: \n");
    scanf("%f", &valores[i]);

}

for(int i = 0; i < 10; i++){

    if (valores[i] < 0)
    {
        quantnegativos++;
    }
    if(valores[i] >= 0){
        somapositivos += valores[i];
    }


}


printf("Existem %d numeros negativo(s) na sequencia \n", quantnegativos);
printf("O resultado da soma dos numeros positivos nessa sequencia e %f", somapositivos);





}