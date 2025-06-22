#include <stdio.h>

int main()
{
    int opt = -1;
    
    while(1) {
        float a, b, c;
        
        printf("Menu\n");
        printf("1. Adição.\n");
        printf("2. Subtração.\n");
        printf("3. Multiplicação.\n");
        printf("4. Divisão.\n");
        printf("0. Sair.\n");
        printf("Escolha: ");
        scanf("%d", &opt);
        
        if(opt != 0) {
            printf("1° Valor: ");
            scanf("%f", &a);
            printf("2° Valor: ");
            scanf("%f", &b);
        } else {
            printf("Finalizando.\n");
            break;
        }
        
        switch(opt)
        {
            case 1:
                c = a + b;
                printf("Resultado: %.2f\n", c);
                break;
            case 2:
                c = a - b;
                printf("Resultado: %.2f\n", c);
                break;
            case 3:
                c = a * b;
                printf("Resultado: %.2f\n", c);
                break;
            case 4:
                if(b == 0){
                    printf("Erro: Divisão por zero não permitida!\n");
                } else {
                    c = a / b;
                    printf("Resultado: %.2f\n", c);
                }
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }
    }
    return 0;
}