#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 10
#include "Pilha.h"


// A estrutura struct com os dados
 struct pilha {
    int qtd[MAX];
    int topo;
    unsigned int tamanho;
};

// Função para criar uma pilha
Pilha* criar_pilha(){
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    if(p != NULL){
        p->topo = -1;
        p->tamanho = 0;
    }
    return p;
}

// Funcção para empilhar um elemento na pilha, ou seja , adicionar um elemento no topo da pilha
bool push(Pilha* p, int valor){
    if(p != NULL && p->tamanho < MAX){
        p->topo++;
        p->qtd[p->topo] = valor;
        p->tamanho++;
        return true;
    }
    return false;
}

// Função para desempilhar um elemento da pilha, ou seja, remover o elemento do topo da pilha
bool pop(Pilha* p, int *valor){
    if(p != NULL && p->tamanho > 0){
        *valor = p->qtd[p->topo];
        p->topo--;
        p->tamanho--;
        return true;
    }
    return false;
}

// Função para acessar o elemento do topo da pilha, ou seja, o último elemento que foi adicionado na pilha
bool top(Pilha* p){
    if(p != NULL && p->tamanho > 0){
        printf("Elemento no topo: %d\n", p->qtd[p->topo]);
        return true;
    } else {
        printf("Pilha vazia.\n");
        return false;
    }
}

// Função para destruir a pilha, ou seja, liberar a memória alocada para a pilha
bool destroy_stack(Pilha* p){
    if(p != NULL){
        free(p);
        return true;
    }
    return false;
}

// Função para retornar o tamanho da pilha, ou seja, a quantidade de elementos que estão na pilha
int size(Pilha* p){
    return p->tamanho;
}

// Função para verificar se a pilha está cheia, ou seja, se a quantidade de elementos na pilha é igual ao tamanho máximo da pilha
bool is_full(Pilha* p){
    if(p->tamanho == MAX){
        printf("A pilha esta cheia.\n");
    } else {
        printf("A pilha nao esta cheia.\n");
    }
}