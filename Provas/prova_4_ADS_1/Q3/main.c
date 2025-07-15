/*
### **(4,5) Q3: Gerenciador de Perfil de Jogador**

Crie um programa para gerenciar o perfil de um jogador. O programa deve manter o 
controle do nível, da pontuação e do número de vidas do jogador. O programa deve 
apresentar um menu de ações que o usuário pode realizar repetidamente.

- **Requisitos de Implementação:**
    1. Na função `main`, declare três variáveis para o estado do jogador: `nivel`, 
    `pontuacao` e `vidas`.
    2. A `main` DEVE conter um laço de repetição que exibe um menu com as 
    seguintes opções: `1 - Ganhar Pontos`, `2 - Perder Vida`, 
    `3 - Subir de Nível`, `4 - Exibir Status`, `5 - Sair`.
    3. **É obrigatório criar e utilizar as seguintes funções**, chamadas a partir da 
    `main`:
        - `ganharPontos`: Recebe um ponteiro para a pontuação. A função deve 
        perguntar ao usuário quantos pontos foram ganhos e adicionar essa 
        quantidade à pontuação original.
        - `perderVida`: Recebe um ponteiro para as vidas. A função deve 
        decrementar o número de vidas em 1, mas apenas se o jogador tiver mais 
        de 0 vidas.
        - `subirNivel`: Recebe ponteiros para o nível e para a pontuação. A função 
        deve aumentar o nível em 1 e zerar a pontuação do jogador (simulando 
        que os pontos foram "usados" para passar de nível).
        - `exibirStatus`: Recebe o nível, a pontuação e as vidas. Esta função deve 
        apenas imprimir na tela o status atual do jogador (ex: "Nível: [n] | 
        Pontuação: [p] | Vidas: [v]").
        - O programa deve encerrar apenas quando o usuário selecionar a opção 
        5.
*/
#include <stdio.h>

void exibir_status(int* nivel, int *pontuacao, int* vida) {
    printf("    ==========================\n");
    printf("   |          STATUS\n");
    printf("   |     NÍVEL: [%d]\n", *nivel);
    printf("   |     PONTUAÇÃO: [%d]\n", *pontuacao);
    printf("   |     VIDAS: [%d]\n", *vida);
    printf("    ==========================\n");
}
void subir_nivel(int* pontuacao, int* nivel) {
    if(pontuacao) {
        (*nivel)++;
        (*pontuacao) = 0;
    }
}
void perder_vida(int* vida) {
    if(*vida > 0) {
        (*vida)--;
    }
}
void ganhar_pontos(int* pontuacao) {
    int mais = -1;
    while(mais == -1 || mais < 0) {
        printf("Pontos ganhos: ");
        scanf("%d", &mais);
        
        if(mais < 0) printf("Digite um número maior.\n");
    }
    
    *pontuacao += mais;
}
int main()
{
    int nivel = 1;
    int pontuacao = 100; // Mantendo seu valor inicial de 100
    int vida = 3;
    int opcao; // Variável para a escolha do usuário no menu

    do {
        printf("\n--- Gerenciador de Perfil do Jogador ---\n");
        printf("1 - Ganhar Pontos\n");
        printf("2 - Perder Vida\n");
        printf("3 - Subir de Nível\n");
        printf("4 - Exibir Status\n");
        printf("5 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                ganhar_pontos(&pontuacao);
                break;
            case 2:
                perder_vida(&vida);
                break;
            case 3:
                subir_nivel(&pontuacao, &nivel);
                break;
            case 4:
                exibir_status(&nivel, &pontuacao, &vida);
                break;
            case 5:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }
    } while (opcao != 5);

    return 0;
}
