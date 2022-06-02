/*Exercício 6: Detector de palíndromos

Implemente código C para testar se uma string é um palíndromo. Um palíndromo é uma palavra idêntica quando lida de trás para frente, como "arara", "radar" e "reviver".*/


#include <stdio.h>

int main(int argc, char const *argv[])
{
    char string[128];
    char letra;
    int j, meio;
    int palin = 1;
    int i=0;
    printf("Digite uma linha: ");
    do
    {
        scanf("%c", &letra);
        if(letra >= 97 && letra <= 122)
            letra -= 32;
        string[i] = letra;
        i++;
    } while (letra != '\0' && letra != '\n');
    j = i - 2;
    meio = j / 2;
    i = 0;
    while(j >= meio)
    {
        if(string[j] != string[i])
    { 
            palin = 0;
            break;}
                j--;
                i++;
            }
            if (palin)
            printf("Eh um palindromo.");
            else
      printf("Nao eh um palindromo.");
    return 0;
}