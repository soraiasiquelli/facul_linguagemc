
    #include <stdio.h>

    int main(){


    float valores[10];

    for(int i  = 0; i < 10; i++){

        printf("Digite um valor positivo ou negativo para a sequencia: \n");
        scanf("%f", &valores[i]);

        if (valores[i] < 0)
        {
            valores[i] = 0;
        }
        

    }

    /*Valores modificados*/


        for (int i = 0; i < 10; i++)
        {
                printf("%.2f\n", valores[i]); // Usando %.2f para imprimir com 2 casas decimais

        }

    }