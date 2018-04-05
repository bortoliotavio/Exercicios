#include <stdio.h>
#include <stdlib.h>

int main()
{
    int voto, mix1=0, mix2=0, mix3 = 0;
    float porc1 = 0, porc2 = 0, porc3 = 0;
    printf("MENU\n");
    printf("ESCOLHA UMA DAS OPCOES:\n");
    printf("DIGITE 1 PARA VOTAR NO MIX 1 \n");
    printf("DIGITE 2 PARA VOTAR NO MIX 2 \n");
    printf("DIGITE 3 PARA VOTAR NO MIX 3 \n");
    printf("DIGITE 0 PARA SAIR DO PROGRAMA!\n");
    do
    {
    printf("Sua escolha:");
    scanf("%i", &voto);

        if(voto == 1){
            mix1++;
        porc1 = 100.0 * mix1 / ( mix1 + mix2 + mix3);
        porc2 = 100.0 * mix2 / (mix1 + mix2 + mix3);
        porc3 = 100.0 * mix3 / (mix1 + mix2 + mix3);
        }
        else if(voto == 2)
        {
        mix2++;
        porc1 = 100.0 * mix1 / ( mix1 + mix2 + mix3);
        porc2 = 100.0 * mix2 / (mix1 + mix2 + mix3);
        porc3 = 100.0 * mix3 / (mix1 + mix2 + mix3);
        }
        else if(voto == 3)
        {
        mix3++;
        porc1 = 100.0 * mix1 / ( mix1 + mix2 + mix3);
        porc2 = 100.0 * mix2 / (mix1 + mix2 + mix3);
        porc3 = 100.0 * mix3 / (mix1 + mix2 + mix3);
        }
        else if (voto == 0){
            printf("FIM DO PROGRAMA");
            exit(1);

        }
    printf("Porcentagem mix1: %.1f %%\n", porc1);
    printf("Porcentagem mix2: %.1f %%\n", porc2);
    printf("Porcentagem mix3: %.1f %%\n", porc3);
    }while(voto != 0);
    return 0;
}
