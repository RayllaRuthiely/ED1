#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

int main(){
    int valor, opcao;


    Pilha* p = criar_pilha();
    inserir(p, 10);
    inserir(p, 20);
    inserir(p, 30);
    remover(p);
    acessar(p);
    destruir_pilha(p);

    return 0;
}