#ifndef  FILA_H
#define  FILA_H
#define MAX 10
#include "pixEd.h"

typedef struct fila Fila;

Fila* criarFila();
int enfileirar(Fila* fila, Transacao transacao);
int desenfileirar(Fila* fila, Transacao* transacao);
int liberarFila(Fila* fila);
void filaVaziaOuCheia(Fila* fila);
int tamanhoFila(Fila* fila);

#endif