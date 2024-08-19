#include <stdio.h>

int main() {

    double n;
    int ncobaias, coelhos = 0, ratos = 0, sapos = 0,total=0;
    char tipo;

    scanf("%lf", &n);
    for(int i =0;i<n;i++){
        scanf("%d %c", &ncobaias, &tipo);
        if(tipo == 'C'){
            coelhos += ncobaias;    
        }
        else if (tipo== 'R'){
            ratos += ncobaias;
        }
        else if (tipo== 'S'){
            sapos += ncobaias;
        }   
    }
    total = coelhos + ratos + sapos;
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf( "Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2lf %%\n", (coelhos*100.0/total));
    printf("Percentual de ratos: %.2lf %%\n", (ratos*100.0/total));
    printf("Percentual de sapos: %.2lf %%\n", (sapos*100.0/total));


    return 0;
}