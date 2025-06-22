/*
Escreva um programa que solicite ao usuário um número inteiro positivo N. 
O programa deve desenhar um triângulo retângulo à esquerda, formado por 
asteriscos, com N linhas.
*/
#include <stdio.h>

int main()
{
    int numero = 0;
    
    printf("Digite um número positivo: ");
    scanf("%d", &numero);
    
    // Tratamento de erro
    if(numero < 0) {
        printf("Você digitou um número negativo.\n");
        printf("Digite um número positivo: ");
        scanf("%d", &numero);
    }
    
    //Controla as linhas
    for(int i = 1; i <= numero; i++) {
        
        //Controla a escrita de '*'
        for(int j = 0; j < i; j++) {
            printf("*");
        }
        //Pula a linha
        printf("\n");
    }

    return 0;
}
