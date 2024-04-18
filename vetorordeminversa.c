    #include <stdio.h>

    int main (){


        int vetor[6];



        for(int i = 0; i < 6; i++){

            printf("Digite um valor: ");
            scanf("%d", &vetor[i]);

        }

        printf("Ordem inserida ");
        for(int i = 0; i < 6; i++){
            printf("%d - ", vetor[i]);
        }

        printf("\nOrdem inversa: ");
        for(int i = 5; i >= 0; i--){
            printf("%d - ", vetor[i]);
        }




    }