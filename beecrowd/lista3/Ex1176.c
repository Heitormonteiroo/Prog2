#include <stdio.h>

  long long int fib(int n){
    long long int n1=1,ultimo=1,ultimo2;  
      if (n==0){
        n1=0;
      }
      else if (n==1 || n==2){
          n1=1;
      }
      else{
      for(int i=3; i<=n; i++){
            ultimo2=n1;
            n1+=ultimo;
            ultimo=ultimo2;
          }
    }
  return n1;
  }


int main(void) {

int n,n2;

scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&n2);
    printf("Fib(%d) = %lld\n",n2,fib(n2));
  }

  return 0;
}