/*
### **Questão 4 (Dificuldade: Difícil)**

**Título:** Trocando Valores com Ponteiros
**Objetivo:** Utilizar a passagem por referência 
para manipular e alterar o valor de duas variáveis 
na `main`.
**Enunciado:** Crie um procedimento chamado `trocarValores` 
que receba como parâmetros os ponteiros de duas variáveis 
inteiras. O procedimento deve trocar o conteúdo dessas duas 
variáveis. Na `main`, declare duas variáveis `A` e `B` com 
valores distintos, imprima seus valores, chame o procedimento 
`trocarValores` e imprima os valores novamente para confirmar a troca.

**Conceitos Principais:** Passagem por referência para 
múltiplas variáveis, uso de variável auxiliar.
*/
#include <stdio.h>

void trocar_valores(int* val_1, int* val_2) {
    int ajudante = *val_2;
    
    *val_2 = *val_1;
    *val_1 = ajudante;
}
int main()
{
    int val_1 = 0, val_2 = -1;
    
    printf("Digite o valor 1: ");
    scanf("%d", &val_1);
    printf("Digite o valor 2: ");
    scanf("%d", &val_2);
    
    trocar_valores(&val_1, &val_2);
    
    printf("Valor 1: %d\n", val_1);
    printf("Valor 2: %d", val_2);

    return 0;
}
