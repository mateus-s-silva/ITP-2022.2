#include <stdio.h>

// Classe M: 50% água, 20% de florestas
// Planeta Hostil: pelo menos um X
// Planeta Aquático: possui 85% de água
// Planeta Desértico: 60% de área de deserto
// Planeta inóspito: um else disso tudo acima

int main() {

  int N, M;

  scanf("%d %d", &N, &M);

  char planeta[N][M];

  float agua = 0, veget = 0, desert = 0, total = N*M, aux = 0;

  for(int i = 0; i < N; i++){
    for(int k = 0; k < M; k++){
      scanf(" %c", &planeta[i][k]);
    }
  }

  for(int i = 0; i < N; i++){
    for(int k = 0; k < M; k++){
      if(planeta[i][k] == 'X'){ 
        printf("Planeta Hostil");
        aux = 1;
      }
      else if(planeta[i][k] == '~') agua++;
      else if(planeta[i][k] == '^') desert++;
      else if(planeta[i][k] == '*') veget++;
    }
  }
  if(aux == 0){
    if(agua/total >= 0.5 && veget/total >= 0.2){
      printf("Planeta Classe M");
      }
    else if(agua/total >= 0.85){
      printf("Planeta Aquático");
      }
    else if(desert/total >= 0.6){
      printf("Planeta Desértico");
      }
    else if(veget/total >= 0.65){
      printf("Planeta Selvagem");
      }
    else{
      printf("Planeta Inóspito");
      }
    }

  return 0;
}