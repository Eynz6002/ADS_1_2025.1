/*
### **Questão 5 (Dificuldade: Difícil)**

**Título:** Contador de Vogais e Consoantes

**Objetivo:** Usar passagem por referência para gerenciar o 
estado de múltiplas variáveis ao longo de um laço na `main`.

**Enunciado:** Crie um procedimento 
`void contarLetras(char c, int *vogais, int *consoantes)` 
que recebe um caractere e dois ponteiros para contadores 
inteiros. A função deve verificar se o caractere é uma vogal 
(sem diferenciar maiúsculas/minúsculas) ou uma consoante e 
incrementar o contador correspondente. Na função `main`, 
crie um laço que peça ao usuário para digitar letras 
repetidamente, até que ele digite um ponto (`.`). A cada 
letra digitada, chame o procedimento `contarLetras`. Ao final 
do laço, imprima o total de vogais e consoantes digitadas.

**Conceitos Principais:** Passagem por referência para gerenciamento 
de estado, laço na `main`, manipulação de `char`, 
lógica condicional complexa.
*/
#include <stdio.h>
#include <ctype.h>

void contar_letras(char c, int *vogais, int *consoantes) {
    c = tolower(c);
    
    if (c >= 'a' && c <= 'z') {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            (*vogais)++;
        } else {
            (*consoantes)++;
        }
    }
}
int main()
{
    int vogais = 0, consoantes = 0;
    char caractere;
    
    while(1) {
        printf("Digite uma letra ('.' para sair): ");
        scanf(" %c", &caractere);
        
        if(caractere == '.') break;
        
        contar_letras(caractere, &vogais, &consoantes);
    }
    
    printf("   Contagem\n");
    printf("   Vogais: %d\n", vogais);
    printf("   Consoantes: %d", consoantes);

    return 0;
}
