/*
### **Questão 7 (Dificuldade: Difícil)**

**Título:** Decomposição de Número Real

**Objetivo:** Criar um procedimento que altera múltiplas 
variáveis na `main` usando ponteiros e conversão de tipo.

**Enunciado:** Escreva um procedimento chamado `decompor` 
que receba um número `float` por valor e dois ponteiros: 
um para uma variável `int` (`*parte_inteira`) e outro para 
uma variável `float` (`*parte_fracionaria`). O procedimento 
deve extrair e armazenar a parte inteira do número no primeiro 
ponteiro e a parte fracionária no segundo. Na `main`, declare 
as três variáveis, peça ao usuário um número real (ex: `12.345`), 
chame a função e depois imprima a parte inteira e a parte fracionária calculadas.

**Conceitos Principais:** Passagem por referência, conversão 
de tipo (casting), manipulação de `float`.
*/

#include <stdio.h>

void decompor(float numero, int* inteiro, float* real) {
    *inteiro = (int)numero;
    *real = numero - (float)*inteiro;
}
int main()
{
    float numero, real;
    int inteiro;
    
    printf("Digite um número: ");
    scanf("%f", &numero);
    
    decompor(numero, &inteiro, &real);
    
    printf("   Parte inteira: %d", inteiro);
    printf("   Parte real: %.3f", real);
    
    return 0;
}
