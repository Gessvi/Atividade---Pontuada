#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i, j;
    char nome[5][200];
    int idade[5];
    float nota[5][3];
    float soma;
    float media[3];

    for (i = 0; i < 5; i++)
    {
        printf("Insira seu nome:");
        gets(nome[i]);

        printf("Insira sua idade:");
        scanf("%d", &idade[i]);

        for (j = 0; j < 3; j++)
        {
            printf("Insira sua nota: \n");
            scanf("%f", &nota[i][j]);

            soma += nota[i][j];
        }
        media[i] = soma / j;
        soma = 0;
        fflush(stdin);
    }

    fflush(stdin);

    system("cls || clear");

    printf(" \n Exibindo Dados \n");

    for (i = 0; i < 5; i++)
    {
        printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");

        printf("Nome do Aluno: %s \n", nome[i]);

        printf ("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< \n");

        printf("Idade: %d \n", idade[i]);

        for (j = 0; j < 3; j++)
        {
            printf("Nota: %.1f \n", nota[i][j]);
        }

        printf("Media: %.1f \n", media[i]);

        if (media[i] >= 7)
        {
            printf("\n Aprovado \n");
        }
        else if (media[i] >= 5)
        {
            printf(" \n Recuperacao \n");
        }
        else
        {
            printf(" \nReprovado \n");
        }
    }

    return 0;
}