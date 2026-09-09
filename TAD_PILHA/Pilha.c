#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 10
#include "Pilha.h"

typedef struct{
    int qtd[MAX];
    int topo;
    unsigned int tamanho;
} Pilha;

Pilha* criar_pilha(){
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    if(p != NULL){
        p->topo = -1;
        p->tamanho = 0;
    }
    return p;
}

bool push(Pilha* p, int valor){
    if(p->tamanho < MAX){
        p->topo++;
        p->qtd[p->topo] = valor;
        p->tamanho++;
        return true;
    }
    return false;
}

bool pop(Pilha* p, int *valor){
    if(p->tamanho > 0 && p != NULL){
        *valor = p->qtd[p->topo];
        p->tamanho--;
        return true;
    }
    return false;
}

bool top(Pilha* p){
    if(p->tamanho > 0 && p != NULL){
        printf("Elemento no topo: %d\n", p->qtd[p->topo]);
        return true;
    } else {
        printf("Pilha vazia.\n");
        return false;
    }
}

bool destroy_stack(Pilha* p){
    if(p != NULL){
        free(p);
        return true;
    }
    return false;
}

int size(Pilha* p){
    return p->tamanho;
}

void is_full(Pilha* p){
    if(p->tamanho == MAX){
        printf("A pilha está cheia.\n");
    } else {
        printf("A pilha não está cheia.\n");
    }
}