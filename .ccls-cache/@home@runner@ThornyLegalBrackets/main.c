#include <stdio.h>

#define MAX_PALAVRA 20

void copiar_cebolinha(char original[], char nova[]) {
    int i2 = 0;
    for (int i = 0; i<MAX_PALAVRA;i++){
        if (original[i]=='R' && original[i-1]!='R'){
            nova[i2]='L';
            i2++;
        }
        else if (original[i-1]=='R' && original[i]=='R'){
    
        }
        else
        {    
            nova[i2]=original[i];
            i2++;
        }

    }
}

int main() {
  char palavra[MAX_PALAVRA];
  char palavra_modificada[MAX_PALAVRA];

  scanf("%s", palavra);
  copiar_cebolinha(palavra, palavra_modificada);
  printf("%s", palavra_modificada);

  return 0;
}