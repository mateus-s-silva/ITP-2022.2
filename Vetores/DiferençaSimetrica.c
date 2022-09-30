#include <stdio.h>

void ordena_vetor(int len, int vetor[len]) {
  int i, j, aux, p;
  for (i=0; i<len-1; i++) {
    for (j=i+1; j < len; j++) {
      if (vetor[i] > vetor[j]) {
        aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
      }
    }
  }
}

int main() {

  int N, M, aux = 0;

  scanf("%d %d", &N, &M);

  if(N > 0 && N < 50 && M > 0 && M < 50){
    int conjA[N], conjB[M], diferencaSim[N+M], aux = 0, check = 1;

    for(int i = 0; i < N; i++){
      scanf("%d", &conjA[i]);
    }

    for(int j = 0; j < M; j++){
      scanf("%d", &conjB[j]);
    }

    for(int k = 0; k < N; k++){
      check = 1;
      for(int z = 0; z < M; z++){
        if(conjA[k] == conjB[z]){
          check = 0;
          break;
        }
      }
      if(check == 1){
        diferencaSim[aux] = conjA[k];
        aux++;
      }
    }

    for(int k = 0; k < M; k++){
      check = 1;
      for(int z = 0; z < N; z++){
        if(conjB[k] == conjA[z]){
          check = 0;
          break;
        }
      }
      if(check == 1){
        diferencaSim[aux] = conjB[k];
        aux++;
      }
    }

    ordena_vetor(aux, diferencaSim);
    

    for(int y = 0; y < aux; y++){
      printf("%d ", diferencaSim[y]);
    }
    
  }    
  
  return 0;
}