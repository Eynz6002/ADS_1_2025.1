/*
Q1: Verificador de Elegibilidade para Doação de Sangue
Crie um programa em C que pergunte a idade do usuário e o seu peso em quilogramas.
O programa deve então verificar se o usuário é elegível para doar sangue.
As condições para ser elegível são:
Ter de 18 a 69 anos.
Pesar 50kg ou mais.
O programa deve imprimir "Voce pode doar sangue!" se o usuário atender a todas as
condições, ou "Voce NAO pode doar sangue." caso contrário.
Exemplo de Entrada:
Digite sua idade: 25
Digite seu peso (kg): 70.5

Exemplo de Saída:
Voce pode doar sangue
*/
#include <stdio.h>

int main()
{
    int idade = 0;
    float peso = 0.0;
    
    printf("Sua idade: ");
    scanf("%d", &idade);
    
    printf("Seu peso: ");
    scanf("%f", &peso);
    
    if(idade >= 18 && idade <= 69)
    {
        if(peso >= 50.00) printf("Pode doar sangue.\n");
        else printf("Você NÃO pode doar sangue");
    } else {
        printf("Você NÃO pode doar sangue");
    }
    return 0;
}