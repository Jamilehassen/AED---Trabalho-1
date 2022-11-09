#ifndef SISTEMA
#define SISTEMA

typedef struct {
    int codigo;
    char nome[51];
    char descricao[201];
    char disponivel;
    float preco[3];
} sanduiche;

typedef struct {
    int codigo;
    char nome[51];
    char disponivel;
    float preco[3];
} bebida;

typedef struct {
    int codigo;
    char nome[51];
    char disponivel;
    float preco[3];
} extra;

typedef struct {
    int codigo;
    char nome[51];
    char disponivel;
    float preco[3];
} sobremesa;

typedef struct {
    int pos_cabeca;
} cabecalho_item;



#endif // SISTEMA
