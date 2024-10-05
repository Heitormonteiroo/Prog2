/**************************************************
*
* Heitor Monteiro Padovese
* Trabalho 1
* Professor(a): Diego Rubert
*
*/

/*transformar 11 12 13 14 em letra de volta*/
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
int valor;
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

void ordenarnaipe(t_carta cartas[5]){
    for(int i = 0; i < 5; i++){
        t_carta aux;
        for(int j=i+1;j<5;j++){
           if(cartas[i].valor == cartas[j].valor){
                if (cartas[j].naipe=='P'){
                    aux.naipe = cartas[i].naipe;
                    cartas[i].naipe = cartas[j].naipe;
                    cartas[j].naipe = aux.naipe;
                }else if(cartas[j].naipe=='O'&& cartas[i].naipe!='P'){
                    aux.naipe = cartas[i].naipe;
                    cartas[i].naipe = cartas[j].naipe;
                    cartas[j].naipe = aux.naipe;
                }else if(cartas[j].naipe=='C' && cartas[i].naipe!='P' && cartas[i].naipe!='O'){
                    aux.naipe = cartas[i].naipe;
                    cartas[i].naipe = cartas[j].naipe;
                    cartas[j].naipe = aux.naipe;
                }
            } 
        }
    }
}
void ordenar(t_carta cartas[5]){
    for(int i = 0; i < 5; i++){
       t_carta aux;
       for(int j = i + 1; j < 5; j++){
           if(cartas[i].valor > cartas[j].valor){
               aux = cartas[i];
               cartas[i] = cartas[j];
               cartas[j] = aux;
            }
        }
    }
    ordenarnaipe(cartas);  
}

int verificarpares(t_carta cartas[5]){
    int qpar=0,qtrinca=0,qquadra=0,valor=0;
    int contador[14];
    for(int i=0;i<14;i++){
        contador[i]=0;
    }
    for(int i=0;i<5;i++){
        contador[(cartas[i].valor)-1]+=1;
    }
    for(int i=0;i<14;i++){
        if(contador[i]==2){
            qpar+=1;
        }
        if(contador[i]==3){
            qtrinca+=1;
        }
        if(contador[i]==4){
            qquadra+=1;
        }
    }
    if(qquadra==1){
        return QUADRA;
    }else if(qtrinca==1 && qpar==1){
        return FULL;
    }else if (qtrinca==1){
        return TRINCA;
    }else if(qpar==2){
        return DOISPARES;
    }else if(qpar==1){
        return PAR;
    }else{
        return 0;
    }
    
}

int verificarflush(t_carta cartas[5]){
    int contador = 1;
    for(int i = 1; i < 5; i++){
        if(cartas[0].naipe == cartas[i].naipe){
            contador++;
        }
    }
    if(contador == 5){
        return FLUSH;
    }
    return 0;
}


int verificarsequencia(t_carta cartas[5]){
    for(int i = 0; i < 4; i++){
        if(cartas[i].valor + 1 != cartas[i + 1].valor){
            return 0;
        }
    }
    return SEQUENCIA;
}

t_mao valorfinal(t_carta cartas[5]){
    int qpares=0,qflush=0,qsequencia=0,valorfinal=0;
    t_mao final;
    qpares=verificarpares(cartas);
    qflush=verificarflush(cartas);
    qsequencia=verificarsequencia(cartas);
    if(cartas[0].valor==10 && cartas[4].valor==14 && qflush==FLUSH){
        valorfinal=RFLUSH;
    }else if(qsequencia>0 && qflush>0){
        valorfinal=SFLUSH;
    }else if(qpares==QUADRA){
        valorfinal=QUADRA;
    }else if(qflush==FLUSH){
        valorfinal=FLUSH;
    }else if(qsequencia==SEQUENCIA){
        valorfinal=SEQUENCIA;
    }else if(qpares!=0){
        valorfinal=qpares;
    }else{
        valorfinal=cartas[4].valor;
    }
    for (int i=0;i<5;i++){
        final.cartas[i]=cartas[i];
    }
    final.valor=valorfinal;
    return final;
}

void printar(int j,t_mao mao){
    char final[3];
    if(mao.cartas[j].valor==14){
        final[0]='A';
    }else if(mao.cartas[j].valor==13){
        final[0]='K';
    }else if(mao.cartas[j].valor==12){
        final[0]='Q';
    }else if(mao.cartas[j].valor==11){
        final[0]='J';
    }else if(mao.cartas[j].valor==10){
        final[0]='1';
        final[1]='0';

    }else{
        final[0]=(mao.cartas[j].valor+'0');
    }
    if(j==0){
        printf("1 %s %c ",final,mao.cartas[j].naipe);
    }else if(j==4){
        printf("%s %c\n",final,mao.cartas[j].naipe);
    }else{
        printf("%s %c ",final,mao.cartas[j].naipe);
    }

}

int main() {   
  int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char aux[3];
        char aux2;
        t_carta pessoa1[5],pessoa2[5];
        t_mao maofinal1,maofinal2;
        for (int j=0;j<5;j++){
            scanf("%s %c", aux, &aux2);
            pessoa1[j].valor = stringparainteiro(aux);
            pessoa1[j].naipe = aux2;
        }
        for (int j=0;j<5;j++){
            scanf("%s %c",aux,&aux2);
            pessoa2[j].valor=stringparainteiro(aux);
            pessoa2[j].naipe=aux2;
        }
        ordenar(pessoa1);
        ordenar(pessoa2);
        maofinal1=valorfinal(pessoa1);
        maofinal2=valorfinal(pessoa2);
        if(maofinal1.valor>maofinal2.valor){
            for (int j=0;j<5;j++){
            printar(j,maofinal1);
            }
        }else if(maofinal1.valor<maofinal2.valor){
            for (int j=0;j<5;j++){
            printar(j,maofinal2);
            }
        }else{
                printf("E\n");
            }       
        }
    return 0;
}
