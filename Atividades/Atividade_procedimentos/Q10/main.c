/*
### **Questão 10 (Dificuldade: Desafio)**

**Título:** Simulador de Caixa Eletrônico com Funções

**Objetivo:** Integrar todos os conceitos para criar 
um programa modular e interativo.

**Enunciado:** Crie um programa que simule um caixa 
eletrônico. Na `main`, declare uma variável `float saldo` 
com valor inicial de R$1000,00. O programa deve exibir um 
menu em um laço `while`: `1-Ver Saldo`, `2-Sacar`, `3-Depositar`, `4-Sair`.
Crie as seguintes funções:

- `void exibirSaldo(float s)`: Recebe o saldo por **valor** e apenas o exibe.
- `void realizarSaque(float *s)`: Recebe o ponteiro do saldo por **referência**. 
Pede o valor do saque, verifica se há saldo suficiente e, se houver, atualiza o 
saldo original.
- `void realizarDeposito(float *s)`: Recebe o ponteiro do saldo por **referência**. 
Pede o valor do depósito e atualiza o saldo original.

Na `main`, use um `switch` para chamar a função apropriada. O programa só termina 
quando o usuário escolhe a opção "Sair".

**Conceitos Principais:** Integração de laços, `switch`, múltiplos procedimentos,
mistura de passagem por valor e referência conforme a necessidade.
*/
#include <stdio.h>

void sacar(float* saldo);
void ver_saldo(float* saldo);
void depositar(float* saldo);

int main()
{
    int opc = -1;
    float saldo = 1000.00;
    while(opc != 0) {
        printf("\n   ===== MENU =====\n");
        printf("   1 - Ver Saldo\n");
        printf("   2 - Saque\n");
        printf("   3 - Depósito\n");
        printf("   0 - Saindo\n");
        printf("   Digite: ");
        scanf("%d", &opc);
        switch(opc) {
            case 0:
                printf("   Saindo.\n");
                break;
            case 1:
                ver_saldo(&saldo);
                break;
            case 2:
                sacar(&saldo);
                break;
            case 3:
                depositar(&saldo);
                break;
        }
    }

    return 0;
}
void ver_saldo(float* saldo) {
    printf("   Seu saldo é: %.2f\n", *saldo);
}
void sacar(float* saldo) {
    float valor_saque = -1;
    
    while(valor_saque < 0) {
        printf("   Digite o valor do saque: ");
        scanf("%f", &valor_saque);
        
        if(valor_saque > *saldo) {
            printf("   Saque maior que saldo.\n   Digite um valor menor.\n");
            continue;
        } else {
            *saldo -= valor_saque;
            printf("   Saque realizado com sucesso.\n");
            ver_saldo(saldo);
        }
    }
}
void depositar(float* saldo) {
    float valor_deposito = -1;
    
    while(valor_deposito < 0) {
        printf("   Digite o valor do depósito: ");
        scanf("%f", &valor_deposito);
        
        if(valor_deposito < 0) {
            printf("   Depósito muito pequeno.\n   Digite um valor maior.\n");
            continue;
        } else {
            *saldo += valor_deposito;
            printf("   Depósito realizado com sucesso.\n");
            ver_saldo(saldo);
        }
    }
}