/*criar funçao ordenar carta
criar função ordenar naipe
criar função verificar o resto dos tipos de maos
verificar quem ganhou
otimizar tudo*/

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

typedef struct {
int valor;
int naipe;
} t_cartacomparar;

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
/*2º Naipe, na ordem paus (P ♣) (menor), ouros (O ♢), copas (C ♡) e espadas (E ♠) (maior).*/
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
    for(int i;i<5;i++){
        int contador=1;
        int aux=cartas[i].valor;
        for(int j=i+1;j<5;j++){
            if(aux==cartas[j].valor){
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

int valorfinal(t_carta carta){



}

int main() {    
  int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char aux[3];
        t_carta pessoa1[5],pessoa2[5];
        for (int j=0;j<5;j++){
            scanf("%s %c",&aux,&pessoa1[j].naipe);
            pessoa1[j].valor=stringparainteiro(aux);
        }
        for (int j=0;j<5;j++){
            scanf("%s %c",&aux,&pessoa2[j].naipe);
            pessoa2[j].valor=stringparainteiro(aux);
        }
        ordenar(pessoa1);
        ordenar(pessoa2);
        for (int j=0;j<5;j++){
            if(j==4){
                printf("%d %c\n",pessoa1[j].valor,pessoa1[j].naipe);
            }else{
            printf("%d %c ",pessoa1[j].valor,pessoa1[j].naipe);
        }
        }
    }
    return 0;
}
/*5
6 P 7 O 3 P 9 C J E
10 C 5 E 4 E 3 E 2 E
K C 2 P 5 O 7 P 10 C
6 P 9 O K E 3 P 4 C
8 C 9 C 10 O J P Q E
5 E 4 E 3 E 7 E 6 E
5 C 6 O 2 O 3 O 4 P
K C 10 C J C A P Q C
A C 7 E 5 E 7 O 7 P
4 E A O 3 E 3 P 4 C*/