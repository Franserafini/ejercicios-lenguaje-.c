#include <stdio.h>

int main(void) {
	
	int centinela = 0;
	int num;
	
	while (centinela == 0){
		printf("Ingrese el numero 23:");
		scanf ("%d", &num);
		
		if (num ==23)
			centinela = 1;
		else 
			printf ("Numero incorrecto\n");
		
		
	}
	printf ("Usted ingreso el %d!\n", num);
	
	
	
	return 0;
}

