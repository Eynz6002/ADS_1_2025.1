/*
**Título:** Divisão Segura com Verificação
**Objetivo:** Criar uma função que retorna um valor e, 
ao mesmo tempo, informa um status através de passagem 
por referência.
**Enunciado:** Escreva uma função chamada `divisaoSegura` 
que receba dois números `float` por valor e um ponteiro 
para um inteiro (`int *sucesso`) por referência. A função 
deve tentar dividir o primeiro número pelo segundo.

- Se a divisão for possível (divisor diferente de zero), 
a função deve armazenar `1` na variável apontada por 
`sucesso` e retornar o resultado da divisão.
- Se a divisão não for possível (divisor igual a zero), 
a função deve armazenar `0` na variável apontada por 
`sucesso` e retornar `0`.

Na `main`, peça dois números, chame a função e, com base 
no valor da variável de sucesso, imprima o resultado ou a 
mensagem "Erro: Divisao por zero!".

**Conceitos Principais:** Retorno de valor, passagem por 
valor e por referência combinadas, controle de status.
*/
#include <stdio.h>


int divisao_segura(float valor_1, float valor_2, int* sucesso) {
    float resultado = valor_1/valor_2;
    
    if(valor_2 != 0) {
        *sucesso = 1;
        return resultado;
    } else {
        *sucesso = 0;
        return 0;
    }
}
int main()
{
    float valor_1, valor_2;
    int sucesso;
    printf("Digite o 1°: ");
    scanf("%f", &valor_1);
    
    printf("Digite o 2°: ");
    scanf("%f", &valor_2);
    
    float resultado = divisao_segura(valor_1, valor_2, &sucesso);
    
    switch(sucesso) {
        case 0:
        printf("Erro: Divisao por zero!\n");
        break;
        case 1:
        printf("Resultado: %.2f", resultado);
        break;
    }
    return 0;
}
