
// PROFESSOR Usei como base o algorítmo em javascript que está neste link: http://nick-aschenbach.github.io/blog/2014/07/06/2d-fractal-terrain/
#include <stdio.h>

// função que via gerar as alturas
int gera_linha(int altura_esquerda, int altura_direita, int tam, int* vet){
  int pos_direita;
  int pos_esquerda;
  int pos_media;
  int altura_media = (altura_esquerda + altura_direita)/2;
  vet[0] =altura_esquerda;
  vet[tam-1] = altura_direita;


  if (pos_direita == pos_esquerda + 2){
    return altura_media;
    vet[pos_media] = altura_media;
  }
  else{
    gera_linha(altura_esquerda,altura_media, tam, vet);
    gera_linha(altura_media, altura_direita, tam, vet);
    return altura_media;
  }
}






int main () {


int tam;
int altura_esquerda;
int altura_direita;

// vetor que vai armazenar as alturas 
int linha[tam];

gera_linha(altura_esquerda,altura_direita, tam,linha);
  return 0;
}