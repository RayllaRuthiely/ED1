#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#include "pixEd.h"
#define MAX 10

struct fila{
    Transacao* transacoes;
    unsigned int inicio, fim, tamanho;
};

Fila* criarFila(unsigned int tamanho){
    Fila* fila = (Fila*) malloc(sizeof(Fila));
    if(fila == NULL){
        return NULL;
    }
    fila->transacoes = malloc(tamanho * sizeof(Transacao));
    if(fila->transacoes == NULL){
        free(fila);
        return NULL;
    }
    fila->inicio = 0;
    fila->fim = 0;
    fila->tamanho = 0;
    return fila;
}

bool enfileirar(Fila* fila, Transacao transacao){
    if(fila->tamanho == MAX){
        return false;
    }
    fila->transacoes[fila->fim] = transacao;
    fila->fim = (fila->fim + 1) % MAX;
    fila->tamanho++;
    return true;
}

bool desenfileirar(Fila* fila, Transacao* transacao){
    if(fila->tamanho == 0){
        return false;
    }
    *transacao = fila->transacoes[fila->inicio];
    fila->inicio = (fila->inicio + 1) % MAX;
    fila->tamanho--;
    return true;
}

bool liberarFila(Fila* fila){
    if(fila == NULL){
        return false;
    }
    free(fila->transacoes);
    free(fila);
    return true;
}

bool filaVaziaOuCheia(Fila* fila){
    if(fila->tamanho == 0){
        return true; // Fila vazia
    } else if(fila->tamanho == MAX){
        return true; // Fila cheia
    }
    return false; // Fila não está vazia nem cheia
}

bool tamanhoFila(Fila* fila){
    return fila->tamanho;
}

