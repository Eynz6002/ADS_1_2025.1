#include <stdio.h>

int main()
{
    int limite = -1;
    int termo_1 = 0, termo_2 = 1;
    int proximo = 0;
    
    while(limite < 0) {
        printf("Digite o limite de valores (positivo) que devem aparecer: ");
        scanf("%d", &limite);
    }
    
    //Fibonacci ->0 1 1 2 3 5 8 13 21 34 55
    
    printf("Fibonacci: ");
    while(proximo <= limite) {
        printf("%d -> ", proximo);
        // Termo 1 avança -> = termo_2
        termo_1 = termo_2;
        // Termo 2 avança -> = proximo
        termo_2 = proximo;
        // Proximo é igual a soma deles
        proximo = termo_1 + termo_2; 
    }
    printf("Limite alcançado.\n");
    return 0;
}
