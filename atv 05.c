#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char produtos[99][200];
    float valores[99];
    float totalGeral = 0;
    int quantidade[99];
    int opcao;
    int contador = 0, i;
    do
    {
        printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
        printf(" \n \t \t MENU \n ");
        printf("Produtos: \n");
        printf("| [1] Biscoito = R$3,00\n", 1);
        printf("| [2] Carne = R$10,00\n", 2);
        printf("| [3] Frango = R$20,00\n", 3);
        printf("------------------------------------------------- \n");
        printf("| [1] Adicionar uma venda\n");
        printf("| [2] Sair do menu e exibir o total das vendas\n");
        printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> \n");
        scanf("%d", &opcao);

        system("cls || clear");

        switch (opcao)
        {
        case 1:
            fflush(stdin);

            printf("Digite o nome do produto: ");
            gets(produtos[contador]);

            printf("Digite o preço: ");
            scanf("%f", &valores[contador]);

            printf("Digite a quantidade: ");
            scanf("%d", &quantidade[contador]);

            contador++;
            system("cls || clear");
            break;

        case 2:
            printf("Total das Vendas: \n \n");
            for (i = 0; i < contador; i++)
            {
                printf("Produto: %-20s | Preco: R$%-10.2f | Quantidade: %-5d | Total de vendas do produto: R$%.2f\n", produtos[i], valores[i], quantidade[i], quantidade[i] * valores[i]);

                totalGeral += quantidade[i] * valores[i];
            }

            printf("\nTotal geral de vendas: R$%.2f\n", totalGeral);
            break;

        default:
            printf("Opcao Invalida! \n");
            break;
        }

    } while (opcao != 2);

    return 0;
}