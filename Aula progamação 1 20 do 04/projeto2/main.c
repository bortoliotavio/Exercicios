#include <stdio.h>
#include <stdlib.h>
#define ALUNOS 5

int main()
{
    float Pauta[ALUNOS], soma = 0, media;
    int Indice = 0;
    while (Indice < ALUNOS)
    {
        printf("Nota do Aluno %i ente [0,10] = ", Indice + 1);
        scanf("%f", &Pauta[Indice]);
        if(Pauta[Indice] < 0 || Pauta[Indice] > 10)
            printf("Erro na Nota. Escolha de novo.\n");
        else
        {
            soma = soma + Pauta[Indice];
            Indice++;
        }
    }
    media = soma / ALUNOS;
    printf("Media da turma: %.1f\n", media);
    return 0;
}
