#ifndef PILHA_H
#define PILHA_H

typedef struct pilha Pilha;

Pilha* criar_pilha();
bool push(Pilha* p, int valor);
bool pop(Pilha* p);
bool top(Pilha* p);
bool destroy_stack(Pilha* p);
bool size(Pilha* p);
bool is_full(Pilha* p);

#endif