/*Exercício 2: Calculador de conceito
 
O conceito de um aluno é calculado a partir de sua nota, seguindo a tabela abaixo. Faça um programa que lê a nota de um aluno do teclado e imprime seu conceito. Assuma que alunos só podem receber notas inteiras (isto é, sem decimais). Você deve usar o comando switch para verificar a nota lida.*/



#include <stdio.h>

#define INF 2000000000

int main(int argc, char const *argv[])
{
    int nota;
    char conceito;
    do
    {
        printf("\nDigite a nota que tirou de 0 a 10: ");
        scanf("%d", &nota);
        switch (nota)
        {
        case 0 ... 4:
            conceito= 'F';
            break;
        case 5:
            conceito= 'E';
            break;
        case 6:
            conceito= 'D';
            break;
        case 7:
            conceito= 'C';
            break;
        case 8:
            conceito= 'B';
            break;
        case 9 ... INF:
            conceito= 'A';
            break;
        default:
            printf("Digite novamente, numero invalido");
            break;
    }

    }while (nota < 0 || nota > 10);
    printf("Conceito: %c", conceito);
    return 0;
}