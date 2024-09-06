#include <stdio.h>
#include <string.h>

int main(void) {
    int n, n2;
    char palavras[100][100][21];
    char valido;

    scanf("%d", &n);
    for(int i = 0;i<n;i++) {
        scanf("%d", &n2);
        for(int i2=0;i2<n2;i2++) {
            scanf("%s", palavras[i][i2]);
        }
        valido = 's';
        for(int i2=0;i2<n2-1;i2++) {
            if(strcmp(palavras[i][i2], palavras[i][i2 + 1]) != 0) {
                valido = 'n';
                break;
            }
        }
        if(valido == 'n') {
            printf("ingles\n");
        } else {
            printf("%s\n", palavras[i][0]);
        }
    }

    return 0;
}
