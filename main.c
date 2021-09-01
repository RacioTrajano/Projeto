
// PROFESSOR Usei como base o algorítmo em javascript que está neste link: http://nick-aschenbach.github.io/blog/2014/07/06/2d-fractal-terrain/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// função que via gerar as alturas
void gera_linha(int pos_esquerda, int pos_direita, int tam, int* vet, int var){
  
  int pos_media= (pos_esquerda + pos_direita) /2;

  if (pos_media == pos_esquerda){
	return;
  }
  else{
    vet[pos_media] = (vet[pos_esquerda] + vet[pos_direita])/2 + rand()%(2*var + 1) - var;

    gera_linha(pos_esquerda, pos_media,tam, vet,var);
    gera_linha(pos_media, pos_direita, tam, vet,var);
  }
}

void gera_imagem(int maior, int tam, int matriz[maior][tam], int* linha){

for(int i = 0; i< tam; i++ ){
  for(int j = linha[i]; j<= 0; j--){
    matriz[j][i] = 1;
  }
}




}

int main (int argc, char** argv) {


int var=2;
int tam=5;
int altura_esquerda=10;
int pos_esquerda=0;
int pos_direita=tam -1;
int altura_direita=10;

int maior;
// representa a maior altura possível da linha

if (altura_esquerda >= altura_direita){
  maior = altura_esquerda + var;
}
else {maior = altura_direita + var;}



//Semente das funções rand###################################################
//srand(time(NULL));


// vetor que vai armazenar as alturas 
int linha[tam];
for (int i= 0; i< tam; i++){
  linha[i] = 0;
}

// matriz gera_imagem
int matriz[maior][tam];
for(int i=0 ; i< maior; i++){
  for(int j=0; j<tam; j++){
    matriz[i][j] = 0;
  }
}

linha[pos_esquerda] = altura_esquerda;
linha[pos_direita] = altura_direita;


gera_linha(pos_esquerda,pos_direita, tam,linha,var);
gera_imagem(maior, tam, matriz, linha);



for(int i=0; i< tam; i++){
  printf("%d ", linha[i]);
}

printf("\n");
for (int i = 0; i< maior; i++){
  for (int j= 0; j< tam; j++){
    printf("%d ", matriz[i][j]);
  }
  printf("\n");
}

printf("\n");



  return 0;
}



	


/*
void gera_ppm(matriz){
	escrever um arquivo no formato ppm a partir dos dados dessa matriz
}*/
