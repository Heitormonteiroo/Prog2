#include <stdio.h>

int main() {

    int n1,n2,maior,menor;

    scanf("%d",&n1);
    scanf("%d",&n2);
    if(n1>n2){
        maior=n1;
        menor=n2+1;
    }
    else{
        maior=n2;
        menor=n1+1;
    }
    while(menor<maior){
        if(menor%5==2 || menor%5==3){
            if (menor>0){
                printf("%d\n",menor);
            }
            menor+=1;
        }
        else{
            menor+=1;
        }

    }

    return 0;
}