#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

int i;
int numero[5];
int maior;
int menor = 9999;
int negativo;
float mediaPar = 0;
float mediaGeral = 0;
int par = 0;
int impar = 0;
int contador = 0;
int soma;
int somaPar = 0;

for ( i = 1; i <= 5; i++)
{
    printf ("Insira um valor: ");
    scanf ("%d", &numero[i]);
    contador++;

    if(numero[i] > 0){
    if (numero[i] % 2 == 0)
    {
        par++;
        somaPar = numero[i];
    }
    else
    {
        impar++;
    }
    }
    
    if (numero[i] < 0)
    {
        negativo++;
    }
    
    maior = maior > numero[i] ? maior : numero[i];
    menor = menor < numero[i] ? menor : numero[i];

    
    soma += numero[i];
}
mediaPar = somaPar/par;
mediaGeral = soma/5;

printf ("Media Pares: %.1f \n", mediaPar);
printf ("Media: %.1f \n", mediaGeral);
printf ("Maior: %d \n", maior);
printf ("Menor: %d \n", menor);
printf ("Numeros Negativos: %d \n", negativo);
printf ("Numeros Pares: %d \n", par);
printf ("Numeros Impares: %d \n", impar);
return 0;
}