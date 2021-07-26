#include <stdio.h>

int main(void) {
	
	float balance;
	
	printf("Ingrese el balance:");
	scanf("%f", &balance);
	
	if (balance == 12.3) { // hacer esto esta mal, el float es una aproximacion!
		printf("El balance es igual a 12.3\n:");
	} else {
		printf("El balande NO es igual a 12.3\n");
	}
	
	
	
	
	return 0;
}

