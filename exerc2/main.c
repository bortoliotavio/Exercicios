#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hab, empre, desempre;
    float porcempre, porcdes;
    printf("Digite a quantidade de habitantes: ");
    scanf("%d", &hab);
    printf("Digite quantos HABITANTES sao EMPREGADOS: \n");
    scanf("%d", &empre);
    printf("Digite quantos HABITANTES sao DESEMPREGADOS: \n");
    scanf("%d", &desempre);
    if(empre + desempre != hab)
        printf("ERRO NO NUMERO DE HABITANTES!!");
    else
        if(empre + desempre == hab)
    do{
        porcempre = 100.0 * empre / (empre + desempre);
        printf("A porcentagem de empregados eh: %.1f %%\n", porcempre);
        porcdes = 100.0 * desempre / (empre + desempre);
        printf("A porcentagem de desempragados eh: %.1f %%", porcdes);
    }while( porcdes == 0);
    return 0;
}
