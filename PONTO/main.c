#include <stdio.h>
#include <stdlib.h>
#include "Ponto.h"

int main(){

    float d;
    Ponto* p1 = Ponto_criar(1.0, 1.0);
    Ponto* p2 = Ponto_criar(2.0, 3.0);
    d = Ponto_distancia(p1, p2);

    Ponto_modificar(p1, 5.0, 7.0);

    printf("Distancia entre os pontos: %.2f\n", d);
    printf("Ponto 1: ");
    Ponto_imprimir(p1);
    printf("Ponto 2: ");
    Ponto_imprimir(p2);

    Ponto_deletar(p1);
    Ponto_deletar(p2);
}