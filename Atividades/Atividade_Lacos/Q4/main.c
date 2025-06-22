#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chances = 5;
    int escolha = -1;

    srand(time(NULL));
    int aleatorio = (rand()%3) + 1;
    
    while (chances > 0)
    {
        printf("Digite um número: ");
        scanf("%d", &escolha);

        if(escolha < aleatorio) {
            printf("Digite um número maior.\n");
        } else if(escolha > aleatorio) {
            printf("Digite um número menor.\n");
        } else {
            printf("Acertou.\n");
            break;
        }

        chances--;
        
        if(chances == 0) {
            printf("Gastou todas as tentativas.\n");
        }
    }
    
    printf("O número era: %d\n", aleatorio);
    
    return 0;
}