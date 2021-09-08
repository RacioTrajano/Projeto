// PROFESSOR Usei como base o algorítmo em javascript que está neste link: http://nick-aschenbach.github.io/blog/2014/07/06/2d-fractal-terrain/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "funcoes.h"
#include "definicoes.h"
#include "arquivo.h"



int main (int argc, char** argv) {

//Começar com variação metade do tam
int var=50;
int tam=100;
int altura_esquerda=50;
int pos_esquerda=0;
int pos_direita=tam -1;
int altura_direita=50;

// inicialização das variáveis que serão inicializadas na linha de comando
char nome[20] ="imagem.ppm";
char ind_var[2] = "-d";
char ind_nome[2] = "-o";
int cmp_var;
int cmp_nome;
//Trocar os parêmtros padrão pelos lidos
for (int i=0; i<argc; i++){
  cmp_var= strncmp(argv[i], ind_var,2);
  if (cmp_var ==0){
    sscanf(argv[i+1], "%d", &var);
  }
  cmp_nome =strncmp(argv[i],ind_nome,2);
  if(cmp_nome ==0){
    strcpy(nome,argv[i+1]);
  }
}

// Definição das cores
pixel pixel1;
pixel1.red = 250;
pixel1.green =0 ;
pixel1.blue=0;

pixel pixel0;
pixel0.red= 0;
pixel0.green=0;
pixel0.blue=0;

int maior;
// representa a maior altura possível da linha

if (altura_esquerda >= altura_direita){
  maior = altura_esquerda + var;
}
else {maior = altura_direita + var;}



//Semente das funções 
srand(time(NULL));


// vetor que vai armazenar as alturas 
int linha[tam];
for (int i= 0; i< tam; i++){
  linha[i] = 0;
}

// matriz gera_imagem
pixel matriz[tam][tam];
for(int i=0 ; i< tam; i++){
  for(int j=0; j<tam; j++){
    matriz[i][j] = pixel0;
  }
}

linha[pos_esquerda] = altura_esquerda;
linha[pos_direita] = altura_direita;


gera_linha(pos_esquerda,pos_direita, tam,linha,var);
gera_imagem(tam, tam, matriz, linha, pixel1);
gera_ppm(tam, tam, matriz,nome);

  return 0;
}

