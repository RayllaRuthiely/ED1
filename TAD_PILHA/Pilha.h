#ifndef PILHA_H
#define PILHA_H

typedef struct pilha Pilha;

Pilha* criar_pilha();
void inserir(Pilha* p, int valor);
int remover(Pilha* p);
void acessar(Pilha* p);
void destruir_pilha(Pilha* p);
int tamanho(Pilha* p);
void cheia(Pilha* p);

#endif