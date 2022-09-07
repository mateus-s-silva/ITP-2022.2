#include <stdio.h>
/* 1 - Heróis classe C, Lobo, 3c ou 1b
   2 - Heróis classe B, Tigre, 3b ou 1a
   3 - Heróis classe A, Demônio, 3a ou 1s
   4 - Heróis classe S, Dragão, 3s ou Saitama
   5 - Saitama, Divindade, Saitama */
int main(void) {
  int herois, classe, monstro;

  scanf("%d %d %d", &herois, &classe, &monstro);

  if(monstro == 1){
    if(herois>=3 && classe == 1 || classe == 2){
      printf("Heróis vencerão!");
    }
    else{
      printf("Melhor chamar Saitama!");
    }
  }
  else if(monstro == 2){
    if(herois>=3 && classe == 2 || classe == 3){
      printf("Heróis vencerão!");
    }
    else{
      printf("Melhor chamar Saitama!");
    }
  }
  else if(monstro == 3){
    if(herois>=3 && classe == 3 || classe == 4){
      printf("Heróis vencerão!");
    }
    else{
      printf("Melhor chamar Saitama!");
    }
  }
  else if(monstro == 4){
    if(herois>=3 && classe == 4 || classe == 5){
      printf("Heróis vencerão!");
    }
    else{
      printf("Melhor chamar Saitama!");
    }
  }
  else{
    if(classe == 5 && herois != 0){
      printf("Heróis vencerão!");
    }
    else{
      printf("Melhor chamar Saitama!");
    }
  }
  
  return 0;
}