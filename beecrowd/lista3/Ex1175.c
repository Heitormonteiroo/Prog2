#include <stdio.h>

int main(void) {

int vetor[20],aux1;
  int i2=19;
  for(int i =0; i<20; i++){
    scanf("%d", &vetor[i]);  
  }
  for(int i =0; i<10; i++){
    aux1=vetor[i];
    vetor[i]=vetor[i2];
    vetor[i2]=aux1;
    i2-=1;
  }
  for(int i =0; i<20; i++){
      printf("N[%d] = %d\n",i,vetor[i]);
    }


  return 0;
}