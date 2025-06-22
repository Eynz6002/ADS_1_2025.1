/*
Escreva um programa que solicite ao usuário dois números inteiros: 
uma base e um expoente (não negativo). Calcule e imprima o resultado 
da base elevada ao expoente, utilizando apenas laços de repetição for
*/
#include <stdio.h>

int main()
{
    int base = -1, expoente = -1;
    
    //Verificar se o usuário colocou base positiva
    while(base < 0) {
        printf("Digite a base: ");
        scanf("%d", &base);
    }
    
    //Verificar se o usuário colocou expoente positivo
    while(expoente < 0) {
        printf("Digite o expoente: ");
        scanf("%d", &expoente);
    }
    
    //Declara uma auxiliar para receber a potencia
    int potencia = 1;
    
    //Calcula a potencia
    for(int i = 0; i < expoente; i++) {
        potencia = potencia * base;
    }
    
    //Mostra o resultado
    printf("Resultado: %d\n", potencia);
    
    return 0;
}