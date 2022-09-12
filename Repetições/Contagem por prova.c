#include <stdio.h>
// C = Corrida, S = Salto, L = Lançamento
// Entradas: Número de equipes inscritas, inscrições(C, S ou L)
// F = Encerra inscrições da equipe
int main(){
    
    int C = 0, S = 0, L = 0, numAtl =  0; // Contadores
    int numEquipe, a = 2, b = 1; 
    char prova; 

    scanf("%d", &numEquipe);

    for(int i = 0; i < numEquipe; i++){
        while(a > b){
            scanf("%c", &prova);
            if(prova != 'F'){
            switch(prova){
                case 'C': C++;
                numAtl++;                 
                break;
                case 'S': S++;
                numAtl++;                 
                break;
                case 'L': L++;
                numAtl++;                 
                break;
            }
            }
            else{
                break;
            }
            
        }
    } 


    printf("%d %d %d %d", C, S, L, numAtl);

    return 0;
}