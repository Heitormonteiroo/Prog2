/*git config --global user.email "you@example.com"
  git config --global user.name "Your Name"*/
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

typedef enum {
PAR = 15,
DOISPARES=16,
TRINCA=17,
SEQUENCIA=18,
FLUSH=19,
FULL=20,
QUADRA=21,
SFLUSH=22,
RFLUSH=23
} t_valor_m;

typedef struct {
t_carta cartas[5];
t_valor_m valor;
} t_mao;

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

int verificarpartrincaquadrafullhouse(t_carta cartas[5]){
    int qpar=0,qtrinca=0,qquadra=0,valor=0;
    for(int i;i<5;i++){
        int contador=1;
        int aux=cartas[i].valor;
        for(int i2=i+1;i2<5;i2++){
            if(aux==cartas[i2].valor){
                contador+=1;
            }
        }
        if(contador==2){
            qpar+=1;
        }
        else if(contador==3){
            qtrinca+=1;
        }else if(contador==4){
            qquadra+=1;
        }
    }
    if(qquadra==1){
        valor=QUADRA;
    }else if(qpar==1 && qtrinca==1){
        valor=FULL;
    }else if(qtrinca==1){
        valor=TRINCA;
    }else if(qpar==2){
        valor=DOISPARES;
    }else if(qpar==1){
        valor=PAR;
    }
    return valor;
}

int valorfinalcartas(t_carta carta){



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
            printf("%d %c ",pessoa2[i2].valor,pessoa2[i2].naipe);
        }
    }
    return 0;
}