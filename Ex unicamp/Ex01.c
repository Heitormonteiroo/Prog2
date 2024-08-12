#include <stdio.h>

int main() {

float op1;
float op2;
float result;
char operador;
int n;
int i;
scanf("%d",&n);
for ( i = 0; i < n; i++){
        scanf("%f %c %f",&op1 , &operador, &op2 );

    switch (operador){
        case '/':
            result= op1 / op2;
            printf("%.1f\n",result);
            break;
        case '*':
            result= op1 * op2;
            printf("%.1f\n",result);
            break;
        case '+':
            result= op1 + op2;
            printf("%.1f\n",result);
            break;
        case '-':
            result= op1 - op2;
            printf("%.1f\n",result);
            break;
        default:
            printf("Erro: operador não reconhecido\n");
            break;
    }
}

}