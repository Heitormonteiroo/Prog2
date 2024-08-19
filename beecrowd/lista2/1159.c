#include <stdio.h>

int main() {

    int i=1,i2,contador=0,total;

    while(i!=0){
        scanf("%d",&i);
        if(i!=0){
            i2=i;
            total=0;
            contador=0;
            while(contador<5)
                if(i2%2==0){
                    total+=i2;
                    contador+=1;
                    i2+=2;
                    }
                else{
                    i2+=1;
                }
        printf("%d\n",total);
        }

    }

    return 0;
}