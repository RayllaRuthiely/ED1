#ifndef FILA_H
#define FILA_H
#include <stdbool.h>

typedef struct fila Fila;

Fila* criar_fila();
bool inserir(Fila* f, int valor);
bool remover(Fila* f, int *valor);
bool acessar(Fila* f);
bool destruir(Fila* f);
int tamanho(Fila* f);
bool cheiaVazio(Fila* f);

#endif