/*Exercício 5: Conversão de caixa

Faça um programa que leia um string e modifique todos os caracteres minúsculos por caracteres maiúsculos.

Dica: os caracteres minúsculos tem o código ASCII entre 97 e 122 e os caracteres maiúsculos tem o código ASCII entre 65 e 90.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char string[128];
    char letra;
    int i = 0;
    printf("Digite uma linha: ");
    do
    {
        scanf("%c", &letra);
        if(letra >= 97 && letra <= 122)
            letra -= 32;
        string[i] = letra;
        i++;
    } while (letra != '\0' && letra != '\n');
        printf("Linha em maiusculo: %s", string);
    return 0;
}