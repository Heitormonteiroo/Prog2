#include <stdio.h>
 
int main() {
 
    float ninicial,moeda;
    int moedas=0,notas=0,nota100=0,nota50=0,nota20=0,nota10=0,nota5=0,nota2=0,moeda50=0,moeda25=0,moeda10=0,moeda5=0,moeda1=0,moeda01=0;
    scanf("%f",&ninicial);
    notas=ninicial;
    moeda=ninicial-notas;

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
        moeda1=1;
    }
    moedas=moeda*100+0.5;
    if (moedas>=50){
        moeda50=moedas/50;
        moedas=moedas%50;
    }
    if (moedas>=25){
        moeda25=moedas/25;
        moedas=moedas%25;
    }
    if (moedas>=10){
        moeda10=moedas/10;
        moedas=moedas%10;
    }
    if (moedas>=5){
        moeda5=moedas/5;
        moedas=moedas%5;
    }
    if (moedas<5){
        moeda01=moedas;
    }
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", nota100);
    printf("%d nota(s) de R$ 50.00\n", nota50);
    printf("%d nota(s) de R$ 20.00\n", nota20);
    printf("%d nota(s) de R$ 10.00\n", nota10);
    printf("%d nota(s) de R$ 5.00\n", nota5);
    printf("%d nota(s) de R$ 2.00\n", nota2);
    
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moeda1);
    printf("%d moeda(s) de R$ 0.50\n", moeda50);
    printf("%d moeda(s) de R$ 0.25\n", moeda25);
    printf("%d moeda(s) de R$ 0.10\n", moeda10);
    printf("%d moeda(s) de R$ 0.05\n", moeda5);
    printf("%d moeda(s) de R$ 0.01\n", moeda01);

    return 0;
}