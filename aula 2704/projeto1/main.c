#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10
int main()
{
    int Vetor[TAMANHO], Indice = 0;
    printf("Entre com %i Valores Inteiros Positivos:\n", TAMANHO);
    while(Indice < TAMANHO)
    {
        printf("Vetor[%i] = ", Indice + 1);
        scanf("%i", &Vetor[Indice]);
        if(Vetor[Indice] <= 0)
            printf("ERRO TENTE NOVAMENTE\n");
        else
            Indice++;
    }
        for(Indice = 0;Indice < TAMANHO; Indice += 1)
        {
            if(Vetor[Indice] % 3 == 0)
                printf("Os multiplos de 3: Vetor[%i] =  %i\n", Indice, Vetor[Indice]);
        }
    return 0;
}
