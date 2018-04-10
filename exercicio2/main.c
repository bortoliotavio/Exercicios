#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador, soma = 0, limiteinf, limitesup, n;
    printf("Insira o valor dos multiplos:");
    scanf("%i", &n);
    printf("Insira o valor, para limitar a operaçao: (limite >= 0)");
    scanf("%i", &limiteinf);
    printf("Insira o maior valor, para limitar a operaçao: (limite superior > limite inferior)");
    scanf("%i", &limitesup);
    for(contador = limiteinf; contador <= limitesup; contador++)
    {
        if(contador % n == 0)
        {
            printf("Multiplo de %i: %i\n", n, contador);
            soma += contador;
        }
    }
    printf("Soma dos multiplos de %i entre [%i, %i] = %i\n", n, limiteinf, limitesup, soma);
    return 0;
}
