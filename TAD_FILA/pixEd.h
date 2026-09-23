#ifndef PIXED_H
#define PIXED_H

typedef struct{
    int contaOrigem;
    int contaDestino;
    float valor;
} Transacao;

void imprimirTransacao(Transacao);
#endif