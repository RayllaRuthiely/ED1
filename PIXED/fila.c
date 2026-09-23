#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#include "pixEd.h"
#define MAX 10

typedef struct{
    Transacao transacoes[MAX];
    int inicio;
    int fim;
    int tamanho;
} Fila;

Fila* criarFila() {
    Fila* fila = (Fila*)malloc(sizeof(Fila));
    if (fila != NULL) {
        fila->inicio = 0;
        fila->fim = 0;
        fila->tamanho = 0;
    }
    return fila;
}

int enfileirar(Fila* fila, Transacao transacao){
    if(fila == NULL || fila->tamanho == MAX){
        return 0; // Fila cheia ou inválida
    }
    fila->transacoes[fila->fim] = transacao;
    fila->fim = (fila->fim + 1) % MAX;
    fila->tamanho++;
    return 1; // Sucesso
}

int desenfileirar(Fila* fila, Transacao* transacao){
    if(fila == NULL || fila->tamanho == 0){
        return 0; // Fila vazia ou inválida
    }
    *transacao = fila->transacoes[fila->inicio];
    fila->inicio = (fila->inicio + 1) % MAX;
    fila->tamanho--;
    return 1; // Sucesso
}

int liberarFila(Fila* fila){
    if(fila == NULL){
        return 0; // Fila inválida
    }
    free(fila);
    return 1; // Sucesso
}

void filaVaziaOuCheia(Fila* fila){
    if(fila == NULL){
        printf("Fila inválida.\n");
        return;
    }
    if(fila->tamanho == 0){
        printf("Fila vazia.\n");
    } else if(fila->tamanho == MAX){
        printf("Fila cheia.\n");
    } else {
        printf("Fila com %d elementos.\n", fila->tamanho);
    }
}

int tamanhoFila(Fila* fila){
    if(fila == NULL){
        return -1; // Fila inválida
    }
    return fila->tamanho;
}