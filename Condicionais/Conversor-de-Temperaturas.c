#include <stdio.h>

int main() {
  // Entradas: temperatura, escala(C,F K)
  // Conversão: K = C + 273.15, F = C * 1.8 + 32
  // Saída exemplo: Farenheit: 104.00
  float temp, C, K ,F;
  char escala;

  scanf("%f %c", &temp, &escala);

  if(escala == 'C' || escala == 'c'){
    C = temp;
    printf("Celsius: %.2f\n", C);
    F = C * 1.8 + 32;
    printf("Farenheit: %.2f\n", F); 
    K = C + 273.15;
    printf("Kelvin: %.2f", K);
  }
  else if(escala == 'F' || escala == 'f'){
    F = temp;
    C = (F-32)/1.8;
    printf("Celsius: %.2f\n", C);
    printf("Farenheit: %.2f\n", F);
    K = C + 273.15;
    printf("Kelvin: %.f", K);
  }
  else if(escala == 'K' || escala == 'k'){
    K = temp;
    C = K - 273.15;
    printf("Celsius: %.2f\n", C);
    F = C * 1.8 + 32;
    printf("Farenheit: %.2f\n", F);
    printf("Kelvin: %.2f", K);
  }
  
  else{
    return main(); 
  }
  
}