/*
### **Questão 6 (Dificuldade: Difícil)**

**Título:** Estatísticas Básicas

**Objetivo:** Criar uma única função que "retorna" 
múltiplos resultados de tipos diferentes usando ponteiros.

**Enunciado:** Escreva um procedimento `void 
calcularEstatisticas(int n1, int n2, int n3, int *soma, float *media, int *maior)`. 
A função recebe três números inteiros por valor e 
três ponteiros por referência. Ela deve calcular a 
soma, a média e o maior valor entre os três números, 
armazenando cada resultado no endereço de memória correspondente. 
Na `main`, peça três números ao usuário, chame a 
função e imprima os valores calculados (soma, média e maior).

**Conceitos Principais:** Múltiplos parâmetros por referência, mistura de tipos de ponteiros (`int*`, `float*`).
*/
#include <stdio.h>

void calcular_estatisticas(int n1, int n2, int n3, int* soma, float* media, int* maior) {
    *soma = n1 + n2 +n3;
    
    *media = (float)(*soma) / 3;
    
    if(n1 > (*maior)) {
        *maior = n1;
    }
    if(n2 > (*maior)) {
        *maior = n2;
    }
    if(n3 > (*maior)) {
        *maior = n3;
    }
}
int main()
{
    int n1, n2, n3, soma, maior = -999999;
    float media;
    
    printf("Digite o 1° número: ");
    scanf("%d", &n1);
    
    printf("Digite o 2° número: ");
    scanf("%d", &n2);
    
    printf("Digite o 3° número: ");
    scanf("%d", &n3);
    
    calcular_estatisticas(n1, n2, n3, &soma, &media, &maior);
    
    printf("   Soma: %d\n", soma);
    printf("   Média: %.2f\n", media);
    printf("   Maior: %d\n", maior);
    
    return 0;
}
