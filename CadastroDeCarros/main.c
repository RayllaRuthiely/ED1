#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 10
#include "Pilha.h"

int main(){

    int id;
    char comando;

    Pilha* EstacionamentoPrincipal = criar_pilha();
    Pilha* EstacionamentoSecundario = criar_pilha();


    while(1){
        printf("Coloque o comado e o id do carro: ");
        scanf(" %c %d", &comando, &id);

        if(comando == 0 && id == 0){
            break;
        }else if(comando == 'i'){
            if(is_full(EstacionamentoPrincipal)){
                printf("Overflow.\n");
            }else{
                push(EstacionamentoPrincipal, id);
                printf("Carro %d inserido no estacionamento principal.\n", id);
            }
        }else if(comando == 'r'){
            int carro;
            int encontrado = 0;

            while(size(EstacionamentoPrincipal) > 0){
                pop(EstacionamentoPrincipal, &carro);

                if(carro == id){
                    encontrado = 1;
                    printf("Carro %d removido do estacionamento principal.\n", id);
                    break;
                }
                push(EstacionamentoSecundario, carro);
            
            }
            if(!encontrado){
                while(size(EstacionamentoSecundario) > 0){
                    pop(EstacionamentoSecundario, &carro);
                    push(EstacionamentoPrincipal, carro);
                }
                printf("Carro %d nao encontrado no estacionamento principal.\n", id);
            }
        }else{
            printf("Underflow.\n");
        }


    }

    return 0;
}