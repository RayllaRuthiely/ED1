#ifndef RACIONAIS_H
#define RACIONAIS_H

typedef struct{
    int numerador;
    int denominador;
}Racional;

Racional* criarRacional(int numerador, int denominador);
void liberarRacionais(Racional* r);
void somarRacionais(Racional* r1, Racional* r2, Racional* resultado);
void multiplicarRacionais(Racional* r1, Racional* r2, Racional* resultado);
void testeSaoIguais(Racional* r1, Racional* r2);
#endif