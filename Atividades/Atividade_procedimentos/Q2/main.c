/*
**Título:** Incremento por Referência
**Objetivo:** Introduzir o conceito de passagem de parâmetro por 
referência para modificar uma variável da `main`.
**Enunciado:** Crie um procedimento chamado `incrementar` que receba 
um ponteiro para uma variável inteira como parâmetro. O procedimento 
deve aumentar o valor da variável original em uma unidade. Na função 
`main`, declare uma variável inteira com valor `10`, chame o procedimento 
`incrementar` passando o endereço dela e, depois, imprima o valor da 
variável para provar que foi modificada.

**Conceitos Principais:** Passagem por referência (ponteiros `*` e `&`), 
procedimento.
*/
#include <stdio.h>

void incrementar(int* valor){
    *valor = *valor * 10;
}

int main()
{
    int valor = 10;
    
    incrementar(&valor);
    
    printf("Valor: %d", valor);
    return 0;
}