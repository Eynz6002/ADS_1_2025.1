#include <stdio.h>

int main() {
    float preco = -1, total_compra = 0.0;
    int continuar;
    while(1) {
        while (preco != 0) {
            printf("Digite o preço: ");
            scanf("%f", &preco);

            if(preco < 0) {
                printf("Digite somente números positivos.\n");
                continue;
            }

            total_compra += preco;
        }

        printf("Total das compras: %.2f\n", total_compra);

        printf("Próximo cliente: ");
        scanf("%d", &continuar);

        if(continuar == 0) {
            printf("Encerrando.\n");
            break;
        } else if(continuar == 1) {
            printf("Preparando para o próximo cliente.\n");
        } else {
            printf("Digite algo válido.\n");
        }

            total_compra = 0;
            preco = -1;
    }
    return 0;
}