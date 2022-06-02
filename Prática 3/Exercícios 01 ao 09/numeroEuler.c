/*========================================================
 Exercício 1: Número de Euler

 O valor de  (número de Euler) pode ser aproximado pelo somatório:



 Implemente um programa para aproximar o valor de . Seu programa deve aumentar a precisão da aproximação calculando iterativamente 
 (isto é, num laço) os termos do somatório acima. Seu programa deve parar a aproximação quando o i-ésimo termo (1/i!) for menor do que .

Implemente esse programa fazendo uma função separada para calcular o fatorial de i.

===================================================================================================================================*/

#include <stdio.h>
#include <math.h>

#define delta pow(10, -6)

double fatorial(int N)
{
    double fat = 1;
    for (int i = 2; i <= N; i++)
        fat *= i;
    return fat;    
}

int main(int argc, char const *argv[])
{
    double termo = 1;
    double euler = termo;
    for (int i = 1; termo > delta; i++)
    {
        termo = 1.0 / fatorial (i);
        euler += termo;
    }
    printf("O numero Euler eh %lf", euler);
    return 0;
}



