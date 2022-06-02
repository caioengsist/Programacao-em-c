/*Exercício 3: Triângulo de Floyd

Faça um programa que lê um número inteiro N e imprime as N primeiras linhas do triângulo de Floyd:

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

Desafio: Faça um programa para imprimir a N-ésima linha sem calcular as anteriores. */


#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, acum = 1;
    printf("\nDigite o valor de n(inteiro positivo): ");
    scanf("%d", &n);

    printf("A %d linha eh: ", n);
    int inicial = (((n - 1)* n) /2) +1;
    for (int i = 1; i <= n; i++){
        printf("%d", inicial);
        inicial++;        
    }
    printf("\n");

    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%d ", acum);
            acum++;
        }
        printf("\n");
    }
    return 0;
}
