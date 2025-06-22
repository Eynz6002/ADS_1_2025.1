#include <stdio.h>

int main() {
    int altura = -1, meio = altura/2;
    int cont_aux = 1;
    
    while(altura <= 0 || altura%2 == 0) {
        printf("Digite um número inteiro impar: ");
        scanf("%d", &altura);
        
        if(altura < 0) {
            printf("Digite um número positivo\n");
        }
    }
    
    for (int i = 0; i < (altura/2) - 1; i++) {
        if(i == 0) {
            meio = altura/2;
            for(int j = 0; j < altura/2; j++) {
                printf(" ");
            }
            printf("*\n");
            meio--;
            continue;
        }
        for(int j = 0; j < meio; j++) {
            printf(" ");
        }
        meio--;
        printf("*");
        for(int j = 0; j < cont_aux; j++) {
            printf(" ");
        }
        printf("*\n");
        cont_aux += 2;
    }

    
    for(int i = 0; i < altura/2; i++) {
        if(i == (altura/2) - 1) {
            for(int j = 0; j < meio; j++) {
                printf(" ");
            }
            printf("*");
            continue;
        }
        for(int j = 0; j < meio; j++) {
            printf(" ");
        }
        meio++;
        printf("*");
        for(int j = 0; j < cont_aux; j++) {
            printf(" ");
        }
        printf("*\n");
        cont_aux -= 2;
        
    }
    return 0;
}
/*
      *
     * *
    *   *
   *     *
  *       *
 *         *
*           *
 *         *
  *       *
   *     *
    *   *
     * *
      *






*/