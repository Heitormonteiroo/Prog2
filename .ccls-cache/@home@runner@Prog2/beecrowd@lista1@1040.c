#include <stdio.h>
 
int main() {
    
    double n1, n2 ,n3, n4, nfinal, nexame=0;
    
    scanf("%lf %lf %lf %lf", &n1 , &n2, &n3, &n4);
    nfinal= (0.2 * n1) + (0.3 * n2) + (0.4 * n3) + (0.1 * n4);
    if (nfinal>=7){
        printf("Media: %.1lf\n", nfinal);
        printf("Aluno aprovado.\n");
    }
    else if(nfinal<7 && nfinal>=5){
        printf("Media: %.1lf\n", nfinal);
        printf("Aluno em exame.\n");
        scanf("%lf",&nexame);
        printf("Nota do exame: %.1lf\n", nexame);
        nfinal=(nfinal+nexame)/2;
        if(nfinal>=5){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", nfinal);
    }
    else{
        printf("Media: %.1lf\n", nfinal);
        printf("Aluno reprovado.\n");

    }

    return 0;
}