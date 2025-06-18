#include <stdio.h>

int main() {
    int limite = 0;
    int atual = 1;
    int aux = atual;
    int cont = 0;
    
    while (limite < 1) {
        printf("Digite o limite da procura: ");
        scanf("%d", &limite);
    }
    printf("Números de armstrong: ");
    while(atual < limite) {
        while(aux != 0) {
            aux = aux/10;
            cont++;
        }
        
        int potencia = 0, soma_potencia = 0, copia_atual = atual;
        
        for(int i = 0; i < cont; i++) {
            aux = copia_atual%10;
            copia_atual = copia_atual/10;
            
            potencia = 1;
            for(int j = 0; j < cont; j++) {
                potencia *= aux;
            }
            soma_potencia += potencia;
        }
        
        if(soma_potencia == atual) {
            printf("[%d] ", atual);
        }
        atual++;
        aux = atual;
        cont = 0;
    }

    return 0;
}