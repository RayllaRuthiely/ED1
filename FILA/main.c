#include <stdio.h>
#include "Fila.h"

int main(){
    
    Fila* f = criar_fila();
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(int i = 0; i < 10; i++){
        inserir(f, vetor[i]);
    }
    printf("Fila: ");
    imprimir(f);

    int guardado;
    remover(f, &guardado);
    printf("\nValor removido: %d\n", guardado);

    destruir(f);

    return 0;
}