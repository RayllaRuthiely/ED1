#include <stdio.h>
#include "pixEd.h"

void imprimirTransacao(Transacao transacao) {
    printf("Conta Origem: %d\n", transacao.contaOrigem);
    printf("Conta Destino: %d\n", transacao.contaDestino);
    printf("Valor: %.2f\n", transacao.valor);
}


