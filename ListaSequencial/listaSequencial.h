#ifndef LISTA_SEQUENCIAL_H
#define LISTA_SEQUENCIAL_H
#define TAMANHO_MAXIMO 100

// Prototipo da estrutura de dados
struct Aluno{
    int matricula;
    char nome[30];
    float n1, n2;
};

typedef struct lista Lista;
Lista* criarLista();
void liberarLista(Lista *li);
int tamanhoLista(Lista *li);
int listaCheia(Lista *li);
int listaVazia(Lista *li);
int insereListaFinal(Lista *li, struct Aluno al);
int insereListaInicio(Lista *li, struct Aluno al);
int insereListaOrdenada(Lista *li, struct Aluno al);

#endif