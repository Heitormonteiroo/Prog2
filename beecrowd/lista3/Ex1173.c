#include <stdio.h>

int main(void) {

  int vetor[10];
   scanf("%d", &vetor[0]);
  for(int i = 1; i < 10; i++){
    vetor[i]=vetor[i-1]*2;
  }
  for (int i = 0; i < 10; i++){
  printf("N[%d] = %d\n",i, vetor[i]);
  }

  return 0;
}