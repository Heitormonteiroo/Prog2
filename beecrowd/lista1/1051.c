#include <stdio.h>

int main() {

    double sal,imposto,impostototal=0;
    scanf("%lf",&sal);
    if(sal<=2000){
        printf("Isento\n");
    }
    if(sal>4500){
        imposto=(sal-4500)*0.28;
        impostototal+=imposto;
        sal=4500;
    }
    if(sal<=4500 && sal>3000){
        imposto=(sal-3000)*0.18;
        impostototal+=imposto;
        sal=3000;
    }
    if(sal<=3000 && sal>2000){
        imposto=(sal-2000)*0.08;
        impostototal+=imposto;
        sal=2000;
        printf("R$ %.2lf\n",impostototal);
    }



    return 0;
}