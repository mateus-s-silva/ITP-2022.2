#include <stdio.h>

void ordena_vetor(int len, int vetor[len]){
    int aux;
    for(int j = 1; j < len; j++){
        for(int i = 1; i < len; i++){
            if(vetor[i-1] > vetor[i]){
                aux = vetor[i-1];
                vetor[i-1] = vetor[i];
                vetor[i] = aux;
            }
        }
        for(int k = 0; k < len; k++){
            printf("%d ", vetor[k]);
        }
        printf("\n");
    }
}

int main(){
    int len;

    scanf("%d", &len);

    int vetor[len];

    for(int i = 0; i < len; i++){
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < len; i++){
        printf("%d ", vetor[i]);
    }

    printf("\n");
    
    ordena_vetor(len, vetor);

    return 0;
}