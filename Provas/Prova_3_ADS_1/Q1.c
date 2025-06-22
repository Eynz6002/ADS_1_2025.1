#include <stdio.h>

int main() {
    int num_primo = 0;

    while(1) {
        printf("Digite um número impar positivo: ");
        scanf("%d", &num_primo);

        if(num_primo > 0 && num_primo%2 == 1) {
            break;
        } else {
            printf("Digite um número válido.\n");
        }
    }

    for(int p = 1; p < (num_primo/2) + 1; p += 2) {
        
        for(int j = (num_primo/2); j > p-1; j--){
            printf(" ");
        }
        
        for(int j = 0; j < (p * 2) - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    for(int i = 1; i < 3; i++) {
        for(int j = 0; j < num_primo/2; j++) {
            printf(" ");
        }
        printf("*\n");
    }
    return 0;
}