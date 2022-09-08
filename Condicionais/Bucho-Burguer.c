#include <stdio.h>

int main() {
  // Entrada: número do combo, qtd de dinheiro
  // 1 = 12 , 2 = 23, 3 = 31, 4 = 28, 5 = 15
  int combo_number, qtd_din, troco, falta; 
  scanf("%d %d", &combo_number, &qtd_din);

  switch(combo_number){
    case 1: if(qtd_din == 12) {
      printf("Deu certim!");
    }
      else if(qtd_din > 12){
        troco = qtd_din - 12;
        printf("Troco = %d reais", troco);
      }
      else{
        falta = 12 - qtd_din;
        printf("Saldo insuficiente! Falta %d reais", falta);
      } break;
    case 2: if(qtd_din == 23) {
      printf("Deu certim!");
    }
      else if(qtd_din > 23){
        troco = qtd_din - 23;
        printf("Troco = %d reais", troco);
      }
      else{
        falta = 23 - qtd_din;
        printf("Saldo insuficiente! Falta %d reais", falta);
      } break;
    case 3: if(qtd_din == 31) {
      printf("Deu certim!");
    }
      else if(qtd_din > 31){
        troco = qtd_din - 31;
        printf("Troco = %d reais", troco);
      }
      else{
        falta = 31 - qtd_din;
        printf("Saldo insuficiente! Falta %d reais", falta);
      } break;
    case 4: if(qtd_din == 28) {
      printf("Deu certim!");
    }
      else if(qtd_din > 28){
        troco = qtd_din - 28;
        printf("Troco = %d reais", troco);
      }
      else{
        falta = 28 - qtd_din;
        printf("Saldo insuficiente! Falta %d reais", falta);
      } break;
    case 5: if(qtd_din == 15) {
      printf("Deu certim!");
    }
      else if(qtd_din > 15){
        troco = qtd_din - 15;
        printf("Troco = %d reais", troco);
      }
      else{
        falta = 15 - qtd_din;
        printf("Saldo insuficiente! Falta %d reais", falta);
      } break;
  }
      
  return 0;
}