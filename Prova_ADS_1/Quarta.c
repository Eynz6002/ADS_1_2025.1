/*
Q4: Analisador de Elegibilidade de Empréstimo e Taxa de Juros
Crie um programa em C que simule uma análise de elegibilidade para 
um empréstimo e determine a taxa de juros aplicável.
O programa deve solicitar ao usuário:

Renda mensal (um valor real, ex: 3500.50).

Categoria de score de crédito (um número inteiro: 1 para Ruim, 
2 para Regular, 3 para Bom, 4 para Excelente).

Valor do empréstimo desejado (um valor real, ex: 10000.00).

O programa deve seguir as seguintes regras de análise:

Elegibilidade Básica pela Renda:

A renda mensal deve ser superior a R$ 1200.00.

Se a renda for igual ou inferior a R$ 1200.00, exiba "Emprestimo negado: 
Renda insuficiente." e o programa deve encerrar.

Análise por Score de Crédito e Valor (se a renda for suficiente):
Use um switch ou if-else if para tratar a categoria de score.

Score 1 (Ruim): Exiba "Emprestimo negado: Score de credito muito baixo."
Score 2 (Regular): Se o valor do empréstimo desejado for até 5 vezes a renda mensal do usuário:
Exiba "Emprestimo aprovado! Taxa de juros: 20% a.a."

Caso contrário (valor do empréstimo > 5x a renda):
Exiba "Emprestimo negado: Valor solicitado excede o limite para este score."
Score 3 (Bom): Se o valor do empréstimo desejado for até 10 vezes a renda mensal do usuário:
Exiba "Emprestimo aprovado! Taxa de juros: 12% a.a."

Caso contrário (valor do empréstimo > 10x a renda):
Exiba "Emprestimo negado: Valor solicitado excede o limite para este score."

Score 4 (Excelente):
Se o valor do empréstimo desejado for até 15 vezes a renda mensal do usuário:
Exiba "Emprestimo aprovado! Taxa de juros: 8% a.a."

Caso contrário (valor do empréstimo > 15x a renda):
Exiba "Emprestimo negado: Valor solicitado excede o limite para este score."

Score Inválido:
Se a categoria de score inserida for diferente de 1, 2, 3 ou 4, exiba 
"Categoria de score invalida."

Exemplo de Entrada 1 (Aprovado com Score Bom):
Digite sua renda mensal: 4000.00
Digite sua categoria de score (1-Ruim, 2-Regular, 3-Bom, 4-Excelente): 3
Digite o valor do emprestimo desejado: 30000.00

Exemplo de Saída 1:
Emprestimo aprovado! Taxa de juros: 12% a.a.

Exemplo de Entrada 2 (Negado por Renda):
Digite sua renda mensal: 1100.00
Digite sua categoria de score (1-Ruim, 2-Regular, 3-Bom, 4-Excelente): 4
Digite o valor do emprestimo desejado: 5000.00

Exemplo de Saída 2:
Emprestimo negado: Renda insuficiente.

Exemplo de Entrada 3 (Negado por Limite do Score Regular):
Digite sua renda mensal: 2000.00
Digite sua categoria de score (1-Ruim, 2-Regular, 3-Bom, 4-Excelente): 2
Digite o valor do emprestimo desejado: 15000.00

Exemplo de Saída 3:
Emprestimo negado: Valor solicitado excede o limite para este score
*/
#include <stdio.h>

int main()
{
    float renda_mensal = 0.0, emprestimo = 0.0;
    int categoria = 0;
    
    printf("Digite sua renda mensal: ");
    scanf("%f", &renda_mensal);
    printf("Categorias:\n1 - Ruim \n2 - Regular \n3-Bom \n4-Excelente\n");
    printf("Digite sua categoria de score: ");
    scanf("%d", &categoria);
    printf("Digite o valor do emprestimo desejado: ");
    scanf("%f", &emprestimo);
    
    if(renda_mensal > 1200.00)
    {
        switch(categoria)
        {
            case 1:
                printf("Emprestimo negado: Score de credito muito baixo.");
                break;
            case 2:
                if(emprestimo > 5 * renda_mensal) {
                    printf("Emprestimo negado: Valor solicitado excede o limite para este score.\n");
                } else {
                    printf("Emprestimo aprovado! Taxa de juros de 20%% a.a.\n");
                }
                break;
            case 3:
                if(emprestimo > 10 * renda_mensal) {
                    printf("Emprestimo negado: Valor solicitado excede o limite para este score.\n");
                } else {
                    printf("Emprestimo aprovado! Taxa de juros de 12%% a.a.\n");
                }
                break;
            case 4:
                if(emprestimo > 15 * renda_mensal) {
                    printf("Emprestimo negado: Valor solicitado excede o limite para este score.\n");
                } else {
                    printf("Emprestimo aprovado! Taxa de juros de 8%% a.a.\n");
                }
                break;
            default:
                printf("Categoria de score invalida.\n");
                break;
        }
    } else {
        printf("Emprestimo negado. Renda insuficiente.\n");
    }
    return 0;
}