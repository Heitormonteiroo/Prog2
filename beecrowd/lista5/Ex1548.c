#include <stdio.h>
#define MAX 1000
void ordernar(int lista[MAX],int n){
    for(int i =0;i<n-1;i++){
        for(int j = i + 1 ; j < n ; j++){
            int aux;
            if(lista[i]<lista[j]){
                aux=lista[i];
                lista[i]=lista[j];
                lista[j]=aux;
            }
        }
    }
}

int main() {

int n;

scanf("%d",&n);
for(int i=0;i<n;i++){
    int ncasos,contador=0;
    int lista1[MAX],lista2[MAX];
    scanf("%d",&ncasos);
    for(int i2=0;i2<ncasos;i2++){
        scanf("%d",&lista1[i2]);
        lista2[i2]=lista1[i2];
    }
    ordernar(lista1, ncasos);
    for(int i2=0;i2<ncasos;i2++){
        if(lista1[i2]==lista2[i2]){
            contador+=1;
    }
}
printf("%d\n",contador);
}
return 0;
}
