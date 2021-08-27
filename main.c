
// PROFESSOR Usei como base o algorítmo em javascript que está neste link: http://nick-aschenbach.github.io/blog/2014/07/06/2d-fractal-terrain/
#include <stdio.h>
#include <stdlib.h>

// função que via gerar as alturas
int gera_linha(int pos_esquerda, int pos_direita, int tam, int* vet, int var){
  
  int pos_media;
  int altura_media = (vet[pos_esquerda] + vet[pos_direita])/2 + rand()%(2*var + 1) - var;
  


  if (pos_direita == pos_esquerda + 1){
    vet[pos_media] = altura_media;
    return altura_media;
    
  }
  else{
    gera_linha(0, pos_media,tam, vet,var);
    gera_linha(pos_media, tam-1, tam, vet,var);
    return altura_media;
  }
}



int main () {

int var=2;
int tam=10;
int altura_esquerda=10;
int pos_esquerda=0;
int pos_direita=tam -1;
int altura_direita=10;


// vetor que vai armazenar as alturas 
int linha[tam];
for (int i= 0; i< tam; i++){
  linha[i] = 0;
}

linha[pos_esquerda] = altura_esquerda;
linha[pos_direita] = altura_direita;

gera_linha(pos_esquerda,pos_direita, tam,linha,var);

for(int i=0; i< tam; i++){
  printf("%d ", linha[i]);
}
  return 0;
}

