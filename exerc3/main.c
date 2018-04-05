#include <stdio.h>
#include <stdlib.h>
#define SM 880.05

int main()
{
    int clientes = 0, A=0, B=0, C=0;
    float salario, porcA, porcB, porcC;
    do
    {
        printf("Digite seu salario: ");
        scanf("%f", &salario);
        if(salario > (15 * SM))
        {
            clientes++;
            A= A + 1;
            porcA = 100.0 * A / ( A + B + C);
            porcB = 100.0 * B / (A + B + C);
            porcC = 100.0 * C / (A+ B + C);

        }
        else if(salario > (5 * SM))
        {
            clientes++;
            B = B + 1;
            porcA = 100.0 * A / ( A + B + C);
            porcB = 100.0 * B / (A + B + C);
            porcC = 100.0 * C / (A+ B + C);
        }
        else if(salario < (5 * SM))
        {
            clientes++;
            C = C + 1;
            porcA = 100.0 * A / ( A + B + C);
            porcB = 100.0 * B / (A + B + C);
            porcC = 100.0 * C / (A+ B + C);
        }
        printf("Porcentagem de clientes classe A: %.1f\n", porcA);
        printf("Porcentagem de clientes classe B: %.1f\n", porcB);
        printf("Porcentagem de clientes classe C: %.1f\n", porcC);


    }while(clientes <= 1000);
    return 0;
}
