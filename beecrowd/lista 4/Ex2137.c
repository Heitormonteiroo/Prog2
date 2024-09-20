#include <stdio.h>
#define MAX 1000

void ordenar(int n, int *v) {
    int i, j, x;
    for (i = 1; i < n; i++) {
      x = v[i];
      for (j = i - 1; j >= 0 && v[j] > x; j--)
        v[j+1] = v[j];
      v[j+1] = x;
    }
}

int main() {
    int n, v[MAX];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    ordenar(n, v);
    for(int i = 0; i < n; i++) {
      if(v[i]<10){  
      printf("000%d\n", v[i]);
      }
      else if(v[i]<100){
      printf("00%d\n", v[i]);
      }
      else if(v[i]<1000){
      printf("0%d\n", v[i]);
      }
      else{
      printf("%d\n" , v[i]);
      }
    }
    return 0;
}