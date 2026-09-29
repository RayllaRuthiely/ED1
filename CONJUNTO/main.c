#include <stdio.h>
#include "Conjunto.h"

int main(){

    Conjunto* c1 = criar_conjunto();
    int vetor1[] = {1,2,3,4,5,6,7,8,9,10};
    Conjunto* c2 = criar_conjunto();
    int vetor2[] = {2,4,7,10,11,8,9,0,6,5};

    for(int i = 0; i < 10; i++){
        inserir(c1, vetor1[i]);
    }
    imprimir(c1);

    for(int i = 0; i < 10; i++){
        inserir(c2, vetor2[i]);
    }
    imprimir(c2);

    Conjunto* c3 = intersecao(c1, c2);
    printf("Intersecao: ");
    imprimir(c3);

    Conjunto* c4 = uniao(c1, c2);
    printf("Uniao: ");
    imprimir(c4);

    Conjunto* c5 = diferenca(c1, c2);
    printf("Diferenca: ");
    imprimir(c5);

    printf("------------------------------------------------------\n");
    printf("O tamanho do primeiro conjunto e: %d\n", tamanho(c1));
    printf("O tamanho do segundo conjunto e: %d\n", tamanho(c2));
    printf("O tamanho do terceiro (Intersecao) conjunto e: %d\n", tamanho(c3));
    printf("O tamanho do terceiro (Uniao) conjunto e: %d\n", tamanho(c4));
    printf("O tamanho do terceiro (Diferenca) conjunto e: %d\n", tamanho(c5));
    printf("------------------------------------------------------\n");

    printf("------------------------------------------------------\n");
    printf("Maior valor do primeiro conjunto: %d\n", maiorValor(c1));
    printf("Maior valor do primeiro conjunto: %d\n", maiorValor(c2));
    printf("Menor valor do primeiro conjunto: %d\n", menorValor(c1));
    printf("Menor valor do primeiro conjunto: %d\n", menorValor(c1));
    printf("------------------------------------------------------");




    liberar(c1);
    liberar(c2);
    liberar(c3);
    liberar(c4);
    liberar(c5);

    return 0;
}