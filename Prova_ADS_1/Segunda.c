/*
Q2: Calculadora de Desconto Simples
Desenvolva um programa em C que calcule o preço final de um produto após aplicar um desconto.
O programa deve solicitar ao usuário:
O preço original do produto (valor real, ex: 150.75).
A categoria do produto (um caractere: 'A', 'B' ou 'C').
O desconto será aplicado da seguinte forma:
Categoria A: 10% de desconto.
Categoria B: 15% de desconto.
Categoria C: 20% de desconto.
Se a categoria inserida não for 'A', 'B' ou 'C', nenhum desconto será aplicado,
e o programa deve informar "Categoria invalida. Nenhum desconto aplicado."
O programa deve exibir o valor do desconto e o preço final do produto com duas casas decimais.
Exemplo de Entrada:
Digite o preco original do produto: 100.00
Digite a categoria do produto (A, B ou C): B

Exemplo de Saída:
Valor do desconto: R$ 15.00
Preco final: R$ 85.00
*/
#include <stdio.h>

int main()
{
    float preco = 0.0;
    char categoria = 'D';
    
    printf("Preço inicial: ");
    scanf("%f", &preco);
    
    printf("Categoria (A, B ou C): ");
    scanf(" %c", &categoria);
    
    if(categoria == 'A') {
        printf("Desconto da categoria: %.2f\n Preço final %.2f", preco * 0.1, preco * 0.9);
    } else if(categoria == 'B') {
        printf("Desconto da categoria: %.2f\n Preço final %.2f", preco * 0.15, preco * 0.85);
    } else if(categoria == 'C') {
        printf("Desconto da categoria: %.2f\n Preço final %.2f", preco * 0.2, preco * 0.8);
    } else {
        printf("Categoria inválida.\n");
    }
    return 0;
}