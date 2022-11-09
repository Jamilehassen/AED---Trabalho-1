#include "../Headers/sistema.h"
#include <stdio.h>
#include <stdlib.h>


void criar_lista_item(FILE* arq){
  cabecalho_item * cab = (cabecalho_item*) malloc(sizeof(cabecalho_item));
  cab->pos_cabeca = -1;
  cab->pos_topo = 0;
}