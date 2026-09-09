#ifndef PILHA_H
#define PILHA_H

typedef struct pilha Pilha;

Pilha* criar_pilha();
bool push(Pilha* p, int valor);
bool pop(Pilha* p, int *valor);
bool top(Pilha* p);
bool destroy_stack(Pilha* p);
int size(Pilha* p);
void is_full(Pilha* p);

#endif