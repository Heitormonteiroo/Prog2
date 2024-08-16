#include <stdio.h>
 
int main() {
 
    int distancia;
    double litros,final ;
    scanf("%d", &distancia);
    scanf("%lf", &litros);
    final=distancia/litros;
    printf("%.3lf km/l",final);
    return 0;
}