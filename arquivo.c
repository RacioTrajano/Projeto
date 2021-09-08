#include <stdio.h>

#include "definicoes.h"

void gera_ppm(int x, int y, pixel matriz[x][y], char *nome){

  FILE *arquivo = fopen(nome, "w");
  if (arquivo != NULL){
    fprintf(arquivo,"P3\n");
    fprintf(arquivo,"%d %d\n", x, y);
    fprintf(arquivo,"%d\n", 255);
    for (int i = 0; i< x; i++){
      for (int j= 0; j<y; j++){
        fprintf(arquivo,"%d %d %d\n", matriz[i][j].red, matriz[i][j].green, matriz[i][j].blue );
      }
    }
    fclose(arquivo);
  }
  else {
    printf("Erro ao abrir arquivo");
  }

}