#include <stdio.h>


int verifica_fim(float e1, float e2, float d1, float d2){
    if(e1 == 0 && e2 == 0 && d1 == 0 && d2 == 0) return 1;
    else return 0;
}

void verifica_retangulos(float e1, float e2, float d1, float d2, float te1, float te2, float td1, float td2){
    if(e1 > te1 && e2 > te2 && d1 < td1 && d2 < td2){
        printf("(<%.2f,%.2f>,<%.2f,%.2f>) contem (<%.2f,%.2f>,<%.2f,%.2f>).\n", te1, te2, td1, td2, e1, e2, d1, d2);
    }
    else if(te1 > e1 && te2 > e2 && td1 < d1 && td2 < d2){
        printf("(<%.2f,%.2f>,<%.2f,%.2f>) contem (<%.2f,%.2f>,<%.2f,%.2f>).\n", e1, e2, d1, d2, te1, te2, td1, td2);
    }
    else{
        printf("Nao posso afirmar!\n");
    }
}

int main(){

    float te1, te2, td1, td2;

    scanf("%f %f %f %f", &te1, &te2, &td1, &td2);

    float e1, e2, d1, d2;

    while(verifica_fim(e1, e2, d1, d2) == 0){
        
        scanf("%f %f %f %f", &e1, &e2, &d1, &d2);
    
    if(verifica_fim(e1, e2, d1, d2) == 0){    
    verifica_retangulos(te1, te2, td1, td2, e1, e2, d1, d2);
    }
        
    }
    return 0;
}