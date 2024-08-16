#include <stdio.h>
 
int main() {
 
    float ninicial,moedas;
    int aux,notas,nota100,nota50,nota20,nota10,nota5,nota2,moeda50,moeda25,moeda10,moeda5,moeda1,moeda01;
    scanf("%f",&ninicial);
    notas=ninicial;
    moedas=ninicial-notas;
    if (notas>=100){
        nota100=notas/100;
        notas=notas%100;
    }
    if (notas>=50){
        nota50=notas/50;
        notas=notas%50;
    }
    if (notas>=20){
        nota20=notas/20;
        notas=notas%20;
    }
    if (notas>=10){
        nota10=notas/10;
        notas=notas%10;
    }
    if (notas>=5){
        nota5=notas/5;
        notas=notas%5;
    }
    if (notas>=2){
        nota2=notas/2;
        notas=notas%2;
    }
    if (notas==1){
        moeda1=notas;
    }
    



    return 0;
}