/*
### **Questão 1 (Dificuldade: Média)**

**Título:** Tabuada com Procedimento
**Objetivo:** Criar um procedimento que utiliza uma estrutura de 
repetição, recebendo dados por valor.
**Enunciado:** Crie um procedimento chamado `imprimirTabuada` que
receba um número inteiro como parâmetro (por valor). Este procedimento 
deve usar um laço `for` para imprimir a tabuada de multiplicação 
(de 1 a 10) do número recebido. Na função `main`, solicite um número 
ao usuário e passe-o para o procedimento.

**Conceitos Principais:** Procedimento (`void`), passagem por valor, 
laço de repetição (`for`).
*/
#include <stdio.h>

void imprimir_tabuada(int valor) {
    printf("  Tabuada do %d\n", valor);
    for(int i = 1; i <= 10; i++) {
        int produto = valor * i;
        printf("  %d x %d = %d\n", valor, i, produto);
    }
}
int main()
{
    int valor = -1;
    
    printf("Digite um número: ");
    scanf("%d", &valor);
    imprimir_tabuada(valor);
    
    return 0;
}