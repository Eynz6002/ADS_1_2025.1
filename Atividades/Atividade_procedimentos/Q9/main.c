/*

*/
#include <stdio.h>
#include <math.h>

int calcularRaizes(float a, float b, float c, float *x1, float *x2) {
	float delta = (b*b) - (4 * a * c);

	if(delta < 0) return 0;

	float raiz_delta = sqrt(delta);

	*x1 = (-b + raiz_delta)/(2 * a);

	if(delta == 0) {
		return 1;
	} else {
		*x2 = (-b - raiz_delta)/(2 * a);
		return 2;
	}
}
int main()
{
	int A, B, C;
	float x1, x2;

	printf("Digite A: ");
	scanf("%d", &A);

	printf("Digite B: ");
	scanf("%d", &B);

	printf("Digite C: ");
	scanf("%d", &C);

	int resultado = calcularRaizes(A, B, C, &x1, &x2);

	printf("Quantidade de raizes: %d\n", resultado);
	switch(resultado) {
    	case 0:
    		printf("Sem raC-zes.\n");
    		break;
    	case 1:
    		printf("Raiz 1: %.2f\n", x1);
    		break;
    	case 2:
            printf("Raiz 1: %.2f\n", x1);
        	printf("Raiz 2: %.2f\n", x2);
        	break;
	}

	return 0;
}
