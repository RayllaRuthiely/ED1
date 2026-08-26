#ifndef PONTO_H
#define PONTO_H

typedef struct ponto {
	float x;
	float y;
} Ponto;

//Criar instância de Ponto
Ponto* Ponto_criar(float x, float y);

// Deletar instância de Ponto
void Ponto_deletar(Ponto* p);

// Imprimir instância de Ponto
void Ponto_imprimir(Ponto* p);

//Copiar os valores das variáveis para variáveis float passadas por parâmetro
void Ponto_copiar(Ponto* p, float* x, float* y);

//Modificar os valores das variáveis do ponto
void Ponto_modificar(Ponto* p, float x, float y);

//Calcular a distância entre dois pontos
float Ponto_distancia(Ponto* p1, Ponto* p2);


#endif