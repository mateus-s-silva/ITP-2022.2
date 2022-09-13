#include <stdio.h>

int testa_num_perfeito(int x){
    int sum = 0;

    for(int j=1; j < x; j++){
        if(x % j == 0){
            sum=sum+j;
        }
    }
    if(x == sum){
        return 1;
    }
    else{
        return 0;
    }

}


int main(){
    int N, n1, i = 0;

    scanf("%d", &N);

    while(i < N){
        scanf("%d", &n1);
        if(testa_num_perfeito(n1) == 1){
            printf("%d eh perfeito\n", n1);
        }
        else{
            printf("%d nao eh perfeito\n", n1);
        }
        i++;
    }

    return 0;
}