#include <stdio.h>
 
int main() {
 
    double sal, bonus, final;
    char a[10];
    scanf("%s",&a);
    scanf("%lf",&sal);
    scanf("%lf",&bonus);
    final=sal+(bonus*0.15);
    printf("TOTAL = R$ %.2lf\n",final);
    return 0;
}