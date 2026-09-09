#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#include "Pilha.h"

struct pilha{
    int elementos[MAX];
    int topo;
    int qtd;
};

Pilha* criar_pilha(){
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    if(p != NULL){
        p->topo = -1;
        p->qtd = 0;
    }
    return p;
}

void inserir(Pilha* p, int valor){
    if(p->qtd < MAX){
        p->topo++;
        p->elementos[p->topo] = valor;
        p->qtd++;
    }
}

int remover(Pilha* p){
    if(p->qtd > 0){
        p->qtd--;
        return p->elementos[p->topo--];
    }
    return -1;
}

void acessar(Pilha* p){
    if(p->qtd > 0){
        printf("Elemento no topo: %d\n", p->elementos[p->topo]);
    } else {
        printf("Pilha vazia.\n");
    }
}

void destruir_pilha(Pilha* p){
    free(p);
}

int tamanho(Pilha* p){
    return p->qtd;
}

void cheia(Pilha* p){
    if(p->qtd == MAX){
        printf("Pilha cheia.\n");
    } else {
        printf("Pilha não está cheia.\n");
    }
}