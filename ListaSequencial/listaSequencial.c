#include <stdio.h>
#include <stdlib.h>
#include "listaSequencial.h"


//Implementação das funções da lista sequencial

struct lista{
    int qtd;
    struct Aluno dados[TAMANHO_MAXIMO];
};

Lista *criarLista(){
    Lista *li = (Lista*) malloc(sizeof(struct lista));
    if(li != NULL){
        li -> qtd = 0;
    }
    return li;
}

void liberarLista(Lista *li){
    free(li);
}

int tamanhoLista(Lista *li){
    if(li == NULL){
        return -1;
    }
    return li -> qtd;
}

int listaCheia(Lista *li){
    if(li == NULL){
        return -1;
    }
    return (li -> qtd == TAMANHO_MAXIMO);
}

int listaVazia(Lista *li){
    if(li == NULL){
        return -1;
    }
    return (li -> qtd == 0);
}

int insereListaFinal(Lista *li, struct Aluno al){
    if(li == NULL){
        return 0;
    }
    if(listaCheia(li)){
        return 0;
    }
    li -> dados[li -> qtd] = al;
    li -> qtd++;
    return 1;
}

int inserirListaInicio(Lista *li, struct Aluno al){
    if(li == NULL){
        return 0;
    }
    if(listaCheia(li)){
        return 0;
    }
    for(int i = li -> qtd - 1; i >= 0; i--){
        li -> dados[i + 1] = li -> dados[i];
    }
    li -> dados[0] = al;
    li -> qtd++;
    return 1;
}

int inserirListaOrdenada(Lista *li, struct Aluno al){
    if(li == NULL){
        return 0;
    }
    if(listaCheia(li)){
        return 0;
    }
    int i, j = 0;
    while(j < li -> qtd && li -> dados[j].matricula < al.matricula){
        j++;
    }
    for(i = li -> qtd - 1; i >= j; i--){
        li -> dados[i + 1] = li -> dados[i];
    }
    li -> dados[j] = al;
    li -> qtd++;
    return 1;
}