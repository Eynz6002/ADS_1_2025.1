/*
### **QuestC#o 8 (Dificuldade: Muito DifC-cil)**

**TC-tulo:** OrdenaC'C#o de TrC*s NC:meros por ReferC*ncia

**Objetivo:** Implementar um algoritmo de ordenaC'C#o
simples manipulando diretamente os valores na `main`
atravC)s de ponteiros.

**Enunciado:** Crie um procedimento `void ordenar3(int *a, int *b, int *c)`
que recebe ponteiros para trC*s variC!veis inteiras. A funC'C#o nC#o
deve retornar nada, mas ao final de sua execuC'C#o, os valores
nas variC!veis originais (na `main`) devem estar em ordem
crescente (o valor em `a` deve ser o menor, em `b` o do meio,
e em `c` o maior). Na `main`, declare trC*s nC:meros, imprima-os,
chame a funC'C#o `ordenar3` e imprima-os novamente para mostrar que
foram ordenados. (Dica: pode ser necessC!rio usar a lC3gica da funC'C#o
`trocarValores`).

**Conceitos Principais:** LC3gica de ordenaC'C#o, mC:ltiplas
comparaC'C5es e trocas, manipulaC'C#o direta da memC3ria via ponteiros.
*/
#include <stdio.h>

void trocar_valores(int* val_1, int* val_2) {
    int ajudante = *val_2;
    
    *val_2 = *val_1;
    *val_1 = ajudante;
}
void ordenar_3(int* a, int* b, int* c) {
	int aux;

	if(*a > *b) {
		trocar_valores(a, b);
	}
	if(*a > *c) {
		trocar_valores(a, c);
	}
	if(*b > *c) {
		trocar_valores(b, c);
	}
}
int main()
{
	int a = 4, b = 1, c = 7;
	
	printf("   Desordenado: \n");
	printf("   Primeiro: %d\n", a);
	printf("   Segundo: %d\n", b);
	printf("   Terceiro: %d\n", c);
	
	ordenar_3(&a, &b, &c);
	
	printf("\n   Ordenado: \n");
	printf("   Primeiro: %d\n", a);
	printf("   Segundo: %d\n", b);
	printf("   Terceiro: %d\n", c);

	return 0;
}
