#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");

	int i;
	int numero[200];
	char nome[200][200];
	int opcao;
	int contador = 0;

	do 
	{
	printf("Escolha uma das opcoes \n");
	printf("| [1] Adicionar um Numero \n");
	printf("| [2] Exibir Numeros Cadastrados \n");
	scanf("%d", &opcao);
	
	switch (opcao)
	{
	case 1:

		fflush(stdin);
		
		printf("insira seu nome: \n");
		gets (nome[contador]);

		printf("Digite seu numero: \n");
		scanf("%d", &numero[contador]);
		contador++;

		system("cls || clear");

		break;

	case 2:

		printf("Numeros Cadastrado: \n");
		for (i = 0; i < contador; i++)
		{
			printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
			printf("Nome: %s \n", nome[i]);
			printf ("Numero de Telefone: %d \n", numero[i]);
			
			printf (" \n");
		}
		break;
		
	default:
		printf("Opcao invalida \n");
		break;
	}
	
	} while (opcao != 2);
		
	return 0;
}
