#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

void main (int argc, char* argv[]){
    setlocale(LC_ALL, "");
    float a, b;
    a = sin(3.14);
    b = sin(4.13);
    //sin é usado para calcular seno

    printf("\nSeno de 3.14 é:%f", a);
    printf("\nSeno de 4.13 é:%f",b);

}
