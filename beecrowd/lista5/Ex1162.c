#include <stdio.h>
 
int ordernar(int lista[50],int tamanho){
    int contador=0;
    for(int i =0;i<tamanho-1;i++){
        for(int j = i + 1 ; j < tamanho ; j++){
            int aux;
            if(lista[i]>lista[j]){
                aux=lista[i];
                lista[i]=lista[j];
                lista[j]=aux;
                contador+=1;
            }
        }
    }
    return contador;
}

int main() {
 
    int n;

    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int tamanho,contador=0;
        scanf("%d",&tamanho);
        int lista[tamanho];
        for(int j = 0 ;j<tamanho;j++){
            scanf("%d",&lista[j]);
        }
        contador=ordernar(lista,tamanho);
        printf("Optimal train swapping takes %d swaps.\n",contador);
    }
    return 0;
}