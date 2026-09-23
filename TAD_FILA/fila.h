#ifndef  FILA_H
#define  FILA_H
#include <stdbool.h>
#define MAX 10
#include "pixEd.h"

typedef struct fila Fila;

Fila* criarFila(unsigned int);
bool enfileirar(Fila* fila, Transacao transacao);
bool desenfileirar(Fila* fila, Transacao* transacao);
bool liberarFila(Fila* fila);
bool filaVaziaOuCheia(Fila* fila);
bool tamanhoFila(Fila* fila);

#endif