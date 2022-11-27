#include <stdio.h>
#include <stdlib.h>

void compute_votes(int n, int votes[n], int *most_voted, int *second_most_voted){

  int aux1 = 0, aux2 = 0, cont = 0;
// procura maior votado
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(votes[i] == votes[j]){
        cont++;
      }
    }
    if(cont > aux1){
      aux1 = cont;
      *most_voted = votes[i];
    }
    cont = 0;
  }
// procura segundo maior votado
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(votes[i] == votes[j]){
        cont++;
      }
    }
    if(cont > aux2 && cont < aux1){
      aux2 = cont;
      *second_most_voted = votes[i];
    }
    cont = 0;
  }
}

int main() {

  int n;

  scanf("%d", &n);

  int votos[n];

  for(int i = 0; i < n; i++){
    scanf("%d", &votos[i]);
  }

  int *primeiro, *segundo;

  primeiro = calloc(1, sizeof(int));
  segundo = calloc(1, sizeof(int));

  compute_votes(n, votos, primeiro, segundo);
  printf("%d %d", *primeiro, *segundo);



  return 0;
}