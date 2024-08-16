#include <stdio.h>
#include <math.h>

int main() {

    double n1, n2, n3, delta, raiz1,raiz2;

    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if(n1!=0){
        delta= (n2*n2)-(4*n1*n3);
        if (delta<0){
            printf("Impossivel calcular\n");
        }
        else if (delta==0){
            raiz1 =  -n2/(2*n1);
            raiz2=raiz1;
            printf("Impossivel calcular\n");
        }
        else{
            delta=sqrt(delta);
            raiz1= (-n2 + delta)/(2 * n1);
            raiz2= (-n2 - delta)/(2 * n1);
            printf("R1 = %.5lf\n", raiz1);
            printf("R2 = %.5lf\n", raiz2);
        }
    }  
    else{
        printf("Impossivel calcular\n");
    }
      

    return 0;
}