#include <stdio.h>

int main(){
    // Entrada: Número total de linhas 
    // Saída: Linha 1: 1 
    //        Linha 2: 2, 3 e por aí vai

    int linha, i, j, num=1;
    
    scanf("%d", &linha);

    if(linha > 0){
        for(i=1; i <= linha ; i++){
            for(j=0; j < i; j++){
            printf("%2d ", num);
            num++;
            }
        printf("\n");
        }
    }
    else{
        printf("Você entrou com %d, tente de novo na próxima", linha);
    }
    return 0;
}