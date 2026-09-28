#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"
#define MAX 10

struct fila{
   int qtd[MAX];
   unsigned int tamanho, inicio, fim;
};

Fila* criar_fila(){
    Fila* f = (Fila*) malloc (sizeof(Fila));
    if(f!= NULL){
        f->tamanho = 0;
        f->inicio = 0;
        f->fim = 0;
    }
    return f;
}

bool inserir(Fila* f, int valor){
    if(f!= NULL && f->tamanho < MAX){
        f->qtd[f->fim] = valor;
        f->fim = (f->fim + 1) % MAX;
        f->tamanho++;
        return true;
    }
    return false;
}

bool remover(Fila* f, int *valor){
    if(f!= NULL && f->tamanho > 0){
        *valor = f->qtd[f->inicio];
        f->inicio = (f->inicio + 1) % MAX;
        f->tamanho--;
        return true;
    }
    return false;
}

bool acessar(Fila* f){
    if(f!= NULL && f->tamanho > 0){
        return f->qtd[f->inicio];
        return true;
    }
    return false;
}

bool destruir(Fila* f){
    if(f!= NULL){
        free(f);
        return true;
    }
    return false;
}

int tamanho(Fila* f){
    return f->tamanho;
}

bool cheiaVazio(Fila* f){
    if(f->tamanho == MAX){
        printf("A fila esta cheia!\n ");
        return true;
    }else if(f->tamanho == 0){
        printf("Fila vazia!\n ");
        return true;
    }else{
        printf("Fila nao estar nem cheia e nem vazia! ");
        return false;
    }
}

bool imprimir(Fila* f){
    if(f!= NULL && f->tamanho > 0){
        int i = f->inicio;
        printf("[ ");
        for(int j = 0; j < f->tamanho; j++){
            printf("%d ", f->qtd[i]);
            i = (i + 1) % MAX;
        }
        printf("]\n");
        return true;
    }
    return false;
}