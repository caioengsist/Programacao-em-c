/*Exercício 7: Inversão de string

Escreva um programa para ler um texto do teclado e imprimir o inverso dele. Use o ponto final para indicar o término do texto, ou seja, o usuário deve terminar o texto sempre com um ponto final. Leia um caractere do texto por vez usando a função getc como a seguir:

char c = getc(stdin); */



#include <stdio.h>

int main(int argc, char const *argv[])
{
    char original[128];
    char inversa[128];
    char c;
    int i = 0, j;
    printf("\nEntrada(terminada em ponto final): ");
    do
    {
        c = getc(stdin);
        original[i] = c; 
        i++;
    }while (c != '.');
    j = i - 1;
    inversa[i] = '\0';
    i= 0;
    while(j >= 0)
    {
        inversa[j] = original[i];
        j--;
        i++;
    }
    printf("Saida: %s\n", inversa);
    return 0;
}
