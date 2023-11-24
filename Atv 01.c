#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL ,"portuguese");

    char nome[5][200];
    int idade[6];
    float peso[6];
    float altura[6];
    int idadeMaior = 0, idadeMenor = 9999;
    float pesoBaixo = 9999 ,pesoAlto = 0 ,alturaBaixa = 9999,alturaAlta = 0;

    int i;

    for ( i = 1; i <= 5; i++)
    {
        printf("Digite seu nome:");
        gets(nome[i]);

            printf("Digite sua idade: ");
            scanf("%d" ,&idade[i]);

            printf("Digite seu peso: ");
            scanf("%f" ,&peso[i]);

            printf("Digite sua altura: ");
            scanf("%f" ,&altura[i]);

            printf("\n \n");

        pesoAlto = pesoAlto > peso[i] ? pesoAlto : peso[i];
        pesoBaixo = pesoBaixo < peso[i] ? pesoBaixo : peso[i];

        alturaAlta = alturaAlta > altura[i] ? alturaAlta : altura[i];
        alturaBaixa = alturaBaixa < altura[i] ? alturaBaixa : altura[i];

        idadeMaior = idadeMaior > idade[i] ? idadeMaior : idade[i];
        idadeMenor = idadeMenor < idade[i] ? idadeMenor : idade[i];

        fflush(stdin);
        
    }
    system("cls || clear");

    //exibindo

    for ( i = 1; i <= 5; i++)
    {
        printf("%dº Nome: %s \n" ,i ,nome[i]);

        printf("%dº idade: %d\n" ,i ,idade[i]);

        printf("%dº informacao do peso: %.2f \n" ,i ,peso[i]);
        
        printf("%dº informacao da altura: %.2f\n\n" ,i ,altura[i]);

    }

    for ( i = 1; i <= 5; i++)
    {
         if (peso[i] == pesoAlto)
        {
            printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> \n");
            printf("\nNome da pessoa com mais peso: -%s- \n" ,nome[i]);
            printf("Maior Peso: %.1f kg \n" ,pesoAlto);
            printf ("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< ");
        } else if(peso[i] == pesoBaixo) {
            printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> \n");
            printf("\nNome da pessoa com menos peso: -%s- \n" ,nome[i]);
            printf("Menor Peso: %.1f kg \n" ,pesoBaixo);
            printf ("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< ");
        }

        if (altura[i] == alturaAlta)
        {
            printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> \n");   
            printf("\nNome da pessoa mais alta: -%s- \n " ,nome[i]);
            printf("Maior Altura: %.2f cm \n" ,alturaAlta);
            printf ("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< \n");
        }
        else if(altura[i] == alturaBaixa)
        {
            printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> \n");
            printf("\nNome da pessoa mais baixa: -%s- \n" ,nome[i]);
            printf("Menor Altura: %.2f cm \n" ,alturaBaixa); 
            printf ("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
        }

        if (idade[i] == idadeMaior)
        {
            printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> \n");
            printf("\nNome da pessoa com mais idade: -%s- \n" ,nome[i]);
            printf("Maior Idade: %d \n" ,idadeMaior);
            printf ("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
        }
        else if (idade[i] == idadeMenor)
        {
            printf (">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> \n");
            printf("\nNome da pessoa com menos idade: -%s- \n " ,nome[i]);
            printf("Menor Idade: %d \n" ,idadeMenor);
        }
        
    }
    
    return 0;
}