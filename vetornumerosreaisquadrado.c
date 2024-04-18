    /*Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado
    das componentes deste vetor, armazenando o resultado em outro vetor. Os
    conjuntos têm 10 elementos cada. Imprimir todos os conjuntos (vetores).*/

    #include <stdio.h>


    int main(){


        int quant;
        
        printf("Digite a quantidade de valores que gostaria de adicionar ao vetor\n");
        scanf("%d", &quant);


        double Reais[quant];
        double Quadrado[quant];

        /*solicita os valores*/

        for(int i = 0; i < quant; i++){

            printf("Digite um valor real: \n");
            scanf("%lf", &Reais[i]);

            Quadrado[i] = Reais[i] * Reais[i];

        }


        /*Apresenta na tela os valores origiais e o valor calculado*/
        for(int i = 0; i < quant; i ++){

            printf("Valor original: %.2lf \n", Reais[i]);
            printf("Valor ao quadrado: %.2lf \n", Quadrado[i]);
            printf("-----------------------------\n");
        } 










    }