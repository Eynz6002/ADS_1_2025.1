/*
Q3: Menu de Operações Matemáticas
Escreva um programa em C que apresente ao usuário
um menu com 4 operações matemáticas básicas.
O programa deve solicitar ao usuário que escolha
uma opção (1 a 4) e, em seguida, peça dois números inteiros.
Após receber os números, o programa deve realizar
a operação escolhida e exibir o resultado.
Menu de Opções:
Soma
Subtração
Multiplicação
Divisão
Requisitos:
Utilize a estrutura switch para determinar qual
operação realizar com base na escolha do usuário.
Se o usuário escolher a operação de Divisão (opção 4)
e o segundo número (divisor) for zero, o programa
deve exibir a mensagem "Erro: Divisao por zero nao
permitida!" em vez de realizar o cálculo.
Se o usuário inserir uma opção inválida no menu
(diferente de 1, 2, 3 ou 4), o programa deve exibir "Opcao invalida!".
Para a divisão, o resultado pode ser um número real
(exiba com duas casas decimais). Considere o uso de
conversão de tipo explícita, se necessário, para garantir a precisão da divisão.
Exemplo de Entrada (Divisão):
Escolha uma operacao:
Soma
Subtracao
Multiplicacao
Divisao

Digite sua escolha: 4
Digite o primeiro numero: 10
Digite o segundo numero: 3

Exemplo de Saída (Divisão):
Resultado: 10 / 3 = 3.33Divisao
*/
#include <stdio.h>

int main()
{
    int opt = -1;
    float a, b, c;
    
    printf("Menu\n");
    printf("1. Adição.\n");
    printf("2. Subtração.\n");
    printf("3. Multiplicação.\n");
    printf("4. Divisão.\n");
    printf("Escolha: ");
    scanf("%d", &opt);
    
    printf("1° Valor: ");
    scanf("%f", &a);
    printf("2° Valor: ");
    scanf("%f", &b);
    
    switch(opt)
    {
        case 0:
            printf("Finalizando.\n");
            break;
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
    return 0;
}