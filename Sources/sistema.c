#include "../Headers/sistema.h"
#include <stdio.h>
#include <stdlib.h>

void escrever_cab_item(FILE* arq, cabecalho_item* cab){
  fseek(arq, 0, SEEK_SET);
  fwrite(cab, sizeof(cab), 1, arq);
}

cabecalho_item* ler_cab_item(FILE* arq){
  cabecalho_item* cab = (cabecalho_item*) malloc(sizeof(cabecalho_item));
  fseek(arq, 0, SEEK_SET);
  fread(cab, sizeof(cab), 1, arq);
  return cab;
}

void criar_lista_item(FILE* arq){
  cabecalho_item * cab = (cabecalho_item*) malloc(sizeof(cabecalho_item));
  cab->pos_cabeca = -1;
  cab->pos_topo = 0;
  escreve_cab_item(arq, cab);
  free(cab);
}


void inserir_sd_arquivo(FILE* arq, sanduiche sd){
  
  
}

void imprimir_sd_arquivo(FILE* arq);