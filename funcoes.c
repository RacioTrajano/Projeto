#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "definicoes.h"



// função que via gerar as alturas
void gera_linha(int pos_esquerda, int pos_direita, int tam, int* vet, int var){
  if(var == 0) var = 1;

  int pos_media= (pos_esquerda + pos_direita) /2;

  if (pos_media == pos_esquerda){
	return;
  }
  else{
    vet[pos_media] = (vet[pos_esquerda] + vet[pos_direita])/2 + rand()%(2*var + 1) - var;

    gera_linha(pos_esquerda, pos_media,tam, vet,var/2);
    gera_linha(pos_media, pos_direita, tam, vet,var/2);
  }
}

// função que gera a matriz
void gera_imagem(int maior, int tam, pixel matriz[maior][tam], int* linha, pixel pixel_cor){

for(int i = 0; i<tam; i++ ){
  for(int j = maior - linha[i]; j< maior; j++){
    matriz[j][i] = pixel_cor;
  }
}

}