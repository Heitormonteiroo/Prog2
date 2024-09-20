#include <stdio.h>

  long long int fib(int n,int *contador){
    (*contador)++;
    long long int n1=1;
      if (n==0){
        n1=0;
      }
      else if (n==1){
          n1=1;
      }
      else{
        n1=fib(n-2,contador)+fib(n-1,contador);    
      }
    return n1;  
  }


int main(void) {

int n,n2,result,contador=0;

scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&n2);
    contador=0;
    result=fib(n2,&contador);
    printf("Fib(%d) = %d calls = %d\n",n2,(contador-1),result);
  }

  return 0;
}