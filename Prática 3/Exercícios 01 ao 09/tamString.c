/*Exercício 4: Tamanho de uma string

Implemente um programa que leia um string e conte o número de caracteres. Não use a função strlen. Para ler uma string de até 127 caracteres do teclado, use o seguinte código:

char linha[128];
printf("digite uma linha:\n");
fgets(linha, 128, stdin);*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char linha [128];
    printf("\nDigite uma linha: ");
    fgets(linha, 128, stdin);
    int tam = 0;
    for (int i = 0; linha[i] != '\0' && linha [i] != '\n'; i++)
        tam++;
        printf("A linha possui %d caracteres. \n", tam);

    return 0;
}

