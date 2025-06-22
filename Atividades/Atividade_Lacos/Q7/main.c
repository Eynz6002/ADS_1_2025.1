#include <stdio.h>

int main() {
    int proximoCliente = 1;

    while (proximoCliente == 1) {
        float totalCompra = 0.0;
        float precoProduto;

        printf("--- Novo Cliente ---\n");
        printf("Digite o preco dos produtos (0 para finalizar): \n");

        while (1) { // Laço aninhado para ler os produtos de um cliente
            printf("Produto: ");
            scanf("%f", &precoProduto);

            if (precoProduto == 0) {
                break; // Cliente terminou de passar os produtos
            }

            if (precoProduto < 0) {
                printf("Preco invalido. Por favor, digite um preco positivo.\n");
                continue; // Ignora preços negativos e pede novamente
            }

            totalCompra += precoProduto;
        }

        printf("Total da compra do cliente: R$ %.2f\n", totalCompra);

        printf("Ha um proximo cliente? (1 para sim, 0 para nao): ");
        scanf("%d", &proximoCliente);

        if (proximoCliente == 0) {
            printf("Fechando o caixa. Tenha um bom dia!\n");
        }
    }

    return 0;
}