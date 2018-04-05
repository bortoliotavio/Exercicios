#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    n = 0;
    printf("Exibindo numerais multiplos de 3:\n");
    do
    {
        n = n + 3;
        printf("%i\n", n);


    }while (n < 99);
    return 0;
}
