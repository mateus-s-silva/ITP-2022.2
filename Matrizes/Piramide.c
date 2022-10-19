#include <stdio.h>

void imprime_matriz(int x, int matriz[x][x]){
  for(int i = 0; i < x; i++){
    for(int j = 0; j < x; j++){
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
}

void altera_matriz(int indice, int matriz[indice][indice]){
  
  for(int k = 1; k < indice; k++){
    for(int i = k; i < indice-k; i++){
      for(int j = k; j < indice-k; j++){
        matriz[i][j] += 1;
      }
    }
  }
  
}

int main() {

  int indice;

  scanf("%d", &indice);

  int matriz[indice][indice];
  
  for(int i = 0; i < indice; i++){
    for(int j = 0; j < indice; j++){
      matriz[i][j] = 1;
    }
  }

  altera_matriz(indice, matriz);
  imprime_matriz(indice, matriz);
  
  return 0;
}