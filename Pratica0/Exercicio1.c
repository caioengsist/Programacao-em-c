#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

void main (){
    //n�o preciso colocar o return 0
    setlocale(LC_ALL, "");

    float poup;
    //primeiro m�s
    poup = 789.54;
    poup = poup +(poup * 0.0056);
    //segundo m�s
    poup = poup + 303.20;
    poup = poup + (poup * 0.0056);
    //terceiro m�s
    poup = poup - 58.25;
    poup = poup + (poup * 0.0056);

    //quarto m�s
    printf ("\n O valor da poupan�a no final do quarto m�s �: %.2f", poup);

}
