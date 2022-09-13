#include <stdio.h>

int main(){
    int linha, coluna, num;
    char letra;
    scanf("%d %c", &num, &letra);
    num--;
    for(linha = 0; linha < num; linha++){
        for(coluna = 0; coluna < num; coluna++){
            if(linha == coluna || ((linha+coluna) == (num-1))){
            printf("%c", letra);
            }
            else{
            printf(" ");
            }
        }
    printf("\n"); 
    }



    return 0; 
}