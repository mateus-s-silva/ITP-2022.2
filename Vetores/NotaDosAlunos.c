#include <stdio.h>

void verifica_vetor(int len, int vetor[len]){

    int chato = 0, legal = 0;

    for(int i = 1; i < len; i++){
        if((vetor[i] - vetor[i-1]) % 2 == 0){
            legal = 1;
        }
        else{
            chato = 1;
        }
    }
    if(legal == 1 && chato == 0){
        printf("Legal");
    }
    else{
        printf("Chato");
    }
}

int main(){
    int i, len, valor;
    scanf("%d", &len);
    int vetor[len];

    for(i = 0; i < len; i++){
        scanf("%d", &vetor[i]);
    }
    
    verifica_vetor(len, vetor);

    return 0;
}