#include <stdio.h>

int main(void) {
	
	int contador = 0;
	int num;
	
	while (contador < 10) {
		printf("Ingrese un numero:");
		scanf("%d", &num);
		contador = contador + 1;
		if (num == 5)
			printf ("Numero acertado!\n");
			break;

	}
	printf("FIN!");
	
	
	return 0;
}

