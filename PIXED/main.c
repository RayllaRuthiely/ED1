#include <stdio.h>
#include "pixEd.h"
#include "fila.h"
#define MAX 10

int main(){

    unsigned int buffer_tamanho;
    scanf("%u", &buffer_tamanho);

    Fila* fila = criarFila(buffer_tamanho);
    if(fila == NULL){
        printf("Erro ao criar a fila.\n");
        return 1;
    }
    Transacao transacao;
    while(1){
        scanf("%d %d %f", &transacao.contaOrigem, &transacao.contaDestino, &transacao.valor);
        if(transacao.contaOrigem == 0 && transacao.contaDestino == 0 && transacao.valor == 0.0){
            break; // Sair do loop se a transação for 0 0 0.0
        }
        if(enfileirar(fila, transacao)){
            continue;
        } else {
            liberarFila(fila);
            enfileirar(fila, transacao);
        }
    }
    liberarFila(fila);
    return 0;
}