#include <stdio.h>

int main()
{
    int numero = 0, quant_atual = 1;
    int num_atual = 1, verificador = 1;
    
    printf("Digite um número: ");
    scanf("%d", &numero);
    
    printf("Primos: [%d] ", num_atual);
    num_atual++;
    
    while(quant_atual < numero) {
        
        for(int i = 2; i < num_atual; i++) {
            if(num_atual%i == 0) {
                verificador = 0;
                break;
            }
        }
        
        if(verificador == 1) {
            printf("[%d] ", num_atual);
            quant_atual++;
        }
        
        num_atual++;
        verificador = 1;
    }
    return 0;
}
