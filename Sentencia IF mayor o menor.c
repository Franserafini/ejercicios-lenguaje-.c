#include <stdio.h>

int main(void) {
	
	float temperatura;
	
	
	temperatura = 1.2;
	
	printf("Ingrese la temperatura:");
		scanf("%f", &temperatura);
	
	
	if(temperatura > 100) {
		printf("Encender Ventilacion");
	
	} else {
		printf("Apagar ventilacion\n");
		printf("La ventilacion debe estar apagada\n");
	}
	
	
	
	
	
	return 0;
}

