#include <stdio.h>
// Entrada: tempo máximo com duas casas decimais
// Saída: Total de atletas e número de séries necessárias
int main(){
    float tempo, limite;
    int serie, totalAtl = 0;

    scanf("%f", &limite);

    while(tempo != -1){
        scanf("%f", &tempo);
        if(tempo <= limite && tempo != -1){
            totalAtl++;
        }
    }

    if(totalAtl > 8){
        serie = totalAtl/8 + 1;
        printf("%d %d", totalAtl, serie);
    }
    else if(totalAtl <= 8 && totalAtl > 0){
        serie = 1;
        printf("%d %d", totalAtl, serie);
    }
    else{
        serie = 0;
        printf("%d %d", totalAtl, serie);        
    }

    return 0;
}