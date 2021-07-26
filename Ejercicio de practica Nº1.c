#include <stdio.h>

int main(void) {
	
	int turismos;
	int todoterrenos;
	int capacidad_turistas;
	int capacidad_todoterrenos;
	int combus;
	
	
	printf("Ingrese la cantidad de turismos:");
		scanf("%d", &turismos);
	printf("Ingrese la cantidad de TodoTerrenos:");
		scanf("%d", &todoterrenos);
	printf("Ingrese la capacidad de los turistas:");
		scanf("%d", &capacidad_turistas);
	printf ("Ingrese la capacidad de los TodoTerrenos:");
		scanf("%d", &capacidad_todoterrenos);
		
	//Calculo de necesidades de combustibles
		
	combus = (turismos * capacidad_turistas) + (todoterrenos * capacidad_todoterrenos);
		
		printf("Las necesidades de combustibles son (litros): %d", combus);
	
	
	return 0;
}

