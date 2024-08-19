#include <stdio.h>

int main() {

    int n1,n2,total,maior,menor;

    scanf("%d",&n1);
    scanf("%d",&n2);
    if(n1>n2){
        maior=n1;
        menor=n2;
    }
    else{
        maior=n2;
        menor=n1;
    }
    while(menor<=maior){
        if(menor%13!=0){
            total=total+menor;
            menor+=1;
        }
        else{
            menor+=1;
        }
    }
    printf("%d\n",total);
    return 0;
}