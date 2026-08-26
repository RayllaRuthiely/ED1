#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Ponto.h"

Ponto* Ponto_criar(float x, float y){
    Ponto* p = (Ponto*)malloc(sizeof(Ponto));
    if(p == NULL){
        printf("Erro ao alocar memória para o ponto.\n");
        exit(1);
    }
    p->x = x;
    p->y = y;
    return p;
}

void Ponto_deletar(Ponto* p){
    free(p);
}

void Ponto_imprimir(Ponto* p){
    printf("Ponto: (%.2f, %.2f)\n", p->x, p->y);
}

void Ponto_copiar(Ponto* p, float* x, float* y){
    *x = p->x;
    *y = p->y;
}

void Ponto_modificar(Ponto* p, float x, float y){
    p->x = x;
    p->y = y;
}

float Ponto_distancia(Ponto* p1, Ponto* p2){
    float dx = p2->x - p1->x;
    float dy = p2->y - p1->y;
    return sqrt(dx * dx + dy * dy);
}