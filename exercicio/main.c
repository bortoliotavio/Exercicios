#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b, e, pot = 1, contador;
    printf("Digite o valor da base: b(> 0) = ");
    scanf("%i", &b);
    printf("Digite o expoente: (e>0)");
    scanf("%i", &e);
    if(b <= 0 ||  e <= 0)
        printf("ERRO\n");
    else
    {
        for(contador = 1; contador <= e; contador++)
            pot = pot * b;
        printf("pot(%i, %i) = %i\n", b, e, pot);
    }
    return 0;
}
