#ifndef CONJUNTO_H
#define CONJUNTO_H

typedef struct conjunto Conjunto;

Conjunto* criar_conjunto();
int inserir(Conjunto* c, int valor);
int remover(Conjunto* c, int *valor);
Conjunto* intersecao(Conjunto* c1, Conjunto* c2);
Conjunto* diferenca(Conjunto* c1, Conjunto* c2);
Conjunto* uniao(Conjunto* c1, Conjunto* c2);
int maiorValor(Conjunto* c);
int menorValor(Conjunto* c);
int iguais(Conjunto* c1, Conjunto* c2);
int tamanho(Conjunto* c);
int vazioOuCheio(Conjunto* c);
void imprimir(Conjunto* c);
void liberar(Conjunto* c);

#endif