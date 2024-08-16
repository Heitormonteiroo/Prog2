#include <stdio.h>
 
int main() {
    
    float n1, n2, n3 ,media;
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    media=((n1*0.2)+(n2*0.3)+(n3*0.5));
    printf("MEDIA = %.1f\n",media);
    return 0;
}