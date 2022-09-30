#include <stdio.h>

void imprimeApv(int x, float vetor[x], int vetor2[x]){
  printf("Aprovados: ");
  for(int i = 0; i < x; i++){
    if(i == x-1){
      printf("%d (%.1f)", vetor2[i], vetor[i]);
    }
    else{
      printf("%d (%.1f), ", vetor2[i], vetor[i]);
    }
  }
}
void imprimeRec(int x, float vetor[x], int vetor2[x]){
  printf("\nRecuperação: ");
  for(int i = 0; i < x; i++){
    if(i == x-1){
      printf("%d (%.1f)", vetor2[i], vetor[i]);
    }
    else{
      printf("%d (%.1f), ", vetor2[i], vetor[i]);
    }
  }
}
void imprimeRep(int x, float vetor[x], int vetor2[x]){
  printf("\nReprovados: ");
  for(int i = 0; i < x; i++){
    if(i == x-1){
      printf("%d (%.1f)", vetor2[i], vetor[i]);
    }
    else{
      printf("%d (%.1f), ", vetor2[i], vetor[i]);
    }
  }
}

int main() {
  int N, numChamada, apv = 0, rec = 0, rep = 0;
  
  scanf("%d", &N);

  float notas[N], nota;

  //Armazena todas as notas e define o tamanho dos vetores apv, rec e rep

  for(int i = 0; i < N; i++){
    scanf("%d - %f", &numChamada, &nota);
    notas[i] = nota;
    if(notas[i] >= 7.0){
      apv++;
    }
    else if(notas[i] >= 5.0 && notas[i] < 7){
      rec++;
    }
    else{
      rep++;
    }
  }

  float listaApv[apv], listaRec[rec], listaRep[rep];
  int chamadaApv[apv], chamadaRec[rec], chamadaRep[rep];
  
  for(int j = 0, w = 0, l = 0, r = 0; j < N; j++){
    if(notas[j] >= 7.0){
      listaApv[w] = notas[j];
      chamadaApv[w] = j+1;
      w++;
    }
    else if(notas[j] >= 5.0){
      listaRec[l] = notas[j];
      chamadaRec[l] = j+1;
      l++;
    }
    else{
      listaRep[r] = notas[j];
      chamadaRep[r] = j+1;
      r++;
    }
  }

  imprimeApv(apv, listaApv, chamadaApv);
  imprimeRec(rec, listaRec, chamadaRec);
  imprimeRep(rep, listaRep, chamadaRep);
  
  return 0;
}