#include <stdio.h>
#include <stdlib.h>
#include "listaSequencial.h"


//Programa principal para testar as funções da lista sequencial

int main(){

    Lista *li;
    
    li = criarLista();
    liberarLista(li);
    int tamanho = tamanhoLista(li);
    if(listaCheia(li)){
        printf("A lista está cheia.\n");
    } else {
        printf("A lista não está cheia.\n");
    }
    if(listaVazia(li)){
        printf("A lista está vazia.\n");
    } else {
        printf("A lista não está vazia.\n");
    }

    int resultadoFinal = insereListaFinal(li, (struct Aluno){123, "João", 8.5, 9.0});
    int resultadoInicio = inserirListaInicio(li, (struct Aluno){456, "Maria", 7.5, 8.0});
    int resultadoOrdenada = insereListaOrdenada(li, (struct Aluno){789, "Pedro", 9.0, 9.5});    



    return 0;
}    