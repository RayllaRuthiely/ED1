#include <stdio.h>
#include "Conjunto.h"
#include <stdlib.h>

struct conjunto{
    int elementos; // quantidade de elementos do conjunto
    int *dados; //vetor de inteiros que armazena os elementos do conjunto
};

Conjunto* criar_conjunto(){
    Conjunto* c = (Conjunto*) malloc (sizeof(Conjunto));
    if(c != NULL){
        c->dados = (int*) malloc (20 * sizeof(int));
        c->elementos = 0;
    }
    return c;
}

int inserir(Conjunto* c, int valor){
    if(c != NULL && c->elementos < 20){
        c->dados[c->elementos] = valor;
        c->elementos++;
        return 1; // sucesso
    }
    return 0; // falha
}

int remover(Conjunto* c, int *valor){
    if(c != NULL && c->elementos > 0){
        *valor = c->dados[c->elementos - 1];
        c->elementos--;
        return 1; // sucesso
    }
    return 0; // falha
}

Conjunto* intersecao(Conjunto* c1, Conjunto* c2){
    if(c1 != NULL && c2 != NULL){
        Conjunto* c3 = criar_conjunto();
        if(c3 == NULL) return NULL;

        for(int i = 0; i < c1->elementos; i++){
            for(int j = 0; j < c2->elementos; j++){
                if(c1->dados[i] == c2->dados[j]){
                    inserir(c3, c1->dados[i]);
                    break;
                }
            }
        }
        return c3;
    }
    return NULL;
}

Conjunto* diferenca(Conjunto* c1, Conjunto* c2){
    if(c1!= NULL && c2!= NULL){
        Conjunto* c3 = criar_conjunto();
        if(c3 == NULL) return NULL;

        // Para cada elemento de c1, verifica se ele NÃO está em c2
        for(int i = 0; i < c1->elementos; i++){
            int encontrado_c2 = 0;

            for(int j = 0; j < c2->elementos; j++){
                if(c1->dados[i] == c2->dados[j]){
                    encontrado_c2 = 1;
                    break;
                }
            }
            // Se NÃO foi encontrado em c2, ele faz parte da diferença!
            if(! encontrado_c2){
                inserir(c3, c1->dados[i]);
            }

        }
        return c3;
    }
    return NULL;
}

Conjunto* uniao(Conjunto* c1, Conjunto* c2){
    if(c1 != NULL && c2 != NULL){
        Conjunto* c3 = criar_conjunto();
        if(c3 == NULL) return NULL;

        for(int i = 0; i < c1->elementos; i++){
            inserir(c3, c1->dados[i]);
        }
        for(int j = 0; j < c2->elementos; j++){
            int encontrado = 0;
            for(int k = 0; k < c3->elementos; k++){
                if(c2->dados[j] == c3->dados[k]){
                    encontrado = 1;
                    break;
                }
            }
            if (!encontrado){
                inserir(c3, c2->dados[j]);
            }
            
        }
        return c3;
    }
    return NULL;
}

int maiorValor(Conjunto* c){
    if(c != NULL && c->elementos > 0){
        int maior = c->dados[0];
        for(int i = 1; i < c->elementos; i++){
            if(c->dados[i] > maior){
                maior = c->dados[i];
            }
        }
        return maior;
    }
    return -1;
}

int menorValor(Conjunto* c){
    if(c != NULL && c->elementos > 0){
        int menor = c->dados[0];
        for(int i = 1; i < c->elementos; i++){
            if(c->dados[i] < menor){
                menor = c->dados[i];
            }
        }
        return menor;
    }
    return -1;
}

int iguais(Conjunto* c1, Conjunto* c2){
    if(c1 != NULL && c2 != NULL){
        if(c1->elementos != c2->elementos){
            return 0; // conjuntos diferentes
        }
        for(int i = 0; i < c1->elementos; i++){
            int encontrado = 0;
            for(int j = 0; j < c2->elementos; j++){
                if(c1->dados[i] == c2->dados[j]){
                    encontrado = 1;
                    break;
                }
            }
            if(!encontrado){
                return 0; // conjuntos diferentes
            }
        }
        return 1; // conjuntos iguais
    }
    return 0; // falha
}

int tamanho(Conjunto* c){
    if(c != NULL){
        return c->elementos;
    }
    return -1; // falha
}

int vazioOuCheio(Conjunto* c){
        if(c->elementos == 0){
            return 1; // conjunto vazio
        } else if(c->elementos == 10){
            return 2; // conjunto cheio
        } else {
            return 0; // conjunto parcialmente cheio
        }
    return -1; // falha
}

void liberar(Conjunto* c){
    if(c!= NULL){
        free(c->dados);
        free(c);
    }
}

void imprimir(Conjunto* c){
    if(c!= NULL && c->elementos > 0){
        printf("{ ");
        for(int i = 0; i < c->elementos; i++){
            printf("%d ", c->dados[i]);
        }
        printf("}\n");
    }else{
        printf("{ }\n"); // se for nulo, vai imprimir vazio
    }
}