#ifndef PILHA_H
#define PILHA_H
// A estrutura de dados pilha é uma estrutura de dados do tipo LIFO (Last In, First Out), ou seja, o último elemento a ser inserido é o primeiro a ser removido. A pilha é utilizada em diversas aplicações, como por exemplo, na avaliação de expressões matemáticas, na implementação de algoritmos de busca e ordenação, entre outros.
typedef struct pilha Pilha;


// Função para criar uma pilha
Pilha* criar_pilha();
bool push(Pilha* p, int valor);
bool pop(Pilha* p, int *valor);
bool top(Pilha* p);
bool destroy_stack(Pilha* p);
int size(Pilha* p);
bool is_full(Pilha* p);

#endif