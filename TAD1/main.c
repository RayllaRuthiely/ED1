#include <stdio.h>
#include <stdlib.h>
#include "Racionais.h"

int main(){

    int numerador1 = 2, denominador1 = 2;
    int numerador2 = 2, denominador2 = 2;

    Racional* r1 = criarRacional(numerador1, denominador1);
    Racional* r2 = criarRacional(numerador2, denominador2);
    somarRacionais(r1, r2, r1);
    printf("Resultado da soma: %d/%d\n", r1->numerador, r1->denominador);
    multiplicarRacionais(r1, r2, r1);
    printf("Resultado da multiplicacao: %d/%d\n", r1->numerador, r1->denominador);
    testeSaoIguais(r1, r2);
    liberarRacionais(r1);
    liberarRacionais(r2);
    return 0;
}