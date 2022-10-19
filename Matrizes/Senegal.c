#include <stdio.h>


void organizaBandeira(int num, int larg, int alt, int bandeira[alt][larg]){

  for(int i = 0; i < larg/3; i++){
      for(int k = 0; k < alt; k++){
        bandeira[k][i] = num + 1;
      }
    }
  for(int i = larg/3; i < larg/1.5; i++){
      for(int k = 0; k < alt; k++){
        bandeira[k][i] = num + 2;
      }
    }
  for(int i = larg/1.5; i < larg; i++){
      for(int k = 0; k < alt; k++){
        bandeira[k][i] = num + 3;
      }
    }

}

int calcularAposta(int larg, int alt, int bandeira[alt][larg], char cor){

  int somaVerde = 0, somaAmarelo = 0, somaVermelho = 0;

  if(cor == 'G'){
    for(int i = 0; i < larg/3; i++){
      for(int k = 0; k < alt; k++){
        somaVerde = somaVerde + bandeira[k][i];
      }
    }
    return somaVerde;
  }
  else if(cor == 'Y'){
    for(int i = larg/3; i < larg/1.5; i++){
      for(int k = 0; k < alt; k++){
        somaAmarelo = somaAmarelo + bandeira[k][i];
      }
    }
    return somaAmarelo;
  }
  else if(cor == 'R'){
    for(int i = larg/1.5; i < larg; i++){
      for(int k = 0; k < alt; k++){
        somaVermelho = somaVermelho + bandeira[k][i];
      }
    }
    return somaVermelho;
  }

}

int main() {

  int larg, alt, num, resultado;

  char cor; 

  scanf("%d %d %c", &larg, &num, &cor);

  alt = (larg * 2)/3;

  int band[alt][larg];

  organizaBandeira(num, larg, alt, band);
  resultado = calcularAposta(larg, alt, band, cor);

  printf("%d", resultado);
  
  return 0;
}