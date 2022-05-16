#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

void main (){
    //não preciso colocar o return 0
    setlocale(LC_ALL, "");

    float poup;
    //primeiro mês
    poup = 789.54;
    poup = poup +(poup * 0.0056);
    //segundo mês
    poup = poup + 303.20;
    poup = poup + (poup * 0.0056);
    //terceiro mês
    poup = poup - 58.25;
    poup = poup + (poup * 0.0056);

    //quarto mês
    printf ("\n O valor da poupança no final do quarto mês é: %.2f", poup);

}
