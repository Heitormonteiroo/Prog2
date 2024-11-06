#include <stdio.h>
#define MAX 100000
void trocas_sucessivas(int n, int v[MAX]){
int i, j;
for (i = n - 1; i > 0; i--){
for (j = 0; j < i; j++){
if (v[j] > v[j+1]){
    int aux;
    aux=v[j];
    v[j]=v[j+1];
    v[j+1]=aux;

}
}
}
}

int main() {
    int n=NULL;
    while(n!=0){
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",lista[])
        }
    }

    return 0;
}