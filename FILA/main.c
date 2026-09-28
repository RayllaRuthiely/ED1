#include <stdio.h>
#include "Fila.h"

int main(){

    Fila* f = criar_fila();
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(int i = 0; i < 10; i++){
        inserir(f, vetor[i]);
    }
    printf("Fila: ");
    imprimir(f);
    acessar(f);
    printf("Elemento no inicio da fila: %d\n", acessar(f));

    int guardado;
    remover(f, &guardado);
    printf("Fila apos remover o elemento: ");
    imprimir(f);
    printf("Valor removido: %d\n", guardado);

    tamanho(f);
    printf("Tamanho da fila: %d\n", tamanho(f));

    destruir(f);

    return 0;
}