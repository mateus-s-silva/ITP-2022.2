#include <stdio.h>
#include <string.h>

int main(void) {
  int a1, i;
  char b1[100000];

  REFAZ: scanf("%d", &a1);

  if(a1 < 1 || a1 > 100000){
    goto REFAZ;
  }

  sprintf(b1, "%d", a1);

  for(i=0; i < strlen(b1); i++){
    printf("%c\n", b1[i]);
  }


  return 0;
}