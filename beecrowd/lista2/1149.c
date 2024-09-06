#include <stdio.h>

int main() {

    int n1,n2,soma=0;

    scanf("%d %d",&n1,&n2);
    if(n2<=0){
        while (n2<=0){
            scanf("%d",&n2);
        }
    }
    for(int i=0;i<n2;i++){
        soma+=n1+i;
    }
    printf("%d\n",soma);
    return 0;
}