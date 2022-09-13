#include <stdio.h>


int ehPar(int x){
    if(x%2 == 0){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int n1;
    scanf("%d", &n1);

    if(ehPar(n1) == 0){
        printf("false");
    }
    else{
        printf("true");
    }
    return 0
}