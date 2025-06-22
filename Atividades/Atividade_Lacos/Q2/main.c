#include <stdio.h>

int main() {
    int nota = 0, total_notas = 0, quant_notas = 0;
    float media;

    // True - false
    // 1    -  0  
    while (1) // Laço infinito
    {
        printf("Digite a nota: ");
        scanf("%d", &nota);

        if(nota < 0) {
            break;
        }

        if (nota <= 100)
        {
            total_notas += nota;
            quant_notas++;
        }
        
    }

    media = (float)total_notas / (float)quant_notas;

    printf("Média da turma (%d alunos): %.2f", quant_notas, media);
    
    return 0;
}