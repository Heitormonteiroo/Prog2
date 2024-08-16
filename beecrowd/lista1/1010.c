#include <stdio.h>
 
int main() {
 
    int p1,n1,p2,n2;
    double v1,v2,resultado;
    
    scanf("%d %d %lf",&p1 ,&n1 ,&v1);
    scanf("%d %d %lf",&p2 ,&n2 ,&v2);
    resultado=(v1*n1)+(v2*n2);
    printf("VALOR A PAGAR: R$ %.2lf\0",resultado);
    return 0;
}