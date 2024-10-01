#include <stdio.h>

typedef enum {
COPAS = 'C',
ESPADAS = 'E',
OUROS = 'O',
PAUS = 'P'
} t_naipe;

typedef struct {
int valor;
t_naipe naipe;
} t_carta;

int stringparainteiro(char vetor[3]){
 int final=0;
    if(vetor[0]=='A'){
        final=14;
    }else if(vetor[0]=='K'){
        final=13;
    }else if(vetor[0]=='Q'){
        final=12;
    }else if(vetor[0]=='J'){
        final=11;
    }else if(vetor[0]=='1'){
        final=10;
    }else{
        final=(vetor[0]-'0');
    }
    return final;
}
/*J E Q E A C K C 1 C*/

int main() {  
    
  char vetor[3];  
  int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char aux[3];
        t_carta pessoa1[5],pessoa2[5];
        for (int i2=0;i2<5;i2++){
            scanf("%s %c",&aux,&pessoa1[i2].naipe);
            pessoa1[i2].valor=stringparainteiro(aux);
        }
        for (int i2=0;i2<5;i2++){
            scanf("%s %c",&aux,&pessoa2[i2].naipe);
            pessoa2[i2].valor=stringparainteiro(aux);
        }
        for (int i2=0;i2<5;i2++){
            printf("%d %c ",pessoa1[i2].valor,pessoa1[i2].naipe);
    }
    }
    return 0;
}