#include <stdio.h>
#define MAX 100000

int intercala(int p, int q, int r, int v[MAX]){
    int i, j, k, w[MAX];
    int contador = 0; 
    i = p;
    j = q;
    k = 0;
    while (i < q && j < r) {
        if (v[i] <= v[j]) {
            w[k] = v[i];
            i++;
        } else {
            w[k] = v[j];
            j++;
            contador += (q - i);
        }
        k++;
    }
    while (i < q) {
        w[k] = v[i];
        i++;
        k++;
    }
    while (j < r) {
        w[k] = v[j];
        j++;
        k++;
    }
    for (i = p; i < r; i++){
        v[i] = w[i - p];
        }
    
    return contador;
}

int mergesort(int p, int r, int v[MAX])
{
    int q, contador = 0;
    if (p < r - 1) {
        q = (p + r) / 2;
        contador += mergesort(p, q, v);
        contador += mergesort(q, r, v);
        contador += intercala(p, q, r, v);
    }
    
    return contador;
}

int main() {
    int n = 1;
    
    while (n != 0) {
        scanf("%d", &n);
        if (n != 0) {
            int lista[n];
            for (int i = 0; i < n; i++) {
                scanf("%d", &lista[i]);
            }
            int contador = mergesort(0, n, lista);
            if ((contador % 2) == 0) {
                printf("Carlos\n");
            } else {
                printf("Marcelo\n");
            }
        }
    }
    
    return 0;
}
