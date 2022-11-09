#ifndef SISTEMA
#define SISTEMA

#include <stdio.h>

//Estrutura do sanduiche
typedef struct {
    int codigo;
    char nome[51];
    char descricao[201];
    char disponivel;
    float preco[3];
    int prox_arq;
} sanduiche;

//Estrutura da bebida
typedef struct {
    int codigo;
    char nome[51];
    char disponivel;
    float preco[3];
    int prox_arq;
} bebida;

//Estrutura do acompanhamento extra
typedef struct {
    int codigo;
    char nome[51];
    char disponivel;
    float preco[3];
    int prox_arq;
} extra;

//Estrutura da sobremesa
typedef struct {
    int codigo;
    char nome[51];
    char disponivel;
    float preco[3];
    int prox_arq;
} sobremesa;

//Estrutura do cabeçalho
typedef struct {
    int pos_cabeca;
    int pos_topo;
} cabecalho_item;

void criar_lista_item(FILE* arq);

void inserir_sd_arquivo(FILE* arq, )

#endif // SISTEMA
