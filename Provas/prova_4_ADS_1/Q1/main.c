/*

### **(2,0) Q1: Verificador de Múltiplo**

Crie um programa que leia dois números inteiros. O programa deverá então 
determinar se um deles é um múltiplo do outro. Para isso, você deverá implementar 
uma função específica que realize essa verificação.

- **Requisitos de Implementação:**
    1. **É obrigatório criar uma função** chamada `ehMultiplo` que receba os dois 
    números inteiros, `A` e `B`, como parâmetros (passagem por **valor**).
    2. A função `ehMultiplo` DEVE retornar `1` se um dos valores for um múltiplo 
    do outro, e `0` caso contrário. 
    3. A função `main` DEVE ler os dois números, chamar a função `ehMultiplo` para 
    obter o resultado e, com base no retorno, imprimir uma das seguintes 
    mensagens: "`[X] é um múltiplo de [Y].`" ou "`
    [X] não é um múltiplo de [Y].`".*/

#include <stdio.h>

int ehMultiplo(int a, int b) {
    int n = a/b;
    
    if((b*n) == a) {
        return 1;
    }
    
    n = b/a;
    
    if((a*n) == b) {
        return 1;
    }
    
    return 0;
    //a é multiplo seguintes
    //b * n = a -> (a/b) = n -> b * n == a?
}
int main()
{
    int a = -1, b = -1;
    
    do {
        printf("\n   Primeiro número: ");
        scanf("%d", &a);
        
        printf("   Segundo número: ");
        scanf("%d", &b);
        
        if(a < 0 || b < 0) {
            printf("   Digite números positivos.\n");
        }
    } while(a < 0 || b < 0);
    
    int Verificador = ehMultiplo(a, b);
    
    if(Verificador) {
        printf("   [%d] é multiplo de [%d]", a, b);
    } else {
        printf("   [%d] não é multiplo de [%d]", a, b);
    }
    return 0;
}
