#include <stdio.h>

int main(void) {
	
	unsigned char nota; // 1 byte
	
	printf ("Ingrese la nota:");
		scanf("%hhu", &nota);
	
	if (nota < 6) {
		printf("El estado del alumno es libre");
	
	} else {
		if (nota >= 8){
			printf(" El estado del alumno es promocionado");
		
		
		} else {
			if (nota >= 6){
				printf ("El estado del alumno es aprobado");
			}
		}
	}
	
	
	
	
	
	
	
	
	
	return 0;
}

