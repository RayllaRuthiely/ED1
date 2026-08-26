#include <stdio.h>
#include <stdlib.h>
#include "Racionais.h"


Racional* criarRacional(int numerador, int denominador){
    Racional* r = (Racional*)malloc(sizeof(Racional));
    if(r == NULL){
        printf("Erro ao alocar memória para o racional.\n");
        exit(1);
    }
    r->numerador = numerador;
    r->denominador = denominador;
    return r;
}

void liberarRacionais(Racional* r){
    free(r);
}

void somarRacionais(Racional* r1, Racional* r2, Racional* resultado){
    resultado->numerador = r1->numerador * r2->denominador + r2->numerador * r1->denominador;
    resultado->denominador = r1->denominador * r2->denominador;
}

void multiplicarRacionais(Racional* r1, Racional* r2, Racional* resultado){
    resultado->numerador = r1->numerador * r2->numerador;
    resultado->denominador = r1->denominador * r2->denominador;
}

void testeSaoIguais(Racional* r1, Racional* r2){
    if(r1->numerador * r2->denominador == r2->numerador * r1->denominador){
        printf("Os racionais sao iguais.\n");
    } else {
        printf("Os racionais sao diferentes.\n");
    }
}
