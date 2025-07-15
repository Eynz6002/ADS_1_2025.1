/*
### **(3,5) Q2: Calculadora de Operações Básicas**

Crie um programa que leia dois números de ponto flutuante (`float`). O programa 
deverá calcular e exibir a soma, a subtração, a multiplicação e a divisão desses dois 
números. A lógica dos cálculos deverá ser encapsulada em um único procedimento.

- **Requisitos de Implementação:**
    1. **É obrigatório criar um procedimento** chamado `calcularOperacoes`.
    2. O procedimento DEVE receber os dois números lidos na `main` como 
    parâmetros (passagem por **valor**).
    3. O procedimento também DEVE receber quatro ponteiros como parâmetros, 
    um para cada operação matemática.
    4. Dentro de `calcularOperacoes`, todos os quatro cálculos devem ser 
    realizados e seus resultados devem ser armazenados nos endereços de 
    memória apontados pelos ponteiros. A divisão por zero não precisa ser 
    tratada.
*/
#include <stdio.h>

int calcularOperacoes(float val1, float val2, float* soma, float* dif, float* produto, float* quociente) {
    *soma = val1 + val2;
    *dif = val1 - val2;
    *produto = val1 * val2;
    *quociente = val1 / val2;
}
int main()
{
    float val1 = 25, val2 = 5;
    float soma, dif, produto, quociente = 0;
    
    printf("   1° número: ");
    scanf("%f", &val1);
    printf("   2° número: ");
    scanf("%f", &val2);
    
    calcularOperacoes(val1, val2, &soma, &dif, &produto, &quociente);
    
    printf("\n   RESULTADOS\n");
    printf("   Soma: %.2f\n", soma);
    printf("   Diferença: %.2f\n", dif);
    printf("   Produto: %.2f\n", produto);
    printf("   Quociente: %.2f\n", quociente);
    
    return 0;
}
