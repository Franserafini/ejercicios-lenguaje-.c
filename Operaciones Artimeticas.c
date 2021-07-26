#include <stdio.h>

int main(void) {
	
	int num1 = 42;
	int num2 = 40;
	int suma;
	int resta;
	int mult;
	float div;
	int resto;
	
	suma = num1 + num2;
	resta = num1 - num2;
	mult = num1 * num2;
	div = num1 / num2;
	
	
	printf( "La suma es: %d\n", suma);
	printf( "La resta es: %d\n", resta);
	printf( "La multpliacion es: %d\n", mult);
	
	//operador de casteo (tipo)
	div = num1 /(float) num2;
	printf( "La division es: %f\n", div);
	
	// Resto
	resto = num1 % num2;
	printf( "El resto es:%d\n" ,resto);
	

	return 0;
}

