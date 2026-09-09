#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 10
#include "Pilha.h"

int main(){
    int valor, opcao;


    Pilha* p = criar_pilha();
    push(p, 1);
    push(p, 2);
    push(p, 3);

    int temp;
    while(pop(p, &temp)){
        printf("Valor desempilhado: %d\n", temp);
    }


    while(1){
        printf("\nEscolha uma opção:\n");
        printf("1. Empilhar\n");
        printf("2. Desempilhar\n");
        printf("3. Acessar elemento do topo\n");
        printf("4. Tamanho da pilha\n");
        printf("5. Verificar se a pilha está cheia\n");
        printf("6. Sair\n");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("Digite o valor a ser empilhado: ");
                scanf("%d", &valor);
                if(push(p, valor)){
                    printf("Valor empilhado com sucesso.\n");
                } else {
                    printf("Pilha cheia. Não é possível empilhar.\n");
                }
                break;
            case 2:
                if(pop(p, &valor)){
                    printf("Valor desempilhado com sucesso.\n");
                } else {
                    printf("Pilha vazia. Não é possível desempilhar.\n");
                }
                break;
            case 3:
                top(p);
                break;
            case 4:
                temp = size(p);
                printf("Tamanho da pilha: %d\n", temp);
                break;
            case 5:
                is_full(p);
                break;
            case 6:
                destroy_stack(p);
                exit(0);
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}