#include <stdio.h>


void verificaTab(int x, int y, char jogada, char jogo[3][3]){

  int checa; // KKKKKKKKKKKKKKK

  if(jogo[x][y] != '.'){
    checa = -1;
  }
  else{
    jogo[x][y] = jogada;
    checa = 0;
    if(jogo[0][y] == jogo[1][y] && jogo[0][y] == jogo[2][y]){
      checa = 1;
    }
    else if(jogo[x][0] == jogo[x][1] && jogo[x][0] == jogo[x][2]){
      checa = 1;
    }
    else if (jogo[0][0] == jogo[1][1] && jogo[1][1] == jogo[2][2]) {
    checa = 1;
    }
    else if(jogo[0][2] == jogo[1][1] && jogo[1][1] == jogo[2][0]) {
    checa = 1;
    }
    jogo[x][y] = '.';
  }

  
  if (checa == 0) {
    printf("Continua o jogo.\n");
    } 
  else if (checa == 1) {
    printf("Boa jogada, vai vencer!\n");
    }
  else{
    printf("Jogada inválida!\n");
  }
}


int main(){

  char jogo[3][3];

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      scanf(" %c", &jogo[i][j]);
    }
  }

  int count, lin, col;
  char jogada;

  scanf("%d", &count);
  
  for(int k = 0; k < count; k++){
    scanf("%d %d %c", &lin, &col, &jogada);
    verificaTab(lin-1, col-1, jogada, jogo);
  }
  
  return 0;
} 