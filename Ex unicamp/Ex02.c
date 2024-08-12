#include <stdio.h>

int main() {
    int i, n,duracao,vmax,maiorv;
    int velocidades[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &velocidades[i]);
    }
    scanf("%d",&duracao);
    if (duracao==1 ){
        vmax=100;
    }
    if (duracao==2)
    {
        vmax=20;
    }
    if (duracao==3){
        vmax=10;
    }
    for (i = 0; i < n; i++) {
        if (velocidades[i]<=vmax && velocidades[i]>maiorv){
            maiorv=velocidades[i];
        }
    }
    printf("%d",maiorv);  
}